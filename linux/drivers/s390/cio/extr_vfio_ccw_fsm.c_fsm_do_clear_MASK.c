
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_ccw_private {struct subchannel* sch; } ;
struct TYPE_4__ {int actl; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_2__ scsw; } ;
struct subchannel {int lock; TYPE_3__ schib; int schid; int dev; } ;
typedef int ccode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct vfio_ccw_private *VAR_2)
{
 struct subchannel *VAR_3;
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->sch;

 FUNC_4(VAR_3->lock, VAR_4);

 FUNC_1(2, "clearIO");
 FUNC_1(2, FUNC_3(&VAR_3->dev));


 VAR_5 = FUNC_2(VAR_3->schid);

 FUNC_0(2, &VAR_5, sizeof(VAR_5));

 switch (VAR_5) {
 case 0:



  VAR_3->schib.scsw.cmd.actl = VAR_1;

  VAR_6 = 0;
  break;
 case 3:
  VAR_6 = -VAR_0;
  break;
 default:
  VAR_6 = VAR_5;
 }
 FUNC_5(VAR_3->lock, VAR_4);
 return VAR_6;
}
