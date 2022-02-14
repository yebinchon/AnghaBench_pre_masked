
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_nic_data {scalar_t__ workaround_26807; } ;
struct efx_ef10_filter_vlan {scalar_t__ vid; } ;
struct efx_ef10_filter_table {int vlan_filter; scalar_t__ mc_promisc_last; scalar_t__ mc_promisc; int mc_overflow; scalar_t__ uc_promisc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct efx_nic*,struct efx_ef10_filter_vlan*,int,int) ;
 scalar_t__ FUNC_1 (struct efx_nic*,struct efx_ef10_filter_vlan*,int,int,int) ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_6,
           struct efx_ef10_filter_vlan *VAR_7)
{
 struct efx_ef10_filter_table *VAR_8 = VAR_6->filter_state;
 struct efx_ef10_nic_data *VAR_9 = VAR_6->nic_data;




 if ((VAR_7->vid == VAR_5) == VAR_8->vlan_filter)
  return;


 if (VAR_8->uc_promisc) {
  FUNC_1(VAR_6, VAR_7, VAR_2,
        0, 0);
  FUNC_0(VAR_6, VAR_7, 0, 0);
 } else {




  if (FUNC_0(VAR_6, VAR_7, 0, 0))
   FUNC_1(VAR_6, VAR_7,
         VAR_2,
         0, 0);
 }
 FUNC_1(VAR_6, VAR_7, VAR_4,
       0, 0);
 FUNC_1(VAR_6, VAR_7, VAR_4 |
           VAR_0,
       0, 0);
 FUNC_1(VAR_6, VAR_7, VAR_3,
       0, 0);
 FUNC_1(VAR_6, VAR_7, VAR_3 |
           VAR_0,
       0, 0);
 FUNC_1(VAR_6, VAR_7, VAR_1,
       0, 0);
 FUNC_1(VAR_6, VAR_7, VAR_1 |
           VAR_0,
       0, 0);





 if (VAR_9->workaround_26807 &&
     VAR_8->mc_promisc_last != VAR_8->mc_promisc)
  FUNC_2(VAR_6);
 if (VAR_8->mc_promisc) {
  if (VAR_9->workaround_26807) {



   if (FUNC_1(VAR_6, VAR_7,
             VAR_2,
             1, 1)) {

    FUNC_2(VAR_6);
    FUNC_0(VAR_6, VAR_7,
         1, 0);
   }
  } else {




   FUNC_1(VAR_6, VAR_7,
         VAR_2,
         1, 0);
   if (!VAR_8->mc_overflow)
    FUNC_0(VAR_6, VAR_7,
         1, 0);
  }
 } else {





  if (FUNC_0(VAR_6, VAR_7, 1, 1)) {

   if (VAR_9->workaround_26807)
    FUNC_2(VAR_6);
   if (FUNC_1(VAR_6, VAR_7,
             VAR_2,
             1, 1))
    FUNC_0(VAR_6, VAR_7,
         1, 0);
  }
 }
 FUNC_1(VAR_6, VAR_7, VAR_4,
       1, 0);
 FUNC_1(VAR_6, VAR_7, VAR_4 |
           VAR_0,
       1, 0);
 FUNC_1(VAR_6, VAR_7, VAR_3,
       1, 0);
 FUNC_1(VAR_6, VAR_7, VAR_3 |
           VAR_0,
       1, 0);
 FUNC_1(VAR_6, VAR_7, VAR_1,
       1, 0);
 FUNC_1(VAR_6, VAR_7, VAR_1 |
           VAR_0,
       1, 0);
}
