
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_cmd {int se_dev; } ;
struct iblock_dev {int ibd_bd; int ibd_bio_set; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; int * bi_end_io; struct se_cmd* bi_private; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iblock_dev* FUNC_0 (int ) ;
 struct bio* FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int,int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct bio *
FUNC_5(struct se_cmd *VAR_3, sector_t VAR_4, u32 VAR_5, int VAR_6,
        int VAR_7)
{
 struct iblock_dev *VAR_8 = FUNC_0(VAR_3->se_dev);
 struct bio *VAR_9;





 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_9 = FUNC_1(VAR_1, VAR_5, &VAR_8->ibd_bio_set);
 if (!VAR_9) {
  FUNC_4("Unable to allocate memory for bio\n");
  return ((void*)0);
 }

 FUNC_2(VAR_9, VAR_8->ibd_bd);
 VAR_9->bi_private = VAR_3;
 VAR_9->bi_end_io = &VAR_2;
 VAR_9->bi_iter.bi_sector = VAR_4;
 FUNC_3(VAR_9, VAR_6, VAR_7);

 return VAR_9;
}
