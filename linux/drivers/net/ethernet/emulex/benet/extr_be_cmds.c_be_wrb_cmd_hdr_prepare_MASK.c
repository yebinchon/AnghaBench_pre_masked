
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef void* u8 ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {int payload_length; int embedded; } ;
struct be_dma_mem {int dma; int size; } ;
struct be_cmd_req_hdr {scalar_t__ version; void* request_length; void* subsystem; void* opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_mcc_wrb*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct be_mcc_wrb*,int ) ;
 struct be_sge* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct be_cmd_req_hdr *VAR_3,
       u8 VAR_4, u8 VAR_5, int VAR_6,
       struct be_mcc_wrb *VAR_7,
       struct be_dma_mem *VAR_8)
{
 struct be_sge *VAR_9;

 VAR_3->opcode = VAR_5;
 VAR_3->subsystem = VAR_4;
 VAR_3->request_length = FUNC_1(VAR_6 - sizeof(*VAR_3));
 VAR_3->version = 0;
 FUNC_2(VAR_7, (ulong) VAR_3);
 VAR_7->payload_length = VAR_6;
 if (VAR_8) {
  VAR_7->embedded |= (1 & VAR_1) <<
   VAR_2;
  VAR_9 = FUNC_3(VAR_7);
  VAR_9->pa_hi = FUNC_1(FUNC_4(VAR_8->dma));
  VAR_9->pa_lo = FUNC_1(VAR_8->dma & 0xFFFFFFFF);
  VAR_9->len = FUNC_1(VAR_8->size);
 } else
  VAR_7->embedded |= VAR_0;
 FUNC_0(VAR_7, 8);
}
