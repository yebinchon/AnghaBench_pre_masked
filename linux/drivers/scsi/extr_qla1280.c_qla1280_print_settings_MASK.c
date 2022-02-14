
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int enable_64bit_addressing; int disable_loading_risc_code; } ;
struct nvram {TYPE_4__* bus; TYPE_3__ cntr_flags_1; } ;
struct TYPE_6__ {int data_line_active_negation; int req_ack_active_negation; int async_data_setup_time; } ;
struct TYPE_5__ {int initiator_id; } ;
struct TYPE_8__ {int max_queue_depth; int selection_timeout; TYPE_2__ config_2; int retry_delay; int retry_count; int bus_reset_delay; TYPE_1__ config_1; } ;


 int FUNC_0 (int,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct nvram *VAR_0)
{
 FUNC_0(1, "qla1280 : initiator scsi id bus[0]=%d\n",
  VAR_0->bus[0].config_1.initiator_id);
 FUNC_0(1, "qla1280 : initiator scsi id bus[1]=%d\n",
  VAR_0->bus[1].config_1.initiator_id);

 FUNC_0(1, "qla1280 : bus reset delay[0]=%d\n",
  VAR_0->bus[0].bus_reset_delay);
 FUNC_0(1, "qla1280 : bus reset delay[1]=%d\n",
  VAR_0->bus[1].bus_reset_delay);

 FUNC_0(1, "qla1280 : retry count[0]=%d\n", VAR_0->bus[0].retry_count);
 FUNC_0(1, "qla1280 : retry delay[0]=%d\n", VAR_0->bus[0].retry_delay);
 FUNC_0(1, "qla1280 : retry count[1]=%d\n", VAR_0->bus[1].retry_count);
 FUNC_0(1, "qla1280 : retry delay[1]=%d\n", VAR_0->bus[1].retry_delay);

 FUNC_0(1, "qla1280 : async data setup time[0]=%d\n",
  VAR_0->bus[0].config_2.async_data_setup_time);
 FUNC_0(1, "qla1280 : async data setup time[1]=%d\n",
  VAR_0->bus[1].config_2.async_data_setup_time);

 FUNC_0(1, "qla1280 : req/ack active negation[0]=%d\n",
  VAR_0->bus[0].config_2.req_ack_active_negation);
 FUNC_0(1, "qla1280 : req/ack active negation[1]=%d\n",
  VAR_0->bus[1].config_2.req_ack_active_negation);

 FUNC_0(1, "qla1280 : data line active negation[0]=%d\n",
  VAR_0->bus[0].config_2.data_line_active_negation);
 FUNC_0(1, "qla1280 : data line active negation[1]=%d\n",
  VAR_0->bus[1].config_2.data_line_active_negation);

 FUNC_0(1, "qla1280 : disable loading risc code=%d\n",
  VAR_0->cntr_flags_1.disable_loading_risc_code);

 FUNC_0(1, "qla1280 : enable 64bit addressing=%d\n",
  VAR_0->cntr_flags_1.enable_64bit_addressing);

 FUNC_0(1, "qla1280 : selection timeout limit[0]=%d\n",
  VAR_0->bus[0].selection_timeout);
 FUNC_0(1, "qla1280 : selection timeout limit[1]=%d\n",
  VAR_0->bus[1].selection_timeout);

 FUNC_0(1, "qla1280 : max queue depth[0]=%d\n",
  VAR_0->bus[0].max_queue_depth);
 FUNC_0(1, "qla1280 : max queue depth[1]=%d\n",
  VAR_0->bus[1].max_queue_depth);
}
