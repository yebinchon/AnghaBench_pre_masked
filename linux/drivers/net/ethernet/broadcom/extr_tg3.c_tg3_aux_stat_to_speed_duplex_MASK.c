
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tg3 {int phy_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(struct tg3 *VAR_11, u32 VAR_12, u32 *VAR_13, u8 *VAR_14)
{
 switch (VAR_12 & VAR_5) {
 case 128:
  *VAR_13 = VAR_6;
  *VAR_14 = VAR_1;
  break;

 case 129:
  *VAR_13 = VAR_6;
  *VAR_14 = VAR_0;
  break;

 case 130:
  *VAR_13 = VAR_7;
  *VAR_14 = VAR_1;
  break;

 case 131:
  *VAR_13 = VAR_7;
  *VAR_14 = VAR_0;
  break;

 case 132:
  *VAR_13 = VAR_8;
  *VAR_14 = VAR_1;
  break;

 case 133:
  *VAR_13 = VAR_8;
  *VAR_14 = VAR_0;
  break;

 default:
  if (VAR_11->phy_flags & VAR_10) {
   *VAR_13 = (VAR_12 & VAR_3) ? VAR_7 :
     VAR_6;
   *VAR_14 = (VAR_12 & VAR_4) ? VAR_0 :
      VAR_1;
   break;
  }
  *VAR_13 = VAR_9;
  *VAR_14 = VAR_2;
  break;
 }
}
