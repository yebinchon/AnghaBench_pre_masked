
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; scalar_t__* block_in_reset; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block {int dummy; } ;
struct block_defs {scalar_t__* dbg_client_id; int dbg_enable_addr; int name; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (size_t) ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_3 (struct dbg_bus_block*) ;
 int VAR_8 ;
 size_t VAR_9 ;
 struct dbg_bus_block* FUNC_4 (struct qed_hwfn*,int) ;
 int FUNC_5 (size_t*,int ,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,int,scalar_t__,int,int ,int ,int ) ;
 size_t FUNC_11 (struct qed_hwfn*,struct qed_ptt*,size_t*,int,size_t,size_t,int,int ,int ) ;
 size_t FUNC_12 (struct qed_hwfn*,size_t*,int,int ,int ,size_t,int,int,char*,int,int ) ;
 scalar_t__ FUNC_13 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 struct block_defs** VAR_10 ;

__attribute__((used)) static u32 FUNC_15(struct qed_hwfn *VAR_11,
         struct qed_ptt *VAR_12,
         u32 *VAR_13, bool VAR_14)
{
 struct dbg_tools_data *VAR_15 = &VAR_11->dbg_info;
 u32 VAR_16, VAR_17, VAR_18 = 0;


 if (VAR_14 && FUNC_13(VAR_11, VAR_12, VAR_3))
  return 0;

 if (VAR_14) {

  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
   struct block_defs *VAR_19 = VAR_10[VAR_16];

   if (VAR_19->dbg_client_id[VAR_15->chip_id] !=
       VAR_7)
    FUNC_14(VAR_11, VAR_12, VAR_19->dbg_enable_addr,
           0);
  }

  FUNC_8(VAR_11, VAR_12);
  FUNC_9(VAR_11,
      VAR_12, VAR_0);
  FUNC_14(VAR_11,
         VAR_12, VAR_4, VAR_1);
  FUNC_14(VAR_11, VAR_12, VAR_5, 1);
  FUNC_7(VAR_11, VAR_12, 1);
 }


 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  struct block_defs *VAR_20 = VAR_10[VAR_16];
  struct dbg_bus_block *VAR_21;
  u32 VAR_22, VAR_23, VAR_24;
  u8 VAR_25;

  if (VAR_20->dbg_client_id[VAR_15->chip_id] ==
      VAR_7)
   continue;

  VAR_21 = FUNC_4(VAR_11,
          (enum block_id)VAR_16);
  VAR_22 = FUNC_3(VAR_21) *
          VAR_9;


  VAR_18 += FUNC_12(VAR_11,
            VAR_13 + VAR_18,
            VAR_14,
            VAR_20->name,
            0,
            VAR_22,
            32, 0, "STATIC", 0, 0);

  if (!VAR_14) {
   VAR_18 += VAR_22;
   continue;
  }


  if (VAR_15->block_in_reset[VAR_16]) {
   FUNC_5(VAR_13 + VAR_18, 0,
          FUNC_2(VAR_22));
   VAR_18 += VAR_22;
   continue;
  }


  VAR_25 = VAR_20->dbg_client_id[VAR_15->chip_id];
  FUNC_6(VAR_11,
           VAR_12,
           FUNC_0(VAR_25));

  VAR_23 = FUNC_1(VAR_2);
  VAR_24 = VAR_9;
  for (VAR_17 = 0; VAR_17 < (u32)FUNC_3(VAR_21);
       VAR_17++) {

   FUNC_10(VAR_11,
         VAR_12,
         (enum block_id)VAR_16,
         (u8)VAR_17, 0xf, 0, 0, 0);


   VAR_18 += FUNC_11(VAR_11,
         VAR_12,
         VAR_13 + VAR_18,
         VAR_14,
         VAR_23,
         VAR_24,
         1, VAR_8,
         0);
  }


  FUNC_6(VAR_11, VAR_12, 0);
  FUNC_14(VAR_11, VAR_12, VAR_20->dbg_enable_addr, 0);
 }

 if (VAR_14) {
  FUNC_7(VAR_11, VAR_12, 0);
  FUNC_6(VAR_11, VAR_12, 0);
 }

 return VAR_18;
}
