
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fmt; int pfch; int ssic; int c64; scalar_t__ cpa; scalar_t__ key; scalar_t__ i2k; scalar_t__ lpm; scalar_t__ spnd; scalar_t__ intparm; } ;
union orb {TYPE_2__ cmd; } ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int actl; } ;
struct TYPE_9__ {TYPE_3__ cmd; } ;
struct TYPE_10__ {TYPE_4__ scsw; } ;
struct subchannel {scalar_t__ lpm; TYPE_5__ schib; int schid; int dev; } ;
struct TYPE_6__ {scalar_t__ prefetch; scalar_t__ inter; scalar_t__ suspend; } ;
struct io_subchannel_private {TYPE_1__ options; union orb orb; } ;
struct ccw1 {int dummy; } ;
typedef int ccode ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ccw1*) ;
 int FUNC_3 (struct subchannel*,scalar_t__) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (union orb*,int ,int) ;
 int FUNC_6 (int ,union orb*) ;
 struct io_subchannel_private* FUNC_7 (struct subchannel*) ;

int
FUNC_8 (struct subchannel *VAR_2,
        struct ccw1 * VAR_3,
        __u8 VAR_4,
        __u8 VAR_5)
{
 struct io_subchannel_private *VAR_6 = FUNC_7(VAR_2);
 union orb *VAR_7 = &VAR_6->orb;
 int VAR_8;

 FUNC_1(5, "stIO");
 FUNC_1(5, FUNC_4(&VAR_2->dev));

 FUNC_5(VAR_7, 0, sizeof(union orb));

 VAR_7->cmd.intparm = (u32)(addr_t)VAR_2;
 VAR_7->cmd.fmt = 1;

 VAR_7->cmd.pfch = VAR_6->options.prefetch == 0;
 VAR_7->cmd.spnd = VAR_6->options.suspend;
 VAR_7->cmd.ssic = VAR_6->options.suspend && VAR_6->options.inter;
 VAR_7->cmd.lpm = (VAR_4 != 0) ? VAR_4 : VAR_2->lpm;



 VAR_7->cmd.c64 = 1;
 VAR_7->cmd.i2k = 0;
 VAR_7->cmd.key = VAR_5 >> 4;

 VAR_7->cmd.cpa = (__u32) FUNC_2(VAR_3);
 VAR_8 = FUNC_6(VAR_2->schid, VAR_7);


 FUNC_0(5, &VAR_8, sizeof(VAR_8));

 switch (VAR_8) {
 case 0:



  VAR_2->schib.scsw.cmd.actl |= VAR_1;
  return 0;
 case 1:
 case 2:
  return -VAR_0;
 case 3:
  return FUNC_3(VAR_2, VAR_4);
 default:
  return VAR_8;
 }
}
