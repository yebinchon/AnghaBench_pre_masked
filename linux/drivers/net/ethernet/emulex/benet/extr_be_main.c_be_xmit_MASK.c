
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct be_wrb_params {int features; int member_0; } ;
struct be_tx_obj {scalar_t__ pend_wrb_cnt; } ;
struct be_adapter {struct be_tx_obj* tx_obj; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int tx_drv_drops; int tx_stops; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*,size_t) ;
 int FUNC_2 (struct be_adapter*,struct sk_buff*,struct be_wrb_params*) ;
 scalar_t__ FUNC_3 (struct be_tx_obj*) ;
 scalar_t__ FUNC_4 (struct be_adapter*,struct sk_buff**) ;
 size_t FUNC_5 (struct be_adapter*,struct be_tx_obj*,struct sk_buff*,struct be_wrb_params*) ;
 int FUNC_6 (struct be_adapter*,struct be_tx_obj*) ;
 struct sk_buff* FUNC_7 (struct be_adapter*,struct sk_buff*,struct be_wrb_params*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct be_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct net_device*,size_t) ;
 int FUNC_12 (struct sk_buff*) ;
 size_t FUNC_13 (struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct be_tx_obj*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_9(VAR_3);
 u16 VAR_5 = FUNC_13(VAR_2);
 struct be_tx_obj *VAR_6 = &VAR_4->tx_obj[VAR_5];
 struct be_wrb_params VAR_7 = { 0 };
 bool VAR_8 = !FUNC_10();
 u16 VAR_9;

 VAR_2 = FUNC_7(VAR_4, VAR_2, &VAR_7);
 if (FUNC_15(!VAR_2))
  goto drop;

 FUNC_2(VAR_4, VAR_2, &VAR_7);

 VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_2, &VAR_7);
 if (FUNC_15(!VAR_9)) {
  FUNC_8(VAR_2);
  goto drop;
 }




 if (FUNC_4(VAR_4, &VAR_2)) {
  FUNC_0(VAR_7.features, VAR_1, 1);
  VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_2, &VAR_7);
  if (FUNC_15(!VAR_9))
   goto drop;
  else
   FUNC_12(VAR_2);
 }

 if (FUNC_3(VAR_6)) {
  FUNC_11(VAR_3, VAR_5);
  FUNC_14(VAR_6)->tx_stops++;
 }

 if (VAR_8 || FUNC_1(VAR_3, VAR_5))
  FUNC_6(VAR_4, VAR_6);

 return VAR_0;
drop:
 FUNC_14(VAR_6)->tx_drv_drops++;

 if (VAR_8 && VAR_6->pend_wrb_cnt)
  FUNC_6(VAR_4, VAR_6);

 return VAR_0;
}
