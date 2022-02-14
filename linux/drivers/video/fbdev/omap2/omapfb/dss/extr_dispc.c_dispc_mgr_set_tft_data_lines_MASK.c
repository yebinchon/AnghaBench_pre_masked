
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static void FUNC_2(enum omap_channel VAR_1, u8 VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 12:
  VAR_3 = 0;
  break;
 case 16:
  VAR_3 = 1;
  break;
 case 18:
  VAR_3 = 2;
  break;
 case 24:
  VAR_3 = 3;
  break;
 default:
  FUNC_0();
  return;
 }

 FUNC_1(VAR_1, VAR_0, VAR_3);
}
