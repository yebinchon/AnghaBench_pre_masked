
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int actl; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_2__ scsw; } ;
struct subchannel {TYPE_3__ schib; int schid; int dev; } ;
typedef int ccode ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct subchannel *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return -VAR_1;

 FUNC_1(2, "haltIO");
 FUNC_1(2, FUNC_2(&VAR_3->dev));




 VAR_4 = FUNC_3 (VAR_3->schid);

 FUNC_0(2, &VAR_4, sizeof(VAR_4));

 switch (VAR_4) {
 case 0:
  VAR_3->schib.scsw.cmd.actl |= VAR_2;
  return 0;
 case 1:
 case 2:
  return -VAR_0;
 default:
  return -VAR_1;
 }
}
