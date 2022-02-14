
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_descr_chain {int num_desc; struct spider_net_descr* tail; } ;
struct spider_net_descr {int hwdescr; struct spider_net_descr* next; } ;
struct spider_net_card {struct spider_net_descr_chain rx_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct spider_net_card *VAR_2)
{
 struct spider_net_descr_chain *VAR_3 = &VAR_2->rx_chain;
 struct spider_net_descr *VAR_4;
 int VAR_5, VAR_6;


 VAR_4 = VAR_3->tail;
 VAR_6 = FUNC_0(VAR_4->hwdescr);

 for (VAR_5=0; VAR_5<VAR_3->num_desc; VAR_5++) {
  if ((VAR_6 != VAR_0) &&
      (VAR_6 != VAR_1)) break;
  VAR_4 = VAR_4->next;
  VAR_6 = FUNC_0(VAR_4->hwdescr);
 }
 VAR_3->tail = VAR_4;

 if ((VAR_5 == VAR_3->num_desc) || (VAR_5 == 0))
  return 1;
 return 0;
}
