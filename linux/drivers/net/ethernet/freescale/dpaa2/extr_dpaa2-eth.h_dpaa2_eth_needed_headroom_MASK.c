
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dpaa2_eth_priv {scalar_t__ tx_tstamp; } ;
struct TYPE_2__ {int tx_flags; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline
unsigned int FUNC_2(struct dpaa2_eth_priv *VAR_3,
           struct sk_buff *VAR_4)
{
 unsigned int VAR_5 = VAR_0;




 if (!VAR_4)
  return VAR_5;




 if (FUNC_0(VAR_4))
  return 0;


 if (VAR_3->tx_tstamp && FUNC_1(VAR_4)->tx_flags & VAR_2)
  VAR_5 += VAR_1;

 return VAR_5;
}
