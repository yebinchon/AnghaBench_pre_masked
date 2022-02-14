
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_ccw_private {scalar_t__ state; TYPE_2__* sch; struct mdev_device* mdev; int avail; } ;
struct mdev_device {int dummy; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {int sch_no; int ssid; int cssid; } ;
struct TYPE_4__ {TYPE_1__ schid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct vfio_ccw_private* FUNC_2 (int ) ;
 int FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_5(struct kobject *VAR_4, struct mdev_device *VAR_5)
{
 struct vfio_ccw_private *VAR_6 =
  FUNC_2(FUNC_3(VAR_5));

 if (VAR_6->state == VAR_3)
  return -VAR_0;

 if (FUNC_1(&VAR_6->avail) < 0)
  return -VAR_1;

 VAR_6->mdev = VAR_5;
 VAR_6->state = VAR_2;

 FUNC_0(2, "mdev %pUl, sch %x.%x.%04x: create\n",
      FUNC_4(VAR_5), VAR_6->sch->schid.cssid,
      VAR_6->sch->schid.ssid,
      VAR_6->sch->schid.sch_no);

 return 0;
}
