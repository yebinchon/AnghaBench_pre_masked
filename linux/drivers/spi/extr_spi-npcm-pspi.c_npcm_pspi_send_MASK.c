
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npcm_pspi {int tx_bytes; int * tx_buf; scalar_t__ base; int bits_per_word; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct npcm_pspi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(FUNC_1(VAR_1->bits_per_word), VAR_1->tx_bytes);
 VAR_1->tx_bytes -= VAR_2;

 if (!VAR_1->tx_buf)
  return;

 switch (VAR_2) {
 case 1:
  FUNC_3(*VAR_1->tx_buf, VAR_0 + VAR_1->base);
  break;
 case 2:
  FUNC_2(*VAR_1->tx_buf, VAR_0 + VAR_1->base);
  break;
 default:
  FUNC_0(1);
  return;
 }

 VAR_1->tx_buf += VAR_2;
}
