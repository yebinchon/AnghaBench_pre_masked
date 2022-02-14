
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipaq_micro_msg {int node; int tx_len; int id; } ;
struct ipaq_micro {int lock; struct ipaq_micro_msg* msg; int queue; int dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct ipaq_micro*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipaq_micro *VAR_0, struct ipaq_micro_msg *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(VAR_0->dev, "TX msg: %02x, %d bytes\n", VAR_1->id, VAR_1->tx_len);

 FUNC_3(&VAR_0->lock, VAR_2);
 if (VAR_0->msg) {
  FUNC_2(&VAR_1->node, &VAR_0->queue);
  FUNC_4(&VAR_0->lock, VAR_2);
  return 0;
 }
 VAR_0->msg = VAR_1;
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->lock, VAR_2);
 return 0;
}
