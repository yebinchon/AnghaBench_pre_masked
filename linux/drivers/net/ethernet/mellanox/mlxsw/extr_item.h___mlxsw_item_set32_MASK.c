
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ bits; } ;
struct mlxsw_item {int shift; int no_real_shift; TYPE_1__ size; } ;
typedef int __be32 ;


 int FUNC_0 (scalar_t__,int ) ;
 unsigned int FUNC_1 (struct mlxsw_item const*,unsigned short,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_0, const struct mlxsw_item *VAR_1,
          unsigned short VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_1, VAR_2,
        sizeof(u32));
 __be32 *VAR_5 = (__be32 *) VAR_0;
 u32 VAR_6 = FUNC_0(VAR_1->size.bits - 1, 0) << VAR_1->shift;
 u32 VAR_7;

 if (!VAR_1->no_real_shift)
  VAR_3 <<= VAR_1->shift;
 VAR_3 &= VAR_6;
 VAR_7 = FUNC_2(VAR_5[VAR_4]);
 VAR_7 &= ~VAR_6;
 VAR_7 |= VAR_3;
 VAR_5[VAR_4] = FUNC_3(VAR_7);
}
