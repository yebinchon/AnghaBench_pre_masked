
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct qlc_83xx_rmw {int index_a; int mask; int shl; int shr; int or_value; int xor_value; } ;
struct TYPE_3__ {int* array; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int,int*) ;
 int FUNC_1 (struct qlcnic_adapter*,int,int) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_1,
        u32 VAR_2, u32 VAR_3,
        struct qlc_83xx_rmw *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 if (VAR_4->index_a) {
  VAR_6 = VAR_1->ahw->reset.array[VAR_4->index_a];
 } else {
  VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);
  if (VAR_5 == -VAR_0)
   return;
 }

 VAR_6 &= VAR_4->mask;
 VAR_6 <<= VAR_4->shl;
 VAR_6 >>= VAR_4->shr;
 VAR_6 |= VAR_4->or_value;
 VAR_6 ^= VAR_4->xor_value;
 FUNC_1(VAR_1, VAR_3, VAR_6);
}
