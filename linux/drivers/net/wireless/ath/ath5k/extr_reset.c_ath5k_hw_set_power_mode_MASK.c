
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ath5k_hw {int dummy; } ;
typedef enum ath5k_power_mode { ____Placeholder_ath5k_power_mode } ath5k_power_mode ;


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
 int VAR_11 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_12, enum ath5k_power_mode VAR_13,
         bool VAR_14, u16 VAR_15)
{
 unsigned int VAR_16;
 u32 VAR_17, VAR_18;

 VAR_17 = FUNC_0(VAR_12, VAR_7);

 switch (VAR_13) {
 case 131:
  VAR_17 &= ~VAR_8;

 case 128:
  if (VAR_14)
   FUNC_1(VAR_12,
    VAR_4 |
    VAR_15,
    VAR_2);

  VAR_17 |= VAR_9;
  break;

 case 129:
  if (VAR_14)
   FUNC_1(VAR_12, VAR_5,
    VAR_2);

  VAR_17 |= VAR_9;
  break;

 case 130:

  VAR_17 &= ~VAR_9;

  if (!VAR_14)
   goto commit;

  VAR_18 = FUNC_0(VAR_12, VAR_2);




  if (VAR_18 & 0xffc00000)
   VAR_18 = 0;
  else

   VAR_18 = VAR_18 & ~VAR_3;

  FUNC_1(VAR_12, VAR_18 | VAR_6,
       VAR_2);
  FUNC_2(15, 20);

  for (VAR_16 = 200; VAR_16 > 0; VAR_16--) {

   if ((FUNC_0(VAR_12, VAR_0) &
     VAR_1) == 0)
    break;


   FUNC_2(50, 75);
   FUNC_1(VAR_12, VAR_18 | VAR_6,
       VAR_2);
  }


  if (VAR_16 == 0)
   return -VAR_11;

  break;

 default:
  return -VAR_10;
 }

commit:
 FUNC_1(VAR_12, VAR_17, VAR_7);

 return 0;
}
