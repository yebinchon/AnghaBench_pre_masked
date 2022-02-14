
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_probe_rq; } ;
struct rtllib_device {TYPE_1__ softmac_stats; } ;


 struct sk_buff* FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct sk_buff*,struct rtllib_device*) ;

__attribute__((used)) static void FUNC_2(struct rtllib_device *VAR_0, u8 VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  VAR_0->softmac_stats.tx_probe_rq++;
 }
}
