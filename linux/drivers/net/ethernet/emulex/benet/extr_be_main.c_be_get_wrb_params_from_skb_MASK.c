
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct be_wrb_params {int features; int vlan_tag; int lso_mss; } ;
struct be_adapter {int dummy; } ;
struct TYPE_2__ {int gso_size; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct be_adapter*,struct sk_buff*) ;
 int FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct be_adapter *VAR_10,
           struct sk_buff *VAR_11,
           struct be_wrb_params *VAR_12)
{
 u16 VAR_13;

 if (FUNC_5(VAR_11)) {
  FUNC_0(VAR_12->features, VAR_5, 1);
  VAR_12->lso_mss = FUNC_7(VAR_11)->gso_size;
  if (FUNC_6(VAR_11) && !FUNC_2(VAR_10))
   FUNC_0(VAR_12->features, VAR_6, 1);
 } else if (VAR_11->ip_summed == VAR_0) {
  if (VAR_11->encapsulation) {
   FUNC_0(VAR_12->features, VAR_2, 1);
   VAR_13 = FUNC_3(VAR_11);
  } else {
   VAR_13 = FUNC_4(VAR_11);
  }
  if (VAR_13 == VAR_3)
   FUNC_0(VAR_12->features, VAR_7, 1);
  else if (VAR_13 == VAR_4)
   FUNC_0(VAR_12->features, VAR_8, 1);
 }

 if (FUNC_8(VAR_11)) {
  FUNC_0(VAR_12->features, VAR_9, 1);
  VAR_12->vlan_tag = FUNC_1(VAR_10, VAR_11);
 }

 FUNC_0(VAR_12->features, VAR_1, 1);
}
