
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ixp46x_ts_regs {int systime_hi; int systime_lo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u64 FUNC_1(struct ixp46x_ts_regs *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_1->systime_lo);
 VAR_4 = FUNC_0(&VAR_1->systime_hi);

 VAR_2 = ((u64) VAR_4) << 32;
 VAR_2 |= VAR_3;
 VAR_2 <<= VAR_0;

 return VAR_2;
}
