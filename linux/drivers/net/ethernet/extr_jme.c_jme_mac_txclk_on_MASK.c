
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jme_adapter {scalar_t__ reg_ghc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct jme_adapter*,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct jme_adapter *VAR_7)
{
 u32 VAR_8 = VAR_7->reg_ghc & VAR_0;
 if (VAR_8 == VAR_1)
  VAR_7->reg_ghc |= VAR_2 | VAR_4;
 else
  VAR_7->reg_ghc |= VAR_3 | VAR_5;
 FUNC_0(VAR_7, VAR_6, VAR_7->reg_ghc);
}
