
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int txq_thread_started; int txq_thread; scalar_t__ close; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct wilc_vif *VAR_2 = FUNC_4(VAR_1);
 struct wilc *VAR_3 = VAR_2->wilc;

 VAR_3->txq_thread = FUNC_2(VAR_0, (void *)VAR_3,
           "K_TXQ_TASK");
 if (FUNC_0(VAR_3->txq_thread)) {
  FUNC_3(VAR_1, "couldn't create TXQ thread\n");
  VAR_3->close = 0;
  return FUNC_1(VAR_3->txq_thread);
 }
 FUNC_5(&VAR_3->txq_thread_started);

 return 0;
}
