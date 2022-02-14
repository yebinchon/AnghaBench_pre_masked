
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_coal_cap {int timer_units; } ;
struct bnxt {struct bnxt_coal_cap coal_cap; } ;



__attribute__((used)) static u16 FUNC_0(struct bnxt *VAR_0, u16 VAR_1)
{
 struct bnxt_coal_cap *VAR_2 = &VAR_0->coal_cap;

 return VAR_1 * 1000 / VAR_2->timer_units;
}
