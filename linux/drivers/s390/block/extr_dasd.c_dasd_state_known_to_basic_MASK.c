
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int state; int debug_area; TYPE_2__* cdev; void* debugfs_dentry; int profile; struct dasd_block* block; } ;
struct dasd_block {int profile; void* debugfs_dentry; TYPE_1__* gdp; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int disk_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dasd_block*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (void*,struct dasd_device*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dasd_device *VAR_7)
{
 struct dasd_block *VAR_8 = VAR_7->block;
 int VAR_9 = 0;


 if (VAR_8) {
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_8->debugfs_dentry =
   FUNC_1(VAR_8->gdp->disk_name,
        VAR_4);
  FUNC_4(&VAR_8->profile, VAR_8->debugfs_dentry);
  if (VAR_5 == VAR_0)
   FUNC_5(&VAR_7->block->profile);
 }
 VAR_7->debugfs_dentry =
  FUNC_1(FUNC_9(&VAR_7->cdev->dev),
       VAR_4);
 FUNC_4(&VAR_7->profile, VAR_7->debugfs_dentry);
 FUNC_3(VAR_7->debugfs_dentry, VAR_7);


 VAR_7->debug_area = FUNC_6(FUNC_9(&VAR_7->cdev->dev), 4, 1,
         8 * sizeof(long));
 FUNC_7(VAR_7->debug_area, &VAR_6);
 FUNC_8(VAR_7->debug_area, VAR_3);
 FUNC_0(VAR_2, VAR_7, "%s", "debug area created");

 VAR_7->state = VAR_1;

 return VAR_9;
}
