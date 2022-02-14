
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de_private {scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ rx_tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (struct de_private *VAR_2)
{

 FUNC_3(5);
 FUNC_2(VAR_0, 0);

 FUNC_0(VAR_2);

 FUNC_2(VAR_1, FUNC_1(VAR_1));

 FUNC_3(10);

 VAR_2->rx_tail = 0;
 VAR_2->tx_head = VAR_2->tx_tail = 0;
}
