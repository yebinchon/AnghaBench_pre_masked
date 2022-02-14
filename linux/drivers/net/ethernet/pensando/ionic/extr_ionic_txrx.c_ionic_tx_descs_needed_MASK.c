
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ionic_tx_stats {int linearize; } ;
struct ionic_queue {int dummy; } ;
struct TYPE_2__ {int gso_size; scalar_t__ nr_frags; } ;


 scalar_t__ VAR_0 ;
 struct ionic_tx_stats* FUNC_0 (struct ionic_queue*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct ionic_queue *VAR_1, struct sk_buff *VAR_2)
{
 struct ionic_tx_stats *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;


 if (FUNC_1(VAR_2))
  return (VAR_2->len / FUNC_3(VAR_2)->gso_size) + 1;


 if (FUNC_3(VAR_2)->nr_frags <= VAR_0)
  return 1;


 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->linearize++;


 return 1;
}
