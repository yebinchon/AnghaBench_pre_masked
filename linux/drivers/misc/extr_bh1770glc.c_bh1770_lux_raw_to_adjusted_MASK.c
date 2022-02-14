
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct bh1770_chip {int lux_corr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static inline u16 FUNC_1(struct bh1770_chip *VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 VAR_4 = ((u32)VAR_3 * VAR_2->lux_corr) / VAR_0;
 return FUNC_0(VAR_4, (u32)VAR_1);
}
