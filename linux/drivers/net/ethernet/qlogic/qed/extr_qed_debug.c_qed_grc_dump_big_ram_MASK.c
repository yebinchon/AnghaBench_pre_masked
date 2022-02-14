
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct big_ram_defs {int* ram_size; int data_reg_addr; int addr_reg_addr; int instance_name; int * is_256b_bit_offset; int is_256b_reg_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,int*,int,char*,int ,int,int,int,char*,int,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 struct big_ram_defs* VAR_3 ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static u32 FUNC_8(struct qed_hwfn *VAR_4,
    struct qed_ptt *VAR_5,
    u32 *VAR_6, bool VAR_7, u8 VAR_8)
{
 struct dbg_tools_data *VAR_9 = &VAR_4->dbg_info;
 u32 VAR_10, VAR_11, VAR_12 = 0, VAR_13, VAR_14;
 char VAR_15[12] = "???_BIG_RAM";
 char VAR_16[8] = "???_RAM";
 struct big_ram_defs *VAR_17;

 VAR_17 = &VAR_3[VAR_8];
 VAR_11 = VAR_17->ram_size[VAR_9->chip_id];

 VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_17->is_256b_reg_addr);
 VAR_10 = VAR_13 &
       FUNC_0(VAR_17->is_256b_bit_offset[VAR_9->chip_id]) ? 256
          : 128;

 FUNC_7(VAR_16, VAR_17->instance_name, VAR_0);
 FUNC_7(VAR_15, VAR_17->instance_name, VAR_0);


 VAR_12 += FUNC_4(VAR_4,
           VAR_6 + VAR_12,
           VAR_7,
           VAR_15,
           0,
           VAR_11,
           VAR_10 * 8,
           0, VAR_16, 0, 0);


 if (!VAR_7)
  return VAR_12 + VAR_11;


 for (VAR_14 = 0; VAR_14 < FUNC_2(VAR_11, VAR_1);
      VAR_14++) {
  u32 VAR_18, VAR_19;

  FUNC_6(VAR_4, VAR_5, VAR_17->addr_reg_addr, VAR_14);
  VAR_18 = FUNC_1(VAR_17->data_reg_addr);
  VAR_19 = VAR_1;
  VAR_12 += FUNC_3(VAR_4,
        VAR_5,
        VAR_6 + VAR_12,
        VAR_7,
        VAR_18,
        VAR_19,
        0, VAR_2, 0);
 }

 return VAR_12;
}
