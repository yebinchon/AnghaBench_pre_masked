
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct mcp_trace_meta {scalar_t__ formats_num; char** modules; struct mcp_trace_format* formats; int is_allocated; } ;
struct mcp_trace_format {scalar_t__ data; char* format_str; } ;
struct dbg_tools_user_data {struct mcp_trace_meta mcp_trace_meta; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 scalar_t__ FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 struct dbg_tools_user_data* FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;
 char** VAR_14 ;
 scalar_t__ FUNC_5 (int ,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static enum dbg_status FUNC_6(struct qed_hwfn *VAR_15,
            u8 *VAR_16,
            u32 VAR_17,
            u32 VAR_18,
            u32 VAR_19,
            char *VAR_20,
            u32 *VAR_21)
{
 struct dbg_tools_user_data *VAR_22;
 struct mcp_trace_meta *VAR_23;
 u32 VAR_24, VAR_25;
 enum dbg_status VAR_26;

 VAR_22 = FUNC_2(VAR_15);
 VAR_23 = &VAR_22->mcp_trace_meta;
 *VAR_21 = 0;

 if (!VAR_23->is_allocated)
  return VAR_0;

 VAR_26 = VAR_1;

 while (VAR_19) {
  struct mcp_trace_format *VAR_27;
  u8 VAR_28, VAR_29;
  u32 VAR_30[3] = { 0, 0, 0 };
  u32 VAR_31, VAR_32, VAR_33;

  if (VAR_19 < VAR_10)
   return VAR_0;

  VAR_31 = FUNC_4(VAR_16,
        &VAR_18,
        VAR_17,
        VAR_10);
  VAR_19 -= VAR_10;
  VAR_32 = VAR_31 & VAR_11;


  if (VAR_32 >= VAR_23->formats_num) {
   u8 VAR_34 =
    (u8)((VAR_31 & VAR_12) >>
         VAR_13);

   if (VAR_19 < VAR_34)
    return VAR_0;

   VAR_18 = FUNC_1(VAR_18,
           VAR_34,
           VAR_17);
   VAR_19 -= VAR_34;
   continue;
  }

  VAR_27 = &VAR_23->formats[VAR_32];

  for (VAR_33 = 0,
       VAR_24 = VAR_7,
       VAR_25 = VAR_8;
       VAR_33 < VAR_4;
       VAR_33++,
       VAR_24 <<= VAR_9,
       VAR_25 += VAR_9) {

   u8 VAR_35 = (u8)((VAR_27->data & VAR_24) >>
          VAR_25);




   if (!VAR_35)
    break;




   if (VAR_35 == 3)
    VAR_35 = 4;

   if (VAR_19 < VAR_35)
    return VAR_0;

   VAR_30[VAR_33] = FUNC_4(VAR_16,
            &VAR_18,
            VAR_17,
            VAR_35);
   VAR_19 -= VAR_35;
  }

  VAR_28 = (u8)((VAR_27->data &
         VAR_2) >>
        VAR_3);
  VAR_29 = (u8)((VAR_27->data &
          VAR_5) >>
         VAR_6);
  if (VAR_28 >= FUNC_0(VAR_14))
   return VAR_0;


  *VAR_21 +=
   FUNC_5(FUNC_3(VAR_20,
      *VAR_21),
    "%s %-8s: ",
    VAR_14[VAR_28],
    VAR_23->modules[VAR_29]);
  *VAR_21 +=
      FUNC_5(FUNC_3(VAR_20, *VAR_21),
       VAR_27->format_str,
       VAR_30[0], VAR_30[1], VAR_30[2]);
 }


 (*VAR_21)++;

 return VAR_26;
}
