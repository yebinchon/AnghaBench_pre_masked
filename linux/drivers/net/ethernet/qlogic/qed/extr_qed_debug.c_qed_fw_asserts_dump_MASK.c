
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {size_t block_id; char letter; int sem_fast_mem_addr; } ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct fw_asserts_ram_section {int list_element_dword_size; int list_num_elements; int list_dword_offset; int list_next_index_dword_offset; int section_ram_line_offset; } ;
struct fw_info {struct fw_asserts_ram_section fw_asserts_section; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*,int,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int*,int,char*,int) ;
 int FUNC_6 (int*,int,char*,int) ;
 int FUNC_7 (int*,int,char*,char*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,size_t,struct fw_info*) ;
 struct storm_defs* VAR_3 ;

__attribute__((used)) static u32 FUNC_11(struct qed_hwfn *VAR_4,
          struct qed_ptt *VAR_5, u32 *VAR_6, bool VAR_7)
{
 struct dbg_tools_data *VAR_8 = &VAR_4->dbg_info;
 struct fw_asserts_ram_section *VAR_9;
 char VAR_10[2] = "?";
 struct fw_info VAR_11;
 u32 VAR_12 = 0;
 u8 VAR_13;


 VAR_12 += FUNC_3(VAR_4,
      VAR_5,
      VAR_6 + VAR_12, VAR_7, 1);
 VAR_12 += FUNC_7(VAR_6 + VAR_12,
         VAR_7, "dump-type", "fw-asserts");


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  u32 VAR_14, VAR_15, VAR_16;
  struct storm_defs *VAR_17 = &VAR_3[VAR_13];
  u32 VAR_18, VAR_19;

  if (VAR_8->block_in_reset[VAR_17->block_id])
   continue;


  FUNC_10(VAR_4, VAR_5, VAR_13, &VAR_11);

  VAR_9 = &VAR_11.fw_asserts_section;


  VAR_10[0] = VAR_17->letter;
  VAR_12 += FUNC_6(VAR_6 + VAR_12,
            VAR_7, "fw_asserts", 2);
  VAR_12 += FUNC_7(VAR_6 + VAR_12,
          VAR_7, "storm", VAR_10);
  VAR_12 += FUNC_5(VAR_6 + VAR_12,
          VAR_7,
          "size",
          VAR_9->list_element_dword_size);


  if (!VAR_7) {
   VAR_12 += VAR_9->list_element_dword_size;
   continue;
  }

  VAR_14 = VAR_17->sem_fast_mem_addr +
   VAR_1 +
   FUNC_2(VAR_9->section_ram_line_offset);
  VAR_15 = VAR_14 +
   FUNC_1(VAR_9->list_next_index_dword_offset);
  VAR_16 = FUNC_9(VAR_4, VAR_5, VAR_15);
  VAR_18 = (VAR_16 > 0 ?
     VAR_16 :
     VAR_9->list_num_elements) - 1;
  VAR_19 = FUNC_0(VAR_14) +
         VAR_9->list_dword_offset +
         VAR_18 * VAR_9->list_element_dword_size;
  VAR_12 +=
      FUNC_8(VAR_4, VAR_5,
         VAR_6 + VAR_12,
         VAR_7, VAR_19,
         VAR_9->list_element_dword_size,
        0, VAR_2, 0);
 }


 VAR_12 += FUNC_4(VAR_6, VAR_12, VAR_7);

 return VAR_12;
}
