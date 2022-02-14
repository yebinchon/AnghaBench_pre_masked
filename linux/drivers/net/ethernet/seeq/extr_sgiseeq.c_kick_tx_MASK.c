
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cntinfo; } ;
struct sgiseeq_tx_desc {TYPE_1__ tdma; } ;
struct sgiseeq_private {int tx_old; struct sgiseeq_tx_desc* tx_desc; } ;
struct net_device {int dummy; } ;
struct hpc3_ethregs {int tx_ctrl; int tx_ndptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sgiseeq_private*,struct sgiseeq_tx_desc*) ;
 int FUNC_2 (struct net_device*,struct sgiseeq_tx_desc*) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_3,
      struct sgiseeq_private *VAR_4,
      struct hpc3_ethregs *VAR_5)
{
 struct sgiseeq_tx_desc *VAR_6;
 int VAR_7 = VAR_4->tx_old;







 VAR_6 = &VAR_4->tx_desc[VAR_7];
 FUNC_2(VAR_3, VAR_6);
 while ((VAR_6->tdma.cntinfo & (VAR_2 | VAR_1)) ==
       (VAR_2 | VAR_1)) {
  VAR_7 = FUNC_0(VAR_7);
  VAR_6 = &VAR_4->tx_desc[VAR_7];
  FUNC_2(VAR_3, VAR_6);
 }
 if (VAR_6->tdma.cntinfo & VAR_2) {
  VAR_5->tx_ndptr = FUNC_1(VAR_4, VAR_6);
  VAR_5->tx_ctrl = VAR_0;
 }
}
