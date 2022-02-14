
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int burst_enable; int fifo_threshold; } ;
struct TYPE_10__ {int scsi_bus_0_control; int scsi_bus_1_control; int auto_term_support; } ;
struct TYPE_8__ {int enable_fast_posting; int disable_synchronous_backoff; } ;
struct TYPE_9__ {TYPE_1__ f; } ;
struct nvram {int isp_parameter; TYPE_7__* bus; TYPE_4__ isp_config; TYPE_3__ termination; TYPE_2__ firmware_feature; } ;
struct scsi_qla_host {struct nvram nvram; } ;
struct TYPE_13__ {int req_ack_active_negation; int data_line_active_negation; int async_data_setup_time; } ;
struct TYPE_12__ {int initiator_id; } ;
struct TYPE_14__ {int selection_timeout; int max_queue_depth; int bus_reset_delay; int retry_delay; TYPE_6__ config_2; TYPE_5__ config_1; } ;


 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct nvram*,int ,int) ;
 int FUNC_4 (struct scsi_qla_host*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct scsi_qla_host *VAR_2)
{
 struct nvram *VAR_3 = &VAR_2->nvram;
 int VAR_4, VAR_5;

 FUNC_2(1, "Using defaults for NVRAM: \n");
 FUNC_3(VAR_3, 0, sizeof(struct nvram));


 VAR_3->firmware_feature.f.enable_fast_posting = 1;
 VAR_3->firmware_feature.f.disable_synchronous_backoff = 1;
 VAR_3->termination.scsi_bus_0_control = 3;
 VAR_3->termination.scsi_bus_1_control = 3;
 VAR_3->termination.auto_term_support = 1;
 VAR_3->isp_config.burst_enable = 1;
 if (FUNC_0(VAR_2))
  VAR_3->isp_config.fifo_threshold |= 3;
 else
  VAR_3->isp_config.fifo_threshold |= 4;

 if (FUNC_1(VAR_2))
  VAR_3->isp_parameter = 0x01;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->bus[VAR_4].config_1.initiator_id = 7;
  VAR_3->bus[VAR_4].config_2.req_ack_active_negation = 1;
  VAR_3->bus[VAR_4].config_2.data_line_active_negation = 1;
  VAR_3->bus[VAR_4].selection_timeout = 250;
  VAR_3->bus[VAR_4].max_queue_depth = 32;

  if (FUNC_0(VAR_2)) {
   VAR_3->bus[VAR_4].bus_reset_delay = 3;
   VAR_3->bus[VAR_4].config_2.async_data_setup_time = 6;
   VAR_3->bus[VAR_4].retry_delay = 1;
  } else {
   VAR_3->bus[VAR_4].bus_reset_delay = 5;
   VAR_3->bus[VAR_4].config_2.async_data_setup_time = 8;
  }

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_4(VAR_2, VAR_4, VAR_5);
 }
}
