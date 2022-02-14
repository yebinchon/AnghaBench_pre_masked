
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
 int VAR_2 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct vfio_ccw_private *VAR_3)
{
 struct subchannel *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->sch;

 FUNC_4(VAR_4->lock, VAR_5);

 FUNC_1(2, "haltIO");
 FUNC_1(2, FUNC_2(&VAR_4->dev));


 VAR_6 = FUNC_3(VAR_4->schid);

 FUNC_0(2, &VAR_6, sizeof(VAR_6));

 switch (VAR_6) {
 case 0:



  VAR_4->schib.scsw.cmd.actl |= VAR_2;
  VAR_7 = 0;
  break;
 case 1:
 case 2:
  VAR_7 = -VAR_0;
  break;
 case 3:
  VAR_7 = -VAR_1;
  break;
 default:
  VAR_7 = VAR_6;
 }
 FUNC_5(VAR_4->lock, VAR_5);
 return VAR_7;
}
