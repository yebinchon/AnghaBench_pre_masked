
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_resources {int max_vlans; int max_tx_qs; int max_evt_qs; int if_cap_flags; scalar_t__ max_rss_qs; scalar_t__ max_rx_qs; int member_0; int max_mcast_mac; int max_uc_mac; } ;
struct be_adapter {int port_num; int function_caps; scalar_t__ be3_native; int function_mode; int mc_type; scalar_t__ num_vfs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct be_adapter*,struct be_resources*,int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 scalar_t__ FUNC_6 (struct be_adapter*) ;
 scalar_t__ FUNC_7 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_8(struct be_adapter *VAR_16,
         struct be_resources *VAR_17)
{
 bool VAR_18 = VAR_16->num_vfs ? 1 : 0;

 if (FUNC_6(VAR_16))
  VAR_17->max_uc_mac = VAR_13;
 else
  VAR_17->max_uc_mac = VAR_14;

 VAR_16->mc_type = FUNC_2(VAR_16->function_mode);

 if (FUNC_3(VAR_16)) {



  if (FUNC_4(VAR_16))
   VAR_17->max_vlans = VAR_12/8;
  else



   VAR_17->max_vlans = (VAR_12 / 4) - 1;
 } else {
  VAR_17->max_vlans = VAR_12;
 }

 VAR_17->max_mcast_mac = VAR_11;





 if (FUNC_0(VAR_16) || VAR_18 || (VAR_16->port_num > 1) ||
     FUNC_7(VAR_16) ||
     (FUNC_3(VAR_16) &&
      !(VAR_16->function_caps & VAR_6))) {
  VAR_17->max_tx_qs = 1;
 } else if (VAR_16->function_caps & VAR_7) {
  struct be_resources VAR_19 = {0};




  FUNC_1(VAR_16, &VAR_19, ((void*)0),
       VAR_0, VAR_15,
       0);

  VAR_17->max_tx_qs = VAR_19.max_tx_qs ? : VAR_4;
 } else {
  VAR_17->max_tx_qs = VAR_4;
 }

 if ((VAR_16->function_caps & VAR_6) &&
     !VAR_18 && FUNC_6(VAR_16))
  VAR_17->max_rss_qs = (VAR_16->be3_native) ?
        VAR_3 : VAR_1;
 VAR_17->max_rx_qs = VAR_17->max_rss_qs + 1;

 if (FUNC_6(VAR_16))
  VAR_17->max_evt_qs = (FUNC_5(VAR_16) > 0) ?
     VAR_5 : VAR_2;
 else
  VAR_17->max_evt_qs = 1;

 VAR_17->if_cap_flags = VAR_8;
 VAR_17->if_cap_flags &= ~VAR_9;
 if (!(VAR_16->function_caps & VAR_6))
  VAR_17->if_cap_flags &= ~VAR_10;
}
