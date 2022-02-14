
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1105_port_status_hl1 {int n_n664err; int n_vlanerr; int n_unreleased; int n_sizeerr; int n_crcerr; int n_vlnotfound; int n_ctpolerr; int n_polerr; int n_rxfrmsh; int n_rxfrm; int n_rxbytesh; int n_rxbyte; int n_txfrmsh; int n_txfrm; int n_txbytesh; int n_txbyte; } ;


 int FUNC_0 (int *,int*,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
          struct sja1105_port_status_hl1 *VAR_1)
{

 u32 *VAR_2 = VAR_0;

 FUNC_0(VAR_2 + 0xF, &VAR_1->n_n664err, 31, 0, 4);
 FUNC_0(VAR_2 + 0xE, &VAR_1->n_vlanerr, 31, 0, 4);
 FUNC_0(VAR_2 + 0xD, &VAR_1->n_unreleased, 31, 0, 4);
 FUNC_0(VAR_2 + 0xC, &VAR_1->n_sizeerr, 31, 0, 4);
 FUNC_0(VAR_2 + 0xB, &VAR_1->n_crcerr, 31, 0, 4);
 FUNC_0(VAR_2 + 0xA, &VAR_1->n_vlnotfound, 31, 0, 4);
 FUNC_0(VAR_2 + 0x9, &VAR_1->n_ctpolerr, 31, 0, 4);
 FUNC_0(VAR_2 + 0x8, &VAR_1->n_polerr, 31, 0, 4);
 FUNC_0(VAR_2 + 0x7, &VAR_1->n_rxfrmsh, 31, 0, 4);
 FUNC_0(VAR_2 + 0x6, &VAR_1->n_rxfrm, 31, 0, 4);
 FUNC_0(VAR_2 + 0x5, &VAR_1->n_rxbytesh, 31, 0, 4);
 FUNC_0(VAR_2 + 0x4, &VAR_1->n_rxbyte, 31, 0, 4);
 FUNC_0(VAR_2 + 0x3, &VAR_1->n_txfrmsh, 31, 0, 4);
 FUNC_0(VAR_2 + 0x2, &VAR_1->n_txfrm, 31, 0, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->n_txbytesh, 31, 0, 4);
 FUNC_0(VAR_2 + 0x0, &VAR_1->n_txbyte, 31, 0, 4);
 VAR_1->n_rxfrm += VAR_1->n_rxfrmsh << 32;
 VAR_1->n_rxbyte += VAR_1->n_rxbytesh << 32;
 VAR_1->n_txfrm += VAR_1->n_txfrmsh << 32;
 VAR_1->n_txbyte += VAR_1->n_txbytesh << 32;
}
