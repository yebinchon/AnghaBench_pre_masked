
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_ring {struct e1000_adapter* adapter; } ;
struct e1000_adapter {int restart_queue; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_ring*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct e1000_ring *VAR_1, int VAR_2)
{
 struct e1000_adapter *VAR_3 = VAR_1->adapter;

 FUNC_2(VAR_3->netdev);




 FUNC_3();




 if (FUNC_0(VAR_1) < VAR_2)
  return -VAR_0;


 FUNC_1(VAR_3->netdev);
 ++VAR_3->restart_queue;
 return 0;
}
