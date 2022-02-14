
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int tx_queue; int ud; } ;
struct v_unlink {void* status; void* seqnum; } ;
struct tx_item {int tx_entry; struct v_unlink* u; int type; } ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tx_item*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct vudc *VAR_3, __u32 VAR_4, __u32 VAR_5)
{
 struct tx_item *VAR_6;
 struct v_unlink *VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  FUNC_3(&VAR_3->ud, VAR_2);
  return;
 }
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_6);
  FUNC_3(&VAR_3->ud, VAR_2);
  return;
 }

 VAR_7->seqnum = VAR_4;
 VAR_7->status = VAR_5;
 VAR_6->type = VAR_1;
 VAR_6->u = VAR_7;

 FUNC_2(&VAR_6->tx_entry, &VAR_3->tx_queue);
}
