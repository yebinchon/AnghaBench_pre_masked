
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct be_resources {int vf_if_cap_flags; int max_rss_qs; int if_cap_flags; int max_rx_qs; int max_tx_qs; int max_cq_count; scalar_t__ max_uc_mac; scalar_t__ max_vlans; scalar_t__ max_iface_count; scalar_t__ max_mcc_count; int flags; int member_0; } ;
struct be_adapter {struct be_resources pool_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct be_adapter*,struct be_resources*,int *,int ,int ,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct be_adapter *VAR_8, u16 VAR_9,
    struct be_resources *VAR_10)
{
 struct be_resources VAR_11 = VAR_8->pool_res;
 u32 VAR_12 = VAR_11.vf_if_cap_flags;
 struct be_resources VAR_13 = {0};
 u16 VAR_14 = 1;


 if (VAR_9) {



  VAR_14 = FUNC_3(VAR_7,
    VAR_11.max_rss_qs / (VAR_9 + 1));





  if (VAR_9 >= FUNC_2(VAR_8))
   VAR_14 = 1;
 }




 FUNC_1(VAR_8, &VAR_13, ((void*)0), VAR_0,
      VAR_6, 0);






 if (VAR_13.vf_if_cap_flags & VAR_2) {
  VAR_10->flags |= FUNC_0(VAR_5);
  if (VAR_14 > 1) {
   VAR_12 |= VAR_2;
   if (VAR_11.if_cap_flags & VAR_1)
    VAR_12 |= VAR_1;
  } else {
   VAR_12 &= ~(VAR_2 |
          VAR_1);
  }
 } else {
  VAR_14 = 1;
 }

 if (VAR_13.vf_if_cap_flags & VAR_3) {
  VAR_10->flags |= FUNC_0(VAR_5);
  VAR_12 &= ~VAR_3;
 }

 VAR_10->vf_if_cap_flags = VAR_12;
 VAR_10->max_rx_qs = VAR_14;
 VAR_10->max_rss_qs = VAR_14;
 VAR_10->max_tx_qs = VAR_11.max_tx_qs / (VAR_9 + 1);
 VAR_10->max_cq_count = VAR_11.max_cq_count / (VAR_9 + 1);




 if (VAR_13.max_uc_mac == VAR_4)
  VAR_10->max_uc_mac = VAR_11.max_uc_mac / (VAR_9 + 1);

 if (VAR_13.max_vlans == VAR_4)
  VAR_10->max_vlans = VAR_11.max_vlans / (VAR_9 + 1);

 if (VAR_13.max_iface_count == VAR_4)
  VAR_10->max_iface_count = VAR_11.max_iface_count / (VAR_9 + 1);

 if (VAR_13.max_mcc_count == VAR_4)
  VAR_10->max_mcc_count = VAR_11.max_mcc_count / (VAR_9 + 1);
}
