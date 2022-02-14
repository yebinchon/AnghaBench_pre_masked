
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct dbg_dump_split_hdr {int hdr; } ;
struct dbg_array {size_t size_in_dwords; int * ptr; } ;
typedef enum init_split_types { ____Placeholder_init_split_types } init_split_types ;
struct TYPE_2__ {size_t size_in_dwords; int * ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_3 ;
 size_t FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct dbg_array,size_t*,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static u32 FUNC_3(struct qed_hwfn *VAR_5,
     struct qed_ptt *VAR_6,
     u32 *VAR_7, bool VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0;

 while (VAR_10 <
        VAR_4[VAR_0].size_in_dwords) {
  const struct dbg_dump_split_hdr *VAR_11;
  struct dbg_array VAR_12;
  enum init_split_types VAR_13;
  u32 VAR_14;

  VAR_11 = (const struct dbg_dump_split_hdr *)
   &VAR_4[VAR_0].ptr[VAR_10++];
  VAR_13 =
   FUNC_1(VAR_11->hdr,
      VAR_2);
  VAR_14 =
   FUNC_1(VAR_11->hdr,
      VAR_1);
  VAR_12.ptr =
   &VAR_4[VAR_0].ptr[VAR_10];
  VAR_12.size_in_dwords = VAR_14;

  if (VAR_13 == VAR_3)
   VAR_9 += FUNC_2(VAR_5,
          VAR_6,
          VAR_12,
          VAR_7 + VAR_9,
          VAR_8);
  else
   FUNC_0(VAR_5,
      "Dumping split memories is currently not supported\n");

  VAR_10 += VAR_14;
 }

 return VAR_9;
}
