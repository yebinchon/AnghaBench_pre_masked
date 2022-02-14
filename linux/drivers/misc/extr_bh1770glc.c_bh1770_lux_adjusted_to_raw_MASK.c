
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bh1770_chip {int lux_corr; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct bh1770_chip *VAR_1,
     u16 VAR_2)
{
 return (u32)VAR_2 * VAR_0 / VAR_1->lux_corr;
}
