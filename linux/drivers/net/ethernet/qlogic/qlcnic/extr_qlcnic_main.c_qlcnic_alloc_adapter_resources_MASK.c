
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {int dummy; } ;
struct TYPE_2__ {void* rx_packets; void* rx_time_us; int type; int tx_packets; int tx_time_us; } ;
struct qlcnic_hardware_context {TYPE_1__ coal; } ;
struct qlcnic_adapter {int stats; int recv_ctx; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_8)
{
 struct qlcnic_hardware_context *VAR_9 = VAR_8->ahw;
 int VAR_10 = 0;

 VAR_8->recv_ctx = FUNC_0(sizeof(struct qlcnic_recv_context),
    VAR_1);
 if (!VAR_8->recv_ctx) {
  VAR_10 = -VAR_0;
  goto err_out;
 }

 if (FUNC_2(VAR_8)) {
  VAR_9->coal.type = VAR_7;
  VAR_9->coal.tx_time_us = VAR_5;
  VAR_9->coal.tx_packets = VAR_4;
  VAR_9->coal.rx_time_us = VAR_3;
  VAR_9->coal.rx_packets = VAR_2;
 } else {
  VAR_9->coal.type = VAR_6;
  VAR_9->coal.rx_time_us = VAR_3;
  VAR_9->coal.rx_packets = VAR_2;
 }


 FUNC_1(&VAR_8->stats, 0, sizeof(VAR_8->stats));
err_out:
 return VAR_10;
}
