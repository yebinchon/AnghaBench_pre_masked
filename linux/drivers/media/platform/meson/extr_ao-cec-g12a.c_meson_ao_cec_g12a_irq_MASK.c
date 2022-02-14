
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct meson_ao_cec_g12a_device {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct meson_ao_cec_g12a_device *VAR_5 = VAR_4;
 u32 VAR_6;

 FUNC_0(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_6)
  return VAR_2;

 return VAR_1;
}
