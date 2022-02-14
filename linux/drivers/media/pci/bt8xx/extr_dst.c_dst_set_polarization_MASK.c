
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int voltage; int* tx_tuna; } ;





 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_0)
{
 switch (VAR_0->voltage) {
 case 130:
  FUNC_0(2, "Polarization=[Vertical]\n");
  VAR_0->tx_tuna[8] &= ~0x40;
  break;
 case 129:
  FUNC_0(2, "Polarization=[Horizontal]\n");
  VAR_0->tx_tuna[8] |= 0x40;
  break;
 case 128:
  break;
 }

 return 0;
}
