
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, enum omap_channel VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 130:
  VAR_4 = 1;
  break;
 case 129:
  VAR_4 = 2;
  break;
 case 128:
  VAR_4 = 3;
  break;
 case 131:
  VAR_4 = 0;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_0, VAR_4, 17, 16);

 return 0;
}
