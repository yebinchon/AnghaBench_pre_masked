
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int zone_count; int block_size; int devnum; int size; int max_lba; struct sm_ftl* cis_buffer; struct sm_ftl* zones; struct sm_ftl* cache_data; scalar_t__ zone_size; scalar_t__ disk_attributes; int readonly; struct mtd_info* mtd; struct mtd_blktrans_ops* tr; struct sm_ftl* priv; struct sm_ftl* trans; int flush_work; int timer; int mutex; } ;
struct mtd_info {int size; int index; } ;
struct mtd_blktrans_ops {int dummy; } ;
struct mtd_blktrans_dev {int zone_count; int block_size; int devnum; int size; int max_lba; struct mtd_blktrans_dev* cis_buffer; struct mtd_blktrans_dev* zones; struct mtd_blktrans_dev* cache_data; scalar_t__ zone_size; scalar_t__ disk_attributes; int readonly; struct mtd_info* mtd; struct mtd_blktrans_ops* tr; struct mtd_blktrans_dev* priv; struct mtd_blktrans_dev* trans; int flush_work; int timer; int mutex; } ;
struct ftl_zone {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sm_ftl*) ;
 int FUNC_2 (char*,...) ;
 struct sm_ftl* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct sm_ftl*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct sm_ftl*) ;
 scalar_t__ FUNC_8 (struct sm_ftl*) ;
 scalar_t__ FUNC_9 (struct sm_ftl*) ;
 scalar_t__ FUNC_10 (struct sm_ftl*,struct mtd_info*) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_13(struct mtd_blktrans_ops *VAR_4, struct mtd_info *VAR_5)
{
 struct mtd_blktrans_dev *VAR_6;
 struct sm_ftl *VAR_7;


 VAR_7 = FUNC_5(sizeof(struct sm_ftl), VAR_0);
 if (!VAR_7)
  goto error1;


 FUNC_6(&VAR_7->mutex);
 FUNC_12(&VAR_7->timer, VAR_2, 0);
 FUNC_0(&VAR_7->flush_work, VAR_3);


 if (FUNC_10(VAR_7, VAR_5)) {
  FUNC_2("found unsupported mtd device, aborting");
  goto error2;
 }



 VAR_7->cis_buffer = FUNC_5(VAR_1, VAR_0);
 if (!VAR_7->cis_buffer)
  goto error2;


 VAR_7->zones = FUNC_3(VAR_7->zone_count, sizeof(struct ftl_zone),
        VAR_0);
 if (!VAR_7->zones)
  goto error3;


 VAR_7->cache_data = FUNC_5(VAR_7->block_size, VAR_0);

 if (!VAR_7->cache_data)
  goto error4;

 FUNC_7(VAR_7);



 VAR_6 = FUNC_5(sizeof(struct mtd_blktrans_dev), VAR_0);
 if (!VAR_6)
  goto error5;

 VAR_7->trans = VAR_6;
 VAR_6->priv = VAR_7;

 VAR_6->tr = VAR_4;
 VAR_6->mtd = VAR_5;
 VAR_6->devnum = -1;
 VAR_6->size = (VAR_7->block_size * VAR_7->max_lba * VAR_7->zone_count) >> 9;
 VAR_6->readonly = VAR_7->readonly;

 if (FUNC_9(VAR_7)) {
  FUNC_2("CIS not found on mtd device, aborting");
  goto error6;
 }

 VAR_7->disk_attributes = FUNC_8(VAR_7);
 if (!VAR_7->disk_attributes)
  goto error6;
 VAR_6->disk_attributes = VAR_7->disk_attributes;

 FUNC_11("Found %d MiB xD/SmartMedia FTL on mtd%d",
  (int)(VAR_5->size / (1024 * 1024)), VAR_5->index);

 FUNC_2("FTL layout:");
 FUNC_2("%d zone(s), each consists of %d blocks (+%d spares)",
  VAR_7->zone_count, VAR_7->max_lba,
  VAR_7->zone_size - VAR_7->max_lba);
 FUNC_2("each block consists of %d bytes",
  VAR_7->block_size);



 if (FUNC_1(VAR_6)) {
  FUNC_2("error in mtdblktrans layer");
  goto error6;
 }
 return;
error6:
 FUNC_4(VAR_6);
error5:
 FUNC_4(VAR_7->cache_data);
error4:
 FUNC_4(VAR_7->zones);
error3:
 FUNC_4(VAR_7->cis_buffer);
error2:
 FUNC_4(VAR_7);
error1:
 return;
}
