
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_thermal {int o_slope; int adc_ge; int* vts; int degc_cali; TYPE_1__* conf; } ;
typedef int s32 ;
struct TYPE_2__ {int cali_val; } ;



__attribute__((used)) static int FUNC_0(struct mtk_thermal *VAR_0, int VAR_1, s32 VAR_2)
{
 s32 VAR_3;

 VAR_2 &= 0xfff;

 VAR_3 = 203450520 << 3;
 VAR_3 /= VAR_0->conf->cali_val + VAR_0->o_slope;
 VAR_3 /= 10000 + VAR_0->adc_ge;
 VAR_3 *= VAR_2 - VAR_0->vts[VAR_1] - 3350;
 VAR_3 >>= 3;

 return VAR_0->degc_cali * 500 - VAR_3;
}
