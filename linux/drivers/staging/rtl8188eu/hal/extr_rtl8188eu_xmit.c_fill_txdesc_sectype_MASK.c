
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int txdw2; int txdw1; } ;
struct pkt_attrib {int encrypt; int bswenc; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct pkt_attrib *VAR_2, struct tx_desc *VAR_3)
{
 if ((VAR_2->encrypt > 0) && !VAR_2->bswenc) {
  switch (VAR_2->encrypt) {

  case 128:
  case 129:
   VAR_3->txdw1 |= FUNC_0((0x01<<VAR_1)&0x00c00000);
   VAR_3->txdw2 |= FUNC_0(0x7 << VAR_0);
   break;
  case 131:
  case 130:
   VAR_3->txdw1 |= FUNC_0((0x01<<VAR_1)&0x00c00000);
   VAR_3->txdw2 |= FUNC_0(0x7 << VAR_0);
   break;
  case 133:
   VAR_3->txdw1 |= FUNC_0((0x03<<VAR_1)&0x00c00000);
   VAR_3->txdw2 |= FUNC_0(0x7 << VAR_0);
   break;
  case 132:
  default:
   break;
  }
 }
}
