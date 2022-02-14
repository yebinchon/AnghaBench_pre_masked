
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MessageUnit_D {void* msgcode_rwbuffer; void* message_rbuffer; void* message_wbuffer; void* outboundlist_interrupt_enable; void* outboundlist_interrupt_cause; void* outboundlist_read_pointer; void* outboundlist_copy_pointer; void* outboundlist_base_high; void* outboundlist_base_low; void* inboundlist_write_pointer; void* inboundlist_base_high; void* inboundlist_base_low; void* outbound_doorbell_enable; void* outbound_doorbell; void* inbound_doorbell; void* outbound_msgaddr1; void* outbound_msgaddr0; void* inbound_msgaddr1; void* inbound_msgaddr0; void* pcief0_int_enable; void* host_int_status; void* reset_request; void* sample_at_reset; void* i2o_host_interrupt_mask; void* cpu_mem_config; void* chip_id; } ;
struct AdapterControlBlock {struct MessageUnit_D* pmuD; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_26)
{
 struct MessageUnit_D *VAR_27 = VAR_26->pmuD;

 VAR_27->chip_id = FUNC_0(VAR_0);
 VAR_27->cpu_mem_config = FUNC_0(VAR_1);
 VAR_27->i2o_host_interrupt_mask = FUNC_0(VAR_2);
 VAR_27->sample_at_reset = FUNC_0(VAR_25);
 VAR_27->reset_request = FUNC_0(VAR_24);
 VAR_27->host_int_status = FUNC_0(VAR_9);
 VAR_27->pcief0_int_enable = FUNC_0(VAR_23);
 VAR_27->inbound_msgaddr0 = FUNC_0(VAR_7);
 VAR_27->inbound_msgaddr1 = FUNC_0(VAR_8);
 VAR_27->outbound_msgaddr0 = FUNC_0(VAR_21);
 VAR_27->outbound_msgaddr1 = FUNC_0(VAR_22);
 VAR_27->inbound_doorbell = FUNC_0(VAR_3);
 VAR_27->outbound_doorbell = FUNC_0(VAR_13);
 VAR_27->outbound_doorbell_enable = FUNC_0(VAR_14);
 VAR_27->inboundlist_base_low = FUNC_0(VAR_5);
 VAR_27->inboundlist_base_high = FUNC_0(VAR_4);
 VAR_27->inboundlist_write_pointer = FUNC_0(VAR_6);
 VAR_27->outboundlist_base_low = FUNC_0(VAR_18);
 VAR_27->outboundlist_base_high = FUNC_0(VAR_17);
 VAR_27->outboundlist_copy_pointer = FUNC_0(VAR_19);
 VAR_27->outboundlist_read_pointer = FUNC_0(VAR_20);
 VAR_27->outboundlist_interrupt_cause = FUNC_0(VAR_15);
 VAR_27->outboundlist_interrupt_enable = FUNC_0(VAR_16);
 VAR_27->message_wbuffer = FUNC_0(VAR_12);
 VAR_27->message_rbuffer = FUNC_0(VAR_10);
 VAR_27->msgcode_rwbuffer = FUNC_0(VAR_11);
}
