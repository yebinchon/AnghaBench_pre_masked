
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct carl9170_tx_info {int ref; } ;
struct TYPE_2__ {scalar_t__ rate_driver_data; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct sk_buff *VAR_1)
{
 struct carl9170_tx_info *VAR_2 = (void *)
  (FUNC_0(VAR_1))->rate_driver_data;

 return FUNC_1(&VAR_2->ref, VAR_0);
}
