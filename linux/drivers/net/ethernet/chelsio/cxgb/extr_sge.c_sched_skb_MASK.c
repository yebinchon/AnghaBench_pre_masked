
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {unsigned int len; TYPE_1__* dev; } ;
struct sge {TYPE_3__* adapter; struct cmdQ* cmdQ; struct sched* tx_sched; } ;
struct sched {int port; scalar_t__ num; TYPE_2__* p; } ;
struct cmdQ {int status; } ;
struct TYPE_6__ {scalar_t__ regs; } ;
struct TYPE_5__ {unsigned int avail; struct sk_buff_head skbq; } ;
struct TYPE_4__ {size_t if_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sge*) ;
 int FUNC_5 (int ,int *) ;
 struct sk_buff* FUNC_6 (struct sk_buff_head*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sge *VAR_6, struct sk_buff *VAR_7,
    unsigned int VAR_8)
{
 struct sched *VAR_9 = VAR_6->tx_sched;
 struct sk_buff_head *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13 = 1;

 FUNC_3("sched_skb %p\n", VAR_7);
 if (!VAR_7) {
  if (!VAR_9->num)
   return ((void*)0);
 } else {
  VAR_10 = &VAR_9->p[VAR_7->dev->if_port].skbq;
  FUNC_0(VAR_10, VAR_7);
  VAR_9->num++;
  VAR_7 = ((void*)0);
 }

 if (VAR_8 < VAR_5 + 1)
  goto out;

again:
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_9->port = (VAR_9->port + 1) & (VAR_4 - 1);
  VAR_10 = &VAR_9->p[VAR_9->port].skbq;

  VAR_7 = FUNC_6(VAR_10);

  if (!VAR_7)
   continue;

  VAR_12 = VAR_7->len;
  if (VAR_12 <= VAR_9->p[VAR_9->port].avail) {
   VAR_9->p[VAR_9->port].avail -= VAR_12;
   VAR_9->num--;
   FUNC_1(VAR_7, VAR_10);
   goto out;
  }
  VAR_7 = ((void*)0);
 }

 if (VAR_13-- && FUNC_4(VAR_6))
  goto again;

out:



 if (VAR_9->num && !VAR_7) {
  struct cmdQ *VAR_14 = &VAR_6->cmdQ[0];
  FUNC_2(VAR_1, &VAR_14->status);
  if (FUNC_7(VAR_2, &VAR_14->status) == 0) {
   FUNC_5(VAR_1, &VAR_14->status);
   FUNC_8(VAR_3, VAR_6->adapter->regs + VAR_0);
  }
 }
 FUNC_3("sched_skb ret %p\n", VAR_7);

 return VAR_7;
}
