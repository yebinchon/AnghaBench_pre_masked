
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dwmac {int reg; } ;


 unsigned int VAR_0 ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, unsigned int VAR_2)
{
 struct meson_dwmac *VAR_3 = VAR_1;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3->reg);

 switch (VAR_2) {
 case 129:
  VAR_4 &= ~VAR_0;
  break;
 case 128:
  VAR_4 |= VAR_0;
  break;
 }

 FUNC_1(VAR_4, VAR_3->reg);
}
