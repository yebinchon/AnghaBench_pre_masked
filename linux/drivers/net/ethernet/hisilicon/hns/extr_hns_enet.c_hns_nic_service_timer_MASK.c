
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hns_nic_priv {int service_timer; } ;


 scalar_t__ VAR_0 ;
 struct hns_nic_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct hns_nic_priv*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct hns_nic_priv* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct hns_nic_priv *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 (void)FUNC_2(&VAR_5->service_timer, VAR_1 + VAR_0);

 FUNC_1(VAR_5);
}
