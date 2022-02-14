
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct myrb_hba {int ldev_geom_heads; int ldev_geom_sectors; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int) ;
 struct myrb_hba* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_0, struct block_device *VAR_1,
  sector_t VAR_2, int VAR_3[])
{
 struct myrb_hba *VAR_4 = FUNC_1(VAR_0->host);

 VAR_3[0] = VAR_4->ldev_geom_heads;
 VAR_3[1] = VAR_4->ldev_geom_sectors;
 VAR_3[2] = FUNC_0(VAR_2, VAR_3[0] * VAR_3[1]);

 return 0;
}
