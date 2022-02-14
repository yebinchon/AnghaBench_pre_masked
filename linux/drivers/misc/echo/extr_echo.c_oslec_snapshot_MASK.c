
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oslec_state {int taps; int * fir_taps16; int snapshot; } ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct oslec_state *VAR_0)
{
 FUNC_0(VAR_0->snapshot, VAR_0->fir_taps16[0], VAR_0->taps * sizeof(int16_t));
}
