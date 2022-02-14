
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int rx_drops; } ;
struct sge_eth_rxq {TYPE_2__ stats; } ;
struct TYPE_3__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_3, const __be64 *VAR_4,
     struct sge_eth_rxq *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;

 if (FUNC_3((*(u8 *)VAR_4 == VAR_0) &&
       !FUNC_0(VAR_3->params.chip))) {
  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7 == VAR_2) {
   FUNC_1(VAR_6);
   VAR_5->stats.rx_drops++;
  }
  return VAR_7;
 }
 return VAR_1;
}
