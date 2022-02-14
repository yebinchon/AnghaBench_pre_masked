
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tun_struct {scalar_t__ rx_batched; } ;
struct sk_buff_head {int lock; } ;
struct TYPE_2__ {struct sk_buff_head sk_write_queue; } ;
struct tun_file {int queue_index; TYPE_1__ sk; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff_head*) ;
 scalar_t__ FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct tun_struct *VAR_0, struct tun_file *VAR_1,
      struct sk_buff *VAR_2, int VAR_3)
{
 struct sk_buff_head *VAR_4 = &VAR_1->sk.sk_write_queue;
 struct sk_buff_head VAR_5;
 u32 VAR_6 = VAR_0->rx_batched;
 bool VAR_7 = 0;

 if (!VAR_6 || (!VAR_3 && FUNC_6(VAR_4))) {
  FUNC_3();
  FUNC_9(VAR_2, VAR_1->queue_index);
  FUNC_5(VAR_2);
  FUNC_4();
  return;
 }

 FUNC_10(&VAR_4->lock);
 if (!VAR_3 || FUNC_7(VAR_4) == VAR_6) {
  FUNC_1(&VAR_5);
  FUNC_8(VAR_4, &VAR_5);
  VAR_7 = 1;
 } else {
  FUNC_2(VAR_4, VAR_2);
 }
 FUNC_11(&VAR_4->lock);

 if (VAR_7) {
  struct sk_buff *VAR_8;

  FUNC_3();
  while ((VAR_8 = FUNC_0(&VAR_5))) {
   FUNC_9(VAR_8, VAR_1->queue_index);
   FUNC_5(VAR_8);
  }
  FUNC_9(VAR_2, VAR_1->queue_index);
  FUNC_5(VAR_2);
  FUNC_4();
 }
}
