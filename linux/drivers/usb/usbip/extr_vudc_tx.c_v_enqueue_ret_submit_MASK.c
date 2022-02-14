
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int tx_queue; int ud; } ;
struct urbp {int dummy; } ;
struct tx_item {int tx_entry; struct urbp* s; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tx_item* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct vudc *VAR_3, struct urbp *VAR_4)
{
 struct tx_item *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_2(&VAR_3->ud, VAR_2);
  return;
 }

 VAR_5->type = VAR_1;
 VAR_5->s = VAR_4;

 FUNC_1(&VAR_5->tx_entry, &VAR_3->tx_queue);
}
