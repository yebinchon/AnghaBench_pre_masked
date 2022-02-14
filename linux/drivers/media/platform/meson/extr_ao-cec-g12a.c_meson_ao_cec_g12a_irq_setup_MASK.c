
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct meson_ao_cec_g12a_device *VAR_7,
       bool VAR_8)
{
 u32 VAR_9 = VAR_1 | VAR_2 | VAR_6 |
    VAR_0 | VAR_4 |
    VAR_3;

 FUNC_0(VAR_7->regmap, VAR_5,
       VAR_8 ? VAR_9 : 0);
}
