
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {scalar_t__ port_type; } ;
struct qlcnic_adapter {int max_rds_rings; int num_txd; int max_rxd; void* max_jumbo_rxd; void* num_jumbo_rxd; int num_rxd; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_0(struct qlcnic_adapter *VAR_10)
{
 struct qlcnic_hardware_context *VAR_11 = VAR_10->ahw;

 if (VAR_11->port_type == VAR_9) {
  VAR_10->num_rxd = VAR_1;
  VAR_10->max_rxd = VAR_6;
  VAR_10->num_jumbo_rxd = VAR_3;
  VAR_10->max_jumbo_rxd = VAR_3;

 } else if (VAR_11->port_type == VAR_8) {
  VAR_10->num_rxd = VAR_0;
  VAR_10->num_jumbo_rxd = VAR_4;
  VAR_10->max_jumbo_rxd = VAR_4;
  VAR_10->max_rxd = VAR_5;
 }
 VAR_10->num_txd = VAR_2;
 VAR_10->max_rds_rings = VAR_7;
}
