
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {void* p_intermediate_buffer; struct dmae_cmd* p_dmae_cmd; scalar_t__ intermediate_buffer_phys_addr; } ;
struct qed_hwfn {TYPE_1__ dmae_info; } ;
struct dmae_cmd {int length_dw; void* dst_addr_lo; void* dst_addr_hi; void* src_addr_lo; void* src_addr_hi; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;



 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_1,
       struct qed_ptt *VAR_2,
       u64 VAR_3,
       u64 VAR_4,
       u8 VAR_5,
       u8 VAR_6,
       u32 VAR_7)
{
 dma_addr_t VAR_8 = VAR_1->dmae_info.intermediate_buffer_phys_addr;
 struct dmae_cmd *VAR_9 = VAR_1->dmae_info.p_dmae_cmd;
 int VAR_10 = 0;

 switch (VAR_5) {
 case 130:
 case 129:
  VAR_9->src_addr_hi = FUNC_2(FUNC_7(VAR_3));
  VAR_9->src_addr_lo = FUNC_2(FUNC_3(VAR_3));
  break;

 case 128:
  VAR_9->src_addr_hi = FUNC_2(FUNC_7(VAR_8));
  VAR_9->src_addr_lo = FUNC_2(FUNC_3(VAR_8));
  FUNC_4(&VAR_1->dmae_info.p_intermediate_buffer[0],
         (void *)(uintptr_t)VAR_3,
         VAR_7 * sizeof(u32));
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6) {
 case 130:
 case 129:
  VAR_9->dst_addr_hi = FUNC_2(FUNC_7(VAR_4));
  VAR_9->dst_addr_lo = FUNC_2(FUNC_3(VAR_4));
  break;

 case 128:
  VAR_9->dst_addr_hi = FUNC_2(FUNC_7(VAR_8));
  VAR_9->dst_addr_lo = FUNC_2(FUNC_3(VAR_8));
  break;
 default:
  return -VAR_0;
 }

 VAR_9->length_dw = FUNC_1((u16)VAR_7);

 FUNC_6(VAR_1, VAR_2);

 VAR_10 = FUNC_5(VAR_1);

 if (VAR_10) {
  FUNC_0(VAR_1,
     "qed_dmae_host2grc: Wait Failed. source_addr 0x%llx, grc_addr 0x%llx, size_in_dwords 0x%x\n",
     VAR_3, VAR_4, VAR_7);
  return VAR_10;
 }

 if (VAR_6 == 128)
  FUNC_4((void *)(uintptr_t)(VAR_4),
         &VAR_1->dmae_info.p_intermediate_buffer[0],
         VAR_7 * sizeof(u32));

 return 0;
}
