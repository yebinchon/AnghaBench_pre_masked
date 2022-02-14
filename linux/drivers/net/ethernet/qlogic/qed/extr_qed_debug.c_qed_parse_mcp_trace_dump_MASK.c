
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct mcp_trace {scalar_t__ signature; int trace_oldest; int size; int trace_prod; } ;
struct dbg_tools_user_data {int* mcp_trace_user_meta_buf; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 struct dbg_tools_user_data* FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,int const*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,int *,int ,int,int,char*,int*) ;
 int FUNC_5 (int*,int,char*,int*) ;
 int FUNC_6 (int*,char const**,char const**,int*) ;
 int FUNC_7 (int*,char const**,int*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static enum dbg_status FUNC_9(struct qed_hwfn *VAR_4,
      u32 *VAR_5,
      char *VAR_6,
      u32 *VAR_7,
      bool VAR_8)
{
 const char *VAR_9, *VAR_10, *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 struct mcp_trace *VAR_20;
 enum dbg_status VAR_21;
 const u32 *VAR_22;
 u8 *VAR_23;

 *VAR_7 = 0;


 VAR_5 += FUNC_7(VAR_5,
      &VAR_9, &VAR_19);
 if (FUNC_8(VAR_9, "global_params"))
  return VAR_0;


 VAR_5 += FUNC_5(VAR_5,
          VAR_19,
          VAR_6, &VAR_16);


 VAR_5 += FUNC_7(VAR_5,
      &VAR_9, &VAR_19);
 if (FUNC_8(VAR_9, "mcp_trace_data") || VAR_19 != 1)
  return VAR_0;
 VAR_5 += FUNC_6(VAR_5,
       &VAR_10, &VAR_11, &VAR_18);
 if (FUNC_8(VAR_10, "size"))
  return VAR_0;
 VAR_13 = VAR_18;


 VAR_20 = (struct mcp_trace *)VAR_5;
 if (VAR_20->signature != VAR_3 || !VAR_20->size)
  return VAR_0;

 VAR_23 = (u8 *)VAR_5 + sizeof(*VAR_20);
 VAR_15 = VAR_20->trace_oldest;
 VAR_12 = FUNC_0(VAR_20->trace_prod, VAR_15, VAR_20->size);
 VAR_5 += VAR_13;


 VAR_5 += FUNC_7(VAR_5,
      &VAR_9, &VAR_19);
 if (FUNC_8(VAR_9, "mcp_trace_meta"))
  return VAR_0;
 VAR_5 += FUNC_6(VAR_5,
       &VAR_10, &VAR_11, &VAR_18);
 if (FUNC_8(VAR_10, "size"))
  return VAR_0;
 VAR_14 = VAR_18;


 if (!VAR_14) {

  struct dbg_tools_user_data *VAR_24 =
   FUNC_1(VAR_4);

  if (!VAR_24->mcp_trace_user_meta_buf)
   return VAR_1;

  VAR_22 = VAR_24->mcp_trace_user_meta_buf;
 } else {

  VAR_22 = VAR_5;
 }


 VAR_21 = FUNC_2(VAR_4, VAR_22);
 if (VAR_21 != VAR_2)
  return VAR_21;

 VAR_21 = FUNC_4(VAR_4,
      VAR_23,
      VAR_20->size,
      VAR_15,
      VAR_12,
      VAR_6 ?
      VAR_6 + VAR_16 :
      ((void*)0),
      &VAR_17);
 if (VAR_21 != VAR_2)
  return VAR_21;

 if (VAR_8)
  FUNC_3(VAR_4);

 *VAR_7 = VAR_16 + VAR_17;

 return VAR_2;
}
