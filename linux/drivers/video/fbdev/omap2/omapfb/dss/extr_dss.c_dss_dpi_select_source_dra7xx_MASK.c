
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, enum omap_channel VAR_4)
{
 switch (VAR_3) {
 case 0:
  return FUNC_0(VAR_3, VAR_4);
 case 1:
  if (VAR_4 != VAR_1)
   return -VAR_0;
  break;
 case 2:
  if (VAR_4 != VAR_2)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
