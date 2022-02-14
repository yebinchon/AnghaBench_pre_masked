
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int name; } ;
struct ispstat {scalar_t__ state; int ioctl_lock; TYPE_2__* isp; TYPE_1__ subdev; int configured; } ;
struct TYPE_4__ {int stat_lock; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (struct ispstat*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ispstat *VAR_5, u8 VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(VAR_5->isp->dev, "%s: user wants to %s module.\n",
  VAR_5->subdev.name, VAR_6 ? "enable" : "disable");


 FUNC_2(&VAR_5->ioctl_lock);

 FUNC_4(&VAR_5->isp->stat_lock, VAR_7);

 if (!VAR_5->configured && VAR_6) {
  FUNC_5(&VAR_5->isp->stat_lock, VAR_7);
  FUNC_3(&VAR_5->ioctl_lock);
  FUNC_0(VAR_5->isp->dev,
   "%s: cannot enable module as it's never been successfully configured so far.\n",
   VAR_5->subdev.name);
  return -VAR_0;
 }

 if (VAR_6) {
  if (VAR_5->state == VAR_2)

   VAR_5->state = VAR_3;
  else if (VAR_5->state == VAR_1)

   VAR_5->state = VAR_4;
 } else {
  if (VAR_5->state == VAR_4) {

   VAR_5->state = VAR_1;
  } else if (VAR_5->state == VAR_3) {

   VAR_5->state = VAR_2;
   FUNC_1(VAR_5);
  }
 }

 FUNC_5(&VAR_5->isp->stat_lock, VAR_7);
 FUNC_3(&VAR_5->ioctl_lock);

 return 0;
}
