
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {int reg_base; struct pcan_pccard* priv; } ;
struct pcan_pccard {int ioport_addr; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct pcan_pccard*,int ,int ) ;
 int FUNC_3 (struct pcan_pccard*) ;

__attribute__((used)) static void FUNC_4(const struct sja1000_priv *VAR_4, int VAR_5, u8 VAR_6)
{
 struct pcan_pccard *VAR_7 = VAR_4->priv;
 int VAR_8 = (VAR_4->reg_base - VAR_7->ioport_addr) / VAR_0;


 if (VAR_5 == VAR_3)
  switch (VAR_6) {
  case 128:

   FUNC_2(VAR_7, FUNC_0(VAR_8), VAR_1);
   break;
  case 0x00:

   FUNC_2(VAR_7, FUNC_0(VAR_8), VAR_2);
   FUNC_3(VAR_7);
   break;
  default:
   break;
  }

 FUNC_1(VAR_6, VAR_4->reg_base + VAR_5);
}
