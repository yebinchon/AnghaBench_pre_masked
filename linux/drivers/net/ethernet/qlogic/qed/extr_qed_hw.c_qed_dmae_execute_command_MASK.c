
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_3__ {struct dmae_cmd* p_dmae_cmd; int completion_word_phys_addr; } ;
struct qed_hwfn {TYPE_2__* cdev; TYPE_1__ dmae_info; } ;
struct qed_dmae_params {int dummy; } ;
struct dmae_cmd {void* comp_val; void* comp_addr_hi; void* comp_addr_lo; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ recov_in_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,char*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,int ,scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qed_dmae_params*,int ) ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_6 (struct qed_hwfn*,int,int,struct qed_dmae_params*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_5,
        struct qed_ptt *VAR_6,
        u64 VAR_7, u64 VAR_8,
        u8 VAR_9, u8 VAR_10,
        u32 VAR_11,
        struct qed_dmae_params *VAR_12)
{
 dma_addr_t VAR_13 = VAR_5->dmae_info.completion_word_phys_addr;
 u16 VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 struct dmae_cmd *VAR_18 = VAR_5->dmae_info.p_dmae_cmd;
 u64 VAR_19 = 0, VAR_20 = 0;
 u16 VAR_21 = VAR_1;
 int VAR_22 = 0;
 u32 VAR_23 = 0;

 if (VAR_5->cdev->recov_in_prog) {
  FUNC_1(VAR_5,
      VAR_2,
      "Recovery is in progress. Avoid DMAE transaction [{src: addr 0x%llx, type %d}, {dst: addr 0x%llx, type %d}, size %d].\n",
      VAR_7, VAR_9, VAR_8, VAR_10,
      VAR_11);


  return 0;
 }

 FUNC_6(VAR_5,
   (VAR_9 == VAR_3),
   (VAR_10 == VAR_3),
   VAR_12);

 VAR_18->comp_addr_lo = FUNC_3(FUNC_4(VAR_13));
 VAR_18->comp_addr_hi = FUNC_3(FUNC_7(VAR_13));
 VAR_18->comp_val = FUNC_3(VAR_0);


 VAR_16 = VAR_11 / VAR_21;
 VAR_17 = VAR_11 % VAR_21;

 VAR_19 = VAR_7;
 VAR_20 = VAR_8;

 for (VAR_15 = 0; VAR_15 <= VAR_16; VAR_15++) {
  VAR_23 = VAR_21 * VAR_15;

  if (!FUNC_2(VAR_12, VAR_4)) {
   if (VAR_9 == VAR_3)
    VAR_19 = VAR_7 + VAR_23;
   else
    VAR_19 = VAR_7 + (VAR_23 * 4);
  }

  if (VAR_10 == VAR_3)
   VAR_20 = VAR_8 + VAR_23;
  else
   VAR_20 = VAR_8 + (VAR_23 * 4);

  VAR_14 = (VAR_16 == VAR_15) ? VAR_17 : VAR_21;


  if (!VAR_14)
   continue;

  VAR_22 = FUNC_5(VAR_5,
           VAR_6,
           VAR_19,
           VAR_20,
           VAR_9,
           VAR_10,
           VAR_14);
  if (VAR_22) {
   FUNC_0(VAR_5,
      "qed_dmae_execute_sub_operation Failed with error 0x%x. source_addr 0x%llx, destination addr 0x%llx, size_in_dwords 0x%x\n",
      VAR_22, VAR_7, VAR_8, VAR_14);
   break;
  }
 }

 return VAR_22;
}
