
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct lan78xx_net {int done; TYPE_2__* net; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct lan78xx_net*,struct sk_buff*) ;
 int FUNC_1 (struct lan78xx_net*,struct sk_buff*) ;
 int FUNC_2 (struct lan78xx_net*,int ,TYPE_2__*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct lan78xx_net *VAR_1, struct sk_buff *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2)) {
  VAR_1->net->stats.rx_errors++;
  goto done;
 }

 if (VAR_2->len) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 FUNC_2(VAR_1, VAR_0, VAR_1->net, "drop\n");
 VAR_1->net->stats.rx_errors++;
done:
 FUNC_3(&VAR_1->done, VAR_2);
}
