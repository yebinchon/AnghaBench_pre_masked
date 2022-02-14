
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct mcp_trace_meta {int is_allocated; scalar_t__ modules_num; char** modules; scalar_t__ formats_num; struct mcp_trace_format* formats; } ;
struct mcp_trace_format {size_t data; char* format_str; } ;
struct dbg_tools_user_data {struct mcp_trace_meta mcp_trace_meta; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (scalar_t__,int,int ) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct mcp_trace_meta*,int ,int) ;
 struct dbg_tools_user_data* FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*) ;
 void* FUNC_5 (size_t*,scalar_t__*) ;
 scalar_t__ FUNC_6 (size_t*,scalar_t__*) ;
 int FUNC_7 (size_t*,scalar_t__*,size_t,char*) ;

__attribute__((used)) static enum dbg_status
FUNC_8(struct qed_hwfn *VAR_8,
         const u32 *VAR_9)
{
 struct dbg_tools_user_data *VAR_10;
 u32 VAR_11 = 0, VAR_12, VAR_13;
 struct mcp_trace_meta *VAR_14;
 u8 *VAR_15;

 VAR_10 = FUNC_3(VAR_8);
 VAR_14 = &VAR_10->mcp_trace_meta;
 VAR_15 = (u8 *)VAR_9;


 if (VAR_14->is_allocated)
  FUNC_4(VAR_8);

 FUNC_2(VAR_14, 0, sizeof(*VAR_14));


 VAR_12 = FUNC_6(VAR_15, &VAR_11);
 if (VAR_12 != VAR_7)
  return VAR_0;


 VAR_14->modules_num = FUNC_5(VAR_15, &VAR_11);
 VAR_14->modules = FUNC_0(VAR_14->modules_num, sizeof(char *),
    VAR_3);
 if (!VAR_14->modules)
  return VAR_2;


 for (VAR_13 = 0; VAR_13 < VAR_14->modules_num; VAR_13++) {
  u8 VAR_16 = FUNC_5(VAR_15, &VAR_11);

  *(VAR_14->modules + VAR_13) = FUNC_1(VAR_16, VAR_3);
  if (!(*(VAR_14->modules + VAR_13))) {

   VAR_14->modules_num = VAR_13 ? VAR_13 - 1 : 0;
   return VAR_2;
  }

  FUNC_7(VAR_15, &VAR_11, VAR_16,
          *(VAR_14->modules + VAR_13));
  if (VAR_16 > VAR_6)
   (*(VAR_14->modules + VAR_13))[VAR_6] = '\0';
 }


 VAR_12 = FUNC_6(VAR_15, &VAR_11);
 if (VAR_12 != VAR_7)
  return VAR_0;


 VAR_14->formats_num = FUNC_6(VAR_15, &VAR_11);
 VAR_14->formats = FUNC_0(VAR_14->formats_num,
    sizeof(struct mcp_trace_format),
    VAR_3);
 if (!VAR_14->formats)
  return VAR_2;


 for (VAR_13 = 0; VAR_13 < VAR_14->formats_num; VAR_13++) {
  struct mcp_trace_format *VAR_17 = &VAR_14->formats[VAR_13];
  u8 VAR_18;

  VAR_17->data = FUNC_6(VAR_15,
          &VAR_11);
  VAR_18 =
      (VAR_17->data &
       VAR_4) >> VAR_5;
  VAR_17->format_str = FUNC_1(VAR_18, VAR_3);
  if (!VAR_17->format_str) {

   VAR_14->formats_num = VAR_13 ? VAR_13 - 1 : 0;
   return VAR_2;
  }

  FUNC_7(VAR_15,
          &VAR_11,
          VAR_18, VAR_17->format_str);
 }

 VAR_14->is_allocated = 1;
 return VAR_1;
}
