
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xmit_frame {int dummy; } ;
struct tx_desc {int txdw9; int txdw8; int txdw7; int txdw6; int txdw5; int txdw4; int txdw3; int txdw2; int txdw1; int txdw0; } ;


 int FUNC_0 (struct tx_desc*) ;
 int FUNC_1 (struct xmit_frame*,int *) ;

void FUNC_2(struct xmit_frame *VAR_0, u8 *VAR_1)
{
 struct tx_desc *VAR_2;

 FUNC_1(VAR_0, VAR_1);

 VAR_2 = (struct tx_desc *)VAR_1;
 VAR_2->txdw0 = VAR_2->txdw0;
 VAR_2->txdw1 = VAR_2->txdw1;
 VAR_2->txdw2 = VAR_2->txdw2;
 VAR_2->txdw3 = VAR_2->txdw3;
 VAR_2->txdw4 = VAR_2->txdw4;
 VAR_2->txdw5 = VAR_2->txdw5;
 VAR_2->txdw6 = VAR_2->txdw6;
 VAR_2->txdw7 = VAR_2->txdw7;
 VAR_2->txdw8 = VAR_2->txdw8;
 VAR_2->txdw9 = VAR_2->txdw9;

 FUNC_0(VAR_2);
}
