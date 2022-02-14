
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_hw_state {unsigned int* DACclk; } ;




__attribute__((used)) static void FUNC_0(struct matrox_hw_state* VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
 switch (VAR_2) {
  case 128:
   VAR_0->DACclk[3] = VAR_1 >> 16;
   VAR_0->DACclk[4] = VAR_1 >> 8;
   VAR_0->DACclk[5] = VAR_1;
   break;
 }
}
