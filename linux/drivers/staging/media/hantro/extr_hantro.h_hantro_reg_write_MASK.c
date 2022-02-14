
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hantro_reg {int mask; int shift; int base; } ;
struct hantro_dev {int dummy; } ;


 int FUNC_0 (struct hantro_dev*,int ) ;
 int FUNC_1 (struct hantro_dev*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct hantro_dev *VAR_0,
        const struct hantro_reg *VAR_1,
        u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->base);
 VAR_3 &= ~(VAR_1->mask << VAR_1->shift);
 VAR_3 |= ((VAR_2 & VAR_1->mask) << VAR_1->shift);
 FUNC_1(VAR_0, VAR_3, VAR_1->base);
}
