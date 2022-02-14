
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct dbg_idle_chk_info_reg {int size; int data; TYPE_1__ mode; } ;
struct dbg_idle_chk_cond_reg {int entry_size; scalar_t__ start_entry; int num_entries; } ;
union dbg_idle_chk_reg {struct dbg_idle_chk_info_reg info_reg; struct dbg_idle_chk_cond_reg cond_reg; } ;
typedef size_t u8 ;
typedef int u32 ;
typedef void* u16 ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {int * block_in_reset; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_idle_chk_rule {size_t reg_offset; size_t num_cond_regs; size_t num_info_regs; int severity; } ;
struct dbg_idle_chk_result_reg_hdr {size_t num_dumped_cond_regs; scalar_t__ start_entry; int size; int data; int num_dumped_info_regs; int severity; void* mem_entry_id; void* rule_id; } ;
struct dbg_idle_chk_result_hdr {size_t num_dumped_cond_regs; scalar_t__ start_entry; int size; int data; int num_dumped_info_regs; int severity; void* mem_entry_id; void* rule_id; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,size_t) ;
 int VAR_11 ;
 int FUNC_3 (struct dbg_idle_chk_result_reg_hdr*,int ,int) ;
 scalar_t__ FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_5 (struct qed_hwfn*,void**) ;
 TYPE_2__* VAR_12 ;

__attribute__((used)) static u32 FUNC_6(struct qed_hwfn *VAR_13,
         struct qed_ptt *VAR_14,
         u32 *
         VAR_15,
         bool VAR_16,
         u16 VAR_17,
         const struct dbg_idle_chk_rule *VAR_18,
         u16 VAR_19, u32 *VAR_20)
{
 struct dbg_tools_data *VAR_21 = &VAR_13->dbg_info;
 const struct dbg_idle_chk_cond_reg *VAR_22;
 const struct dbg_idle_chk_info_reg *VAR_23;
 u32 VAR_24, VAR_25 = 0, VAR_26 = 0;
 struct dbg_idle_chk_result_hdr *VAR_27;
 const union dbg_idle_chk_reg *VAR_28;
 u8 VAR_29;

 VAR_27 = (struct dbg_idle_chk_result_hdr *)VAR_15;
 VAR_28 = &((const union dbg_idle_chk_reg *)
   VAR_12[VAR_0].ptr)[VAR_18->reg_offset];
 VAR_22 = &VAR_28[0].cond_reg;
 VAR_23 = &VAR_28[VAR_18->num_cond_regs].info_reg;


 if (VAR_16) {
  FUNC_3(VAR_27, 0, sizeof(*VAR_27));
  VAR_27->rule_id = VAR_17;
  VAR_27->mem_entry_id = VAR_19;
  VAR_27->severity = VAR_18->severity;
  VAR_27->num_dumped_cond_regs = VAR_18->num_cond_regs;
 }

 VAR_26 += VAR_8;


 for (VAR_29 = 0; VAR_29 < VAR_18->num_cond_regs; VAR_29++) {
  const struct dbg_idle_chk_cond_reg *VAR_30 = &VAR_22[VAR_29];
  struct dbg_idle_chk_result_reg_hdr *VAR_31;

  VAR_31 = (struct dbg_idle_chk_result_reg_hdr *)
     (VAR_15 + VAR_26);


  if (!VAR_16) {
   VAR_26 += VAR_9 +
       VAR_30->entry_size;
   continue;
  }

  VAR_26 += VAR_9;
  FUNC_3(VAR_31, 0, sizeof(*VAR_31));
  VAR_31->start_entry = VAR_30->start_entry;
  VAR_31->size = VAR_30->entry_size;
  FUNC_2(VAR_31->data,
     VAR_4,
     VAR_30->num_entries > 1 || VAR_30->start_entry > 0 ? 1 : 0);
  FUNC_2(VAR_31->data,
     VAR_5, VAR_29);


  for (VAR_24 = 0; VAR_24 < VAR_31->size; VAR_24++, VAR_25++, VAR_26++)
   VAR_15[VAR_26] = VAR_20[VAR_25];
 }


 for (VAR_29 = 0; VAR_29 < VAR_18->num_info_regs; VAR_29++) {
  const struct dbg_idle_chk_info_reg *VAR_32 = &VAR_23[VAR_29];
  u32 VAR_33;


  if (!VAR_16) {
   VAR_26 += VAR_9 + VAR_32->size;
   continue;
  }

  VAR_33 = FUNC_1(VAR_32->data, VAR_2);
  if (VAR_33 >= VAR_10) {
   FUNC_0(VAR_13, "Invalid block_id\n");
   return 0;
  }

  if (!VAR_21->block_in_reset[VAR_33]) {
   struct dbg_idle_chk_result_reg_hdr *VAR_34;
   bool VAR_35, VAR_36, VAR_37 = 1;
   u16 VAR_38;
   u32 VAR_39;

   VAR_34 = (struct dbg_idle_chk_result_reg_hdr *)
      (VAR_15 + VAR_26);


   VAR_36 = FUNC_1(VAR_32->mode.data,
           VAR_6) > 0;
   if (VAR_36) {
    VAR_38 =
        FUNC_1(VAR_32->mode.data,
           VAR_7);
    VAR_37 =
     FUNC_5(VAR_13,
         &VAR_38);
   }

   if (!VAR_37)
    continue;

   VAR_39 = FUNC_1(VAR_32->data,
      VAR_1);
   VAR_35 = FUNC_1(VAR_32->data,
          VAR_3);


   VAR_26 += VAR_9;
   VAR_27->num_dumped_info_regs++;
   FUNC_3(VAR_34, 0, sizeof(*VAR_34));
   VAR_34->size = VAR_32->size;
   FUNC_2(VAR_34->data,
      VAR_5,
      VAR_18->num_cond_regs + VAR_29);


   VAR_26 += FUNC_4(VAR_13,
         VAR_14,
         VAR_15 + VAR_26,
         VAR_16,
         VAR_39,
         VAR_32->size, VAR_35,
         VAR_11, 0);
  }
 }

 return VAR_26;
}
