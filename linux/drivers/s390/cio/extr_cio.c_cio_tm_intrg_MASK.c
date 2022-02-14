
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel {int schid; } ;
struct TYPE_4__ {int b; } ;
struct TYPE_5__ {TYPE_1__ tm; } ;
struct TYPE_6__ {TYPE_2__ orb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct subchannel *VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_3)->orb.tm.b)
  return -VAR_1;
 VAR_4 = FUNC_1(VAR_3->schid);
 switch (VAR_4) {
 case 0:
 case 2:
  return 0;
 case 1:
  return -VAR_0;
 default:
  return -VAR_2;
 }
}
