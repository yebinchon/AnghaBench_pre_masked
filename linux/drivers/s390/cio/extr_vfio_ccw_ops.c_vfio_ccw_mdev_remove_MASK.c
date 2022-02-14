
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_ccw_private {scalar_t__ state; int avail; int * mdev; int cp; TYPE_2__* sch; } ;
struct mdev_device {int dummy; } ;
struct TYPE_3__ {int sch_no; int ssid; int cssid; } ;
struct TYPE_4__ {TYPE_1__ schid; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vfio_ccw_private* FUNC_3 (int ) ;
 int FUNC_4 (struct mdev_device*) ;
 int FUNC_5 (struct mdev_device*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct mdev_device *VAR_2)
{
 struct vfio_ccw_private *VAR_3 =
  FUNC_3(FUNC_4(VAR_2));

 FUNC_0(2, "mdev %pUl, sch %x.%x.%04x: remove\n",
      FUNC_5(VAR_2), VAR_3->sch->schid.cssid,
      VAR_3->sch->schid.ssid,
      VAR_3->sch->schid.sch_no);

 if ((VAR_3->state != VAR_0) &&
     (VAR_3->state != VAR_1)) {
  if (!FUNC_6(VAR_3->sch))
   VAR_3->state = VAR_1;

 }

 FUNC_2(&VAR_3->cp);
 VAR_3->mdev = ((void*)0);
 FUNC_1(&VAR_3->avail);

 return 0;
}
