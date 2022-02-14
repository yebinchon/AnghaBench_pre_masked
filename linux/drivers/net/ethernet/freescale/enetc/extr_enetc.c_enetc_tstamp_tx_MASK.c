
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
typedef int shhwtstamps ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1, u64 VAR_2)
{
 struct skb_shared_hwtstamps VAR_3;

 if (FUNC_2(VAR_1)->tx_flags & VAR_0) {
  FUNC_0(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.hwtstamp = FUNC_1(VAR_2);
  FUNC_3(VAR_1, &VAR_3);
 }
}
