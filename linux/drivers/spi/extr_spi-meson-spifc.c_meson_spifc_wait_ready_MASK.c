
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_spifc {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct meson_spifc *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + FUNC_1(5);
 u32 VAR_6;

 do {
  FUNC_2(VAR_4->regmap, VAR_1, &VAR_6);
  if (VAR_6 & VAR_2)
   return 0;
  FUNC_0();
 } while (!FUNC_3(VAR_3, VAR_5));

 return -VAR_0;
}
