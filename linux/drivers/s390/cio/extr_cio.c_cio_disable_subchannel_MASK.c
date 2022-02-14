
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ena; } ;
struct subchannel {TYPE_1__ config; int dev; } ;
typedef int ret ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct subchannel*) ;

int FUNC_6(struct subchannel *VAR_1)
{
 int VAR_2;

 FUNC_1(2, "dissch");
 FUNC_1(2, FUNC_4(&VAR_1->dev));

 if (FUNC_5(VAR_1))
  return 0;
 if (FUNC_3(VAR_1))
  return -VAR_0;

 VAR_1->config.ena = 0;
 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(2, &VAR_2, sizeof(VAR_2));
 return VAR_2;
}
