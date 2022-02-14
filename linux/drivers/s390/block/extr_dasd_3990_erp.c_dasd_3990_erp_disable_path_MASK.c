
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int features; TYPE_2__* path; TYPE_1__* cdev; } ;
typedef int __u8 ;
struct TYPE_4__ {int error_count; scalar_t__ errorclk; int chpid; int cssid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dasd_device*,int) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,int) ;
 int FUNC_4 (int *,char*,int ,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dasd_device *VAR_1, __u8 VAR_2)
{
 int VAR_3 = FUNC_5(VAR_2);

 if (!(VAR_1->features & VAR_0)) {
  FUNC_4(&VAR_1->cdev->dev,
   "Path %x.%02x (pathmask %02x) is operational despite excessive IFCCs\n",
   VAR_1->path[VAR_3].cssid, VAR_1->path[VAR_3].chpid, VAR_2);
  goto out;
 }


 if (!(FUNC_2(VAR_1) & ~VAR_2)) {
  FUNC_4(&VAR_1->cdev->dev,
   "Last path %x.%02x (pathmask %02x) is operational despite excessive IFCCs\n",
   VAR_1->path[VAR_3].cssid, VAR_1->path[VAR_3].chpid, VAR_2);
  goto out;
 }

 FUNC_4(&VAR_1->cdev->dev,
  "Path %x.%02x (pathmask %02x) is disabled - IFCC threshold exceeded\n",
  VAR_1->path[VAR_3].cssid, VAR_1->path[VAR_3].chpid, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);

out:
 VAR_1->path[VAR_3].errorclk = 0;
 FUNC_0(&VAR_1->path[VAR_3].error_count, 0);
}
