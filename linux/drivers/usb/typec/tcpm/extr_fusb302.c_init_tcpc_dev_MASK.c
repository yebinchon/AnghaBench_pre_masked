
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpc_dev {int pd_transmit; int start_toggling; int set_roles; int set_pd_rx; int set_vbus; int set_vconn; int set_polarity; int get_cc; int set_cc; int get_current_limit; int get_vbus; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(struct tcpc_dev *VAR_12)
{
 VAR_12->init = VAR_3;
 VAR_12->get_vbus = VAR_2;
 VAR_12->get_current_limit = VAR_1;
 VAR_12->set_cc = VAR_5;
 VAR_12->get_cc = VAR_0;
 VAR_12->set_polarity = VAR_7;
 VAR_12->set_vconn = VAR_10;
 VAR_12->set_vbus = VAR_9;
 VAR_12->set_pd_rx = VAR_6;
 VAR_12->set_roles = VAR_8;
 VAR_12->start_toggling = VAR_11;
 VAR_12->pd_transmit = VAR_4;
}
