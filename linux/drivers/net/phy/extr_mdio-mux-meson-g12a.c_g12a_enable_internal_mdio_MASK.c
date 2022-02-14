
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g12a_mdio_mux {int pll_is_enabled; scalar_t__ regs; int pll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct g12a_mdio_mux *VAR_15)
{
 int VAR_16;


 if (!VAR_15->pll_is_enabled) {
  VAR_16 = FUNC_1(VAR_15->pll);
  if (VAR_16)
   return VAR_16;
 }

 VAR_15->pll_is_enabled = 1;


 FUNC_2(VAR_1, VAR_15->regs + VAR_3);
 FUNC_2(FUNC_0(VAR_10, 3) |
        FUNC_0(VAR_11, VAR_0) |
        FUNC_0(VAR_8, VAR_2) |
        VAR_7 |
        VAR_6 |
        VAR_9,
        VAR_15->regs + VAR_4);
 FUNC_2(VAR_14 |
        VAR_13 |
        VAR_12,
        VAR_15->regs + VAR_5);

 return 0;
}
