
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fcoe_percpu_s {TYPE_1__ fcoe_rx_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 struct fcoe_percpu_s *VAR_5 = VAR_4;
 struct sk_buff *VAR_6;

 FUNC_6(VAR_3, VAR_0);
 FUNC_5(VAR_1);
 while (!FUNC_3()) {
  FUNC_4();
  FUNC_7(&VAR_5->fcoe_rx_list.lock);
  while ((VAR_6 = FUNC_1(&VAR_5->fcoe_rx_list)) != ((void*)0)) {
   FUNC_8(&VAR_5->fcoe_rx_list.lock);
   FUNC_2(VAR_6);
   FUNC_7(&VAR_5->fcoe_rx_list.lock);
  }
  FUNC_0(VAR_1);
  FUNC_8(&VAR_5->fcoe_rx_list.lock);
 }
 FUNC_0(VAR_2);
 return 0;
}
