
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef void* u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct dbg_dump_mem {int dword1; int dword0; } ;
struct TYPE_4__ {int data; } ;
struct dbg_dump_cond_hdr {size_t data_size; size_t block_id; TYPE_1__ mode; } ;
struct dbg_array {size_t size_in_dwords; int * ptr; } ;
typedef enum dbg_grc_params { ____Placeholder_dbg_grc_params } dbg_grc_params ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_6__ {size_t storm_id; scalar_t__ associated_to_storm; } ;
struct TYPE_5__ {char letter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t FUNC_2 (struct qed_hwfn*,struct qed_ptt*,size_t*,int,int *,size_t,size_t,int,int ,int,int ,int,char) ;
 size_t FUNC_3 (struct qed_hwfn*,int) ;
 int FUNC_4 (struct qed_hwfn*,int,size_t) ;
 int FUNC_5 (struct qed_hwfn*,void**) ;
 TYPE_3__** VAR_14 ;
 int * VAR_15 ;
 TYPE_2__* VAR_16 ;

__attribute__((used)) static u32 FUNC_6(struct qed_hwfn *VAR_17,
        struct qed_ptt *VAR_18,
        struct dbg_array VAR_19,
        u32 *VAR_20, bool VAR_21)
{
 u32 VAR_22, VAR_23 = 0, VAR_24 = 0;
 bool VAR_25 = 1;

 while (VAR_24 < VAR_19.size_in_dwords) {
  const struct dbg_dump_cond_hdr *VAR_26;
  u16 VAR_27;
  u32 VAR_28;
  bool VAR_29;

  VAR_26 = (const struct dbg_dump_cond_hdr *)
      &VAR_19.ptr[VAR_24++];
  VAR_28 = VAR_26->data_size / VAR_10;


  VAR_29 = FUNC_1(VAR_26->mode.data,
          VAR_6) > 0;
  if (VAR_29) {
   VAR_27 =
    FUNC_1(VAR_26->mode.data,
       VAR_7);
   VAR_25 = FUNC_5(VAR_17,
             &VAR_27);
  }

  if (!VAR_25) {
   VAR_24 += VAR_26->data_size;
   continue;
  }

  for (VAR_22 = 0; VAR_22 < VAR_28;
       VAR_22++, VAR_24 += VAR_10) {
   const struct dbg_dump_mem *VAR_30 =
    (const struct dbg_dump_mem *)
    &VAR_19.ptr[VAR_24];
   u8 VAR_31 = FUNC_1(VAR_30->dword0,
          VAR_2);
   bool VAR_32 = 0, VAR_33;
   enum dbg_grc_params VAR_34;
   char VAR_35 = 'a';
   enum block_id VAR_36;
   u32 VAR_37, VAR_38;

   if (VAR_31 >= VAR_11) {
    FUNC_0(VAR_17, "Invalid mem_group_id\n");
    return 0;
   }

   VAR_36 = (enum block_id)VAR_26->block_id;
   if (!FUNC_4(VAR_17,
           VAR_36,
           VAR_31))
    continue;

   VAR_37 = FUNC_1(VAR_30->dword0, VAR_0);
   VAR_38 = FUNC_1(VAR_30->dword1, VAR_1);
   VAR_33 = FUNC_1(VAR_30->dword1,
       VAR_3);




   if (VAR_31 == VAR_12) {
    if (VAR_38 % VAR_8) {
     FUNC_0(VAR_17,
        "Invalid CCFC connection memory size\n");
     return 0;
    }

    VAR_34 = VAR_4;
    VAR_38 = FUNC_3(VAR_17, VAR_34) *
       (VAR_38 / VAR_8);
   } else if (VAR_31 == VAR_13) {
    if (VAR_38 % VAR_9) {
     FUNC_0(VAR_17,
        "Invalid TCFC task memory size\n");
     return 0;
    }

    VAR_34 = VAR_5;
    VAR_38 = FUNC_3(VAR_17, VAR_34) *
       (VAR_38 / VAR_9);
   }




   if (VAR_14
       [VAR_26->block_id]->associated_to_storm) {
    VAR_32 = 1;
    VAR_35 =
        VAR_16[VAR_14
       [VAR_26->block_id]->
       storm_id].letter;
   }


   VAR_23 += FUNC_2(VAR_17,
      VAR_18,
      VAR_20 + VAR_23,
      VAR_21,
      ((void*)0),
      VAR_37,
      VAR_38,
      VAR_33,
      0,
      0,
      VAR_15[VAR_31],
      VAR_32,
      VAR_35);
  }
 }

 return VAR_23;
}
