
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int lpm; } ;
union orb {TYPE_4__ cmd; } ;
typedef int u32 ;
struct vfio_ccw_private {int state; int cp; struct subchannel* sch; } ;
struct TYPE_5__ {int actl; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
struct TYPE_7__ {TYPE_2__ scsw; } ;
struct subchannel {int lock; int lpm; TYPE_3__ schib; int schid; int dev; } ;
typedef int ccode ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int*,int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct subchannel*) ;
 union orb* FUNC_3 (int *,int ,int ) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,union orb*) ;

__attribute__((used)) static int FUNC_8(struct vfio_ccw_private *VAR_6)
{
 struct subchannel *VAR_7;
 union orb *VAR_8;
 int VAR_9;
 __u8 VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_7 = VAR_6->sch;

 FUNC_5(VAR_7->lock, VAR_11);

 VAR_8 = FUNC_3(&VAR_6->cp, (u32)(addr_t)VAR_7, VAR_7->lpm);
 if (!VAR_8) {
  VAR_12 = -VAR_2;
  goto out;
 }

 FUNC_1(5, "stIO");
 FUNC_1(5, FUNC_4(&VAR_7->dev));


 VAR_9 = FUNC_7(VAR_7->schid, VAR_8);

 FUNC_0(5, &VAR_9, sizeof(VAR_9));

 switch (VAR_9) {
 case 0:



  VAR_7->schib.scsw.cmd.actl |= VAR_4;
  VAR_12 = 0;
  VAR_6->state = VAR_5;
  break;
 case 1:
 case 2:
  VAR_12 = -VAR_1;
  break;
 case 3:
 {
  VAR_10 = VAR_8->cmd.lpm;
  if (VAR_10 != 0)
   VAR_7->lpm &= ~VAR_10;
  else
   VAR_7->lpm = 0;

  if (FUNC_2(VAR_7))
   VAR_12 = -VAR_3;
  else
   VAR_12 = VAR_7->lpm ? -VAR_0 : -VAR_3;
  break;
 }
 default:
  VAR_12 = VAR_9;
 }
out:
 FUNC_6(VAR_7->lock, VAR_11);
 return VAR_12;
}
