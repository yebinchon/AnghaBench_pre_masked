
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct at91_priv {unsigned int rx_next; scalar_t__ tx_echo; scalar_t__ tx_next; int mb0_id; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct at91_priv*,int ,int) ;
 unsigned int FUNC_5 (struct at91_priv*) ;
 unsigned int FUNC_6 (struct at91_priv*) ;
 unsigned int FUNC_7 (struct at91_priv*) ;
 unsigned int FUNC_8 (struct at91_priv*) ;
 struct at91_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct at91_priv*,unsigned int,int ) ;
 int FUNC_11 (struct at91_priv*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_5)
{
 struct at91_priv *VAR_6 = FUNC_9(VAR_5);
 unsigned int VAR_7;
 u32 VAR_8;
 VAR_8 = FUNC_3(VAR_6->mb0_id);
 for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_6); VAR_7++) {
  FUNC_10(VAR_6, VAR_7, VAR_0);
  FUNC_4(VAR_6, FUNC_2(VAR_7), VAR_8);
  FUNC_4(VAR_6, FUNC_1(VAR_7), 0x0);
 }

 for (VAR_7 = FUNC_5(VAR_6); VAR_7 < FUNC_6(VAR_6); VAR_7++)
  FUNC_10(VAR_6, VAR_7, VAR_1);
 FUNC_10(VAR_6, FUNC_6(VAR_6), VAR_2);


 for (VAR_7 = FUNC_5(VAR_6); VAR_7 <= FUNC_6(VAR_6); VAR_7++) {
  FUNC_4(VAR_6, FUNC_0(VAR_7), 0x0);
  FUNC_4(VAR_6, FUNC_2(VAR_7), VAR_4);
 }


 for (VAR_7 = FUNC_7(VAR_6); VAR_7 <= FUNC_8(VAR_6); VAR_7++)
  FUNC_11(VAR_6, VAR_7, VAR_3, 0);


 VAR_6->tx_next = VAR_6->tx_echo = 0;
 VAR_6->rx_next = FUNC_5(VAR_6);
}
