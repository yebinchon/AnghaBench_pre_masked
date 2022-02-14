
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bh1770_chip {int prox_coef; int prox_const; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct bh1770_chip *VAR_1, u8 VAR_2)
{
 u16 VAR_3;

 VAR_3 = (((u32)VAR_2 * VAR_0) / VAR_1->prox_coef);
 if (VAR_3 > VAR_1->prox_const)
  VAR_3 = VAR_3 - VAR_1->prox_const;
 else
  VAR_3 = 0;
 return VAR_3;
}
