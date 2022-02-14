
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* rx_packets; void* rx_time_us; int type; int tx_packets; int tx_time_us; int flag; } ;
struct qlcnic_hardware_context {TYPE_1__ coal; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_7)
{
 struct qlcnic_hardware_context *VAR_8 = VAR_7->ahw;
 int VAR_9;


 VAR_8->coal.flag = VAR_6;

 if (FUNC_1(VAR_7)) {
  VAR_8->coal.type = VAR_5;
  VAR_8->coal.tx_time_us = VAR_3;
  VAR_8->coal.tx_packets = VAR_2;
  VAR_8->coal.rx_time_us = VAR_1;
  VAR_8->coal.rx_packets = VAR_0;

  VAR_9 = FUNC_2(VAR_7);
 } else {
  VAR_8->coal.type = VAR_4;
  VAR_8->coal.rx_time_us = VAR_1;
  VAR_8->coal.rx_packets = VAR_0;

  VAR_9 = FUNC_0(VAR_7);
 }

 return VAR_9;
}
