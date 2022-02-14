
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ao_cec_device {scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct meson_ao_cec_device*) ;
 int FUNC_1 (struct meson_ao_cec_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct meson_ao_cec_device *VAR_5 = VAR_4;
 u32 VAR_6 = FUNC_2(VAR_5->base + VAR_0);

 if (VAR_6 & VAR_1)
  FUNC_1(VAR_5);

 FUNC_0(VAR_5);

 return VAR_2;
}
