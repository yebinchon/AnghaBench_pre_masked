
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct bh1770_chip {scalar_t__ prox_const; int prox_coef; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(struct bh1770_chip *VAR_2, u8 VAR_3)
{
 u16 VAR_4;
 VAR_4 = (u16)(((u32)(VAR_3 + VAR_2->prox_const) * VAR_2->prox_coef) /
  VAR_0);
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 return VAR_4;
}
