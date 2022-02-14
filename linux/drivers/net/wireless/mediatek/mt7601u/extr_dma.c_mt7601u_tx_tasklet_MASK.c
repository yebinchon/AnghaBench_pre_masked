
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mt7601u_dev {int tx_lock; int tx_skb_done; int stat_work; int stat_wq; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt7601u_dev*,struct sk_buff*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (int *,struct sk_buff_head*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_2)
{
 struct mt7601u_dev *VAR_3 = (struct mt7601u_dev *) VAR_2;
 struct sk_buff_head VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_4);

 FUNC_8(&VAR_3->tx_lock, VAR_5);

 FUNC_5(VAR_0, &VAR_3->state);
 if (!FUNC_10(VAR_1, &VAR_3->state))
  FUNC_4(VAR_3->stat_wq, &VAR_3->stat_work,
       FUNC_2(10));

 FUNC_7(&VAR_3->tx_skb_done, &VAR_4);

 FUNC_9(&VAR_3->tx_lock, VAR_5);

 while (!FUNC_6(&VAR_4)) {
  struct sk_buff *VAR_6 = FUNC_0(&VAR_4);

  FUNC_3(VAR_3, VAR_6);
 }
}
