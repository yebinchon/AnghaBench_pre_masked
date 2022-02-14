
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {scalar_t__ data; } ;
struct nicvf {int ptp_clock; int hw_rx_tstamp; } ;
typedef int __be64 ;
struct TYPE_2__ {int hwtstamp; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5(struct nicvf *VAR_0, struct sk_buff *VAR_1)
{
 u64 VAR_2;

 if (!VAR_0->ptp_clock || !VAR_0->hw_rx_tstamp)
  return;


 VAR_2 = FUNC_2(VAR_0->ptp_clock,
        FUNC_1(*(__be64 *)VAR_1->data));
 FUNC_4(VAR_1)->hwtstamp = FUNC_3(VAR_2);

 FUNC_0(VAR_1, 8);
}
