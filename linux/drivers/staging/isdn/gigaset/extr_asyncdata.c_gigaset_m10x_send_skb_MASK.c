
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct cardstate {int lock; int write_tasklet; scalar_t__ connected; int dev; } ;
struct bc_state {scalar_t__ proto2; int squeue; struct cardstate* cs; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct bc_state *VAR_2, struct sk_buff *VAR_3)
{
 struct cardstate *VAR_4 = VAR_2->cs;
 unsigned VAR_5 = VAR_3->len;
 unsigned long VAR_6;

 if (VAR_2->proto2 == VAR_1)
  VAR_3 = FUNC_0(VAR_3);
 else
  VAR_3 = FUNC_2(VAR_3);
 if (!VAR_3) {
  FUNC_1(VAR_4->dev,
   "unable to allocate memory for encoding!\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_2->squeue, VAR_3);
 FUNC_4(&VAR_4->lock, VAR_6);
 if (VAR_4->connected)
  FUNC_6(&VAR_4->write_tasklet);
 FUNC_5(&VAR_4->lock, VAR_6);

 return VAR_5;
}
