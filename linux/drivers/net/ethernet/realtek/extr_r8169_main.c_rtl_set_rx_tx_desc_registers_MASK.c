
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtl8169_private {scalar_t__ RxPhyAddr; scalar_t__ TxPhyAddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_4)
{





 FUNC_1(VAR_4, VAR_2, ((u64) VAR_4->TxPhyAddr) >> 32);
 FUNC_1(VAR_4, VAR_3, ((u64) VAR_4->TxPhyAddr) & FUNC_0(32));
 FUNC_1(VAR_4, VAR_0, ((u64) VAR_4->RxPhyAddr) >> 32);
 FUNC_1(VAR_4, VAR_1, ((u64) VAR_4->RxPhyAddr) & FUNC_0(32));
}
