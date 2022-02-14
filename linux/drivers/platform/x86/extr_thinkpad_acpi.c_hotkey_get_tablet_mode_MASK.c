
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hotkey_tablet; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int*,char*,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_2(int *VAR_4)
{
 int VAR_5;

 switch (VAR_3.hotkey_tablet) {
 case 128:
  if (!FUNC_0(VAR_2, &VAR_5, "MHKG", "d"))
   return -VAR_0;

  *VAR_4 = ((VAR_5 & VAR_1) != 0);
  break;
 case 129:
  if (!FUNC_0(VAR_2, &VAR_5, "GMMS", "dd", 0))
   return -VAR_0;

  *VAR_4 = FUNC_1(VAR_5, ((void*)0));
  break;
 default:
  break;
 }

 return 0;
}
