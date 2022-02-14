
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_block {struct block_device* bdev; int base; int gdp; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct block_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct block_device*,int ,int *) ;
 int FUNC_3 (struct block_device*) ;

int FUNC_4(struct dasd_block *VAR_3)
{
 struct block_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3->gdp, 0);
 if (!VAR_4) {
  FUNC_0(VAR_0, VAR_3->base, "%s",
         "scan partitions error, bdget returned NULL");
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_2, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_0(VAR_0, VAR_3->base,
         "scan partitions error, blkdev_get returned %d",
         VAR_5);
  return -VAR_1;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_0(VAR_0, VAR_3->base,
    "scan partitions error, rc %d", VAR_5);
 VAR_3->bdev = VAR_4;
 return 0;
}
