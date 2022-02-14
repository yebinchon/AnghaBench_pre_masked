
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; } ;
struct ionic_tx_stats {int bytes; int pkts; } ;
struct ionic_queue {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ionic_queue*,struct sk_buff*) ;
 int FUNC_1 (struct ionic_queue*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (struct ionic_queue*,struct sk_buff*) ;
 int FUNC_3 (struct ionic_queue*,int,int ,struct sk_buff*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ionic_queue*) ;
 struct ionic_tx_stats* FUNC_7 (struct ionic_queue*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct ionic_queue *VAR_2, struct sk_buff *VAR_3)
{
 struct ionic_tx_stats *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;


 if (VAR_3->ip_summed == VAR_0)
  VAR_5 = FUNC_0(VAR_2, VAR_3);
 else
  VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_8(VAR_3);
 VAR_4->pkts++;
 VAR_4->bytes += VAR_3->len;

 FUNC_4(FUNC_6(VAR_2), VAR_3->len);
 FUNC_3(VAR_2, !FUNC_5(), VAR_1, VAR_3);

 return 0;
}
