
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct meson_spifc {int regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct meson_spifc *VAR_1, u8 *VAR_2,
         int VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 while (VAR_5 < VAR_3) {
  FUNC_1(VAR_1->regmap, VAR_0 + VAR_5, &VAR_4);

  if (VAR_3 - VAR_5 >= 4) {
   *((u32 *)VAR_2) = VAR_4;
   VAR_2 += 4;
  } else {
   FUNC_0(VAR_2, &VAR_4, VAR_3 - VAR_5);
   break;
  }
  VAR_5 += 4;
 }
}
