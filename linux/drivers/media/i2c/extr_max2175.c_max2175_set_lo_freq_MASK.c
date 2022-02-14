
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct max2175 {int xtal_freq; } ;
typedef enum max2175_band { ____Placeholder_max2175_band } max2175_band ;




 int VAR_0 ;

 int FUNC_0 (int,int) ;
 int FUNC_1 (struct max2175*) ;
 int FUNC_2 (struct max2175*,int,int,int ) ;
 int FUNC_3 (struct max2175*,int,int) ;
 int FUNC_4 (struct max2175*,int,int,int,int) ;
 int FUNC_5 (struct max2175*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct max2175 *VAR_1, u32 VAR_2)
{
 u8 VAR_3, VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6, VAR_7;
 enum max2175_band VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_1, 5, 1, 0);
 switch (VAR_8) {
 case 130:
  VAR_3 = 16;
  break;
 case 129:
  if (VAR_2 <= 74700000) {
   VAR_3 = 16;
  } else if (VAR_2 > 74700000 && VAR_2 <= 110000000) {
   VAR_4 = 1;
   VAR_3 = 8;
  } else {
   VAR_4 = 1;
   VAR_5 = 3;
   VAR_3 = 8;
  }
  break;
 case 128:
  if (VAR_2 <= 210000000)
   VAR_5 = 2;
  else
   VAR_5 = 1;

  VAR_4 = 2;
  VAR_3 = 4;
  break;
 default:
  VAR_4 = 3;
  VAR_5 = 2;
  VAR_3 = 2;
  break;
 }

 if (VAR_8 == VAR_0)
  VAR_2 /= VAR_3;
 else
  VAR_2 *= VAR_3;

 VAR_6 = VAR_2 / VAR_1->xtal_freq;
 VAR_7 = FUNC_0((u64)(VAR_2 % VAR_1->xtal_freq) << 20,
          VAR_1->xtal_freq);


 VAR_9 = FUNC_1(VAR_1);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_1, "lo_mult %u int %u  frac %u\n",
  VAR_3, VAR_6, VAR_7);


 FUNC_3(VAR_1, 1, VAR_6);
 FUNC_4(VAR_1, 2, 3, 0, (VAR_7 >> 16) & 0xf);
 FUNC_3(VAR_1, 3, VAR_7 >> 8);
 FUNC_3(VAR_1, 4, VAR_7);
 FUNC_4(VAR_1, 5, 3, 2, VAR_4);
 FUNC_4(VAR_1, 6, 7, 6, VAR_5);

 return VAR_9;
}
