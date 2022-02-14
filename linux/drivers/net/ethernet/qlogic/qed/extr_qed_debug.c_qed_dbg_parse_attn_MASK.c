
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct user_dbg_array {size_t* ptr; } ;
struct qed_hwfn {int dummy; } ;
struct dbg_attn_reg_result {size_t block_attn_offset; int sts_val; int mask_val; int data; } ;
struct dbg_attn_block_result {size_t block_id; size_t names_offset; struct dbg_attn_reg_result* reg_results; int data; } ;
struct dbg_attn_bit_mapping {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct qed_hwfn*,char*,char const*,char const*,char const*,size_t,size_t,char const*) ;
 size_t FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_12 ;
 struct user_dbg_array* VAR_13 ;

enum dbg_status FUNC_3(struct qed_hwfn *VAR_14,
       struct dbg_attn_block_result *VAR_15)
{
 struct user_dbg_array *VAR_16, *VAR_17;
 const u32 *VAR_18;
 enum dbg_attn_type VAR_19;
 const char *VAR_20;
 u8 VAR_21, VAR_22, VAR_23;

 VAR_21 = FUNC_2(VAR_15->data, VAR_7);
 VAR_19 = (enum dbg_attn_type)
      FUNC_2(VAR_15->data,
         VAR_6);
 VAR_20 = VAR_12[VAR_15->block_id].name;

 if (!VAR_13[VAR_1].ptr ||
     !VAR_13[VAR_2].ptr ||
     !VAR_13[VAR_3].ptr)
  return VAR_10;

 VAR_16 = &VAR_13[VAR_2];
 VAR_18 = &VAR_16->ptr[VAR_15->names_offset];


 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  struct dbg_attn_bit_mapping *VAR_24;
  struct dbg_attn_reg_result *VAR_25;
  u8 VAR_26, VAR_27 = 0;

  VAR_25 = &VAR_15->reg_results[VAR_22];
  VAR_26 = FUNC_2(VAR_25->data,
      VAR_8);
  VAR_16 = &VAR_13[VAR_1];
  VAR_24 = &((struct dbg_attn_bit_mapping *)
    VAR_16->ptr)[VAR_25->block_attn_offset];

  VAR_17 = &VAR_13[VAR_3];


  for (VAR_23 = 0; VAR_23 < VAR_26; VAR_23++) {
   u16 VAR_28 = FUNC_2(VAR_24[VAR_23].data,
           VAR_5);
   const char *VAR_29, *VAR_30, *VAR_31;
   u32 VAR_32, VAR_33;




   if (FUNC_2(VAR_24[VAR_23].data,
          VAR_4)) {
    VAR_27 += (u8)VAR_28;
    continue;
   }


   if (!(VAR_25->sts_val & FUNC_0(VAR_27))) {
    VAR_27++;
    continue;
   }


   VAR_32 =
    VAR_18[VAR_28];
   VAR_29 = &((const char *)
          VAR_17->ptr)[VAR_32];
   VAR_30 = VAR_19 == VAR_0 ?
     "Interrupt" : "Parity";
   VAR_31 = VAR_25->mask_val & FUNC_0(VAR_27) ?
         " [masked]" : "";
   VAR_33 = FUNC_2(VAR_25->data,
          VAR_9);
   FUNC_1(VAR_14,
      "%s (%s) : %s [address 0x%08x, bit %d]%s\n",
      VAR_20, VAR_30, VAR_29,
      VAR_33, VAR_27, VAR_31);

   VAR_27++;
  }
 }

 return VAR_11;
}
