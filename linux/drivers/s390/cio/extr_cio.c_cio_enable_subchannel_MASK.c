
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ena; scalar_t__ csense; int intparm; int isc; } ;
struct subchannel {TYPE_1__ config; int isc; int dev; } ;
typedef int ret ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct subchannel*) ;

int FUNC_6(struct subchannel *VAR_3, u32 VAR_4)
{
 int VAR_5;

 FUNC_1(2, "ensch");
 FUNC_1(2, FUNC_4(&VAR_3->dev));

 if (FUNC_5(VAR_3))
  return -VAR_0;
 if (FUNC_3(VAR_3))
  return -VAR_2;

 VAR_3->config.ena = 1;
 VAR_3->config.isc = VAR_3->isc;
 VAR_3->config.intparm = VAR_4;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == -VAR_1) {




  VAR_3->config.csense = 0;
  VAR_5 = FUNC_2(VAR_3);
 }
 FUNC_0(2, &VAR_5, sizeof(VAR_5));
 return VAR_5;
}
