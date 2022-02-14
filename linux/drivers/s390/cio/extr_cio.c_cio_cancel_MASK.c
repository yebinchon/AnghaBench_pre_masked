
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schid; int dev; } ;
typedef int ccode ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct subchannel*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5 (struct subchannel *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return -VAR_2;

 FUNC_1(2, "cancelIO");
 FUNC_1(2, FUNC_3(&VAR_3->dev));

 VAR_4 = FUNC_4 (VAR_3->schid);

 FUNC_0(2, &VAR_4, sizeof(VAR_4));

 switch (VAR_4) {
 case 0:

  if (FUNC_2(VAR_3))
   return -VAR_2;
  return 0;
 case 1:
  return -VAR_0;
 case 2:
  return -VAR_1;
 default:
  return -VAR_2;
 }
}
