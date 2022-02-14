
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ao_cec_g12a_device {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, unsigned int VAR_5,
      unsigned int *VAR_6)
{
 struct meson_ao_cec_g12a_device *VAR_7 = VAR_4;
 u32 VAR_8 = FUNC_1(VAR_0, VAR_5);
 int VAR_9 = 0;

 VAR_9 = FUNC_4(VAR_7->regmap, VAR_3, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7->regmap, VAR_3, VAR_8,
           !(VAR_8 & VAR_1),
           5, 1000);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_3, &VAR_8);

 *VAR_6 = FUNC_0(VAR_2, VAR_8);

 return VAR_9;
}
