
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct scc_channel {int irq; int * tx_buff; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct scc_channel* FUNC_2 (int ,struct timer_list*,int ) ;
 struct scc_channel* VAR_0 ;
 int FUNC_3 (struct scc_channel*) ;
 int FUNC_4 (struct scc_channel*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct scc_channel *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);

 FUNC_3(VAR_3);

 if (VAR_3->tx_buff == ((void*)0))
 {
  FUNC_0(VAR_3->irq);
  FUNC_4(VAR_3);
  FUNC_1(VAR_3->irq);
 }
}
