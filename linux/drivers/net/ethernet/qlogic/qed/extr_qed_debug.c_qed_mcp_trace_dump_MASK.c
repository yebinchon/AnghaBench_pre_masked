
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct mcp_trace {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct qed_hwfn*,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*,int,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int*,int,char*,int) ;
 int FUNC_6 (int*,int,char*,int) ;
 int FUNC_7 (int*,int,char*,char*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_9 (struct qed_hwfn*,int ) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*) ;
 scalar_t__ FUNC_11 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,int*,int*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_ptt*,int,int*,int*,int*) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*,int,int,int*) ;

__attribute__((used)) static enum dbg_status FUNC_15(struct qed_hwfn *VAR_6,
       struct qed_ptt *VAR_7,
       u32 *VAR_8,
       bool VAR_9, u32 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = 0, VAR_15, VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18 = 0;
 enum dbg_status VAR_19;
 bool VAR_20;
 int VAR_21 = 0;

 *VAR_10 = 0;

 VAR_20 = !FUNC_9(VAR_6, VAR_2);


 VAR_19 = FUNC_12(VAR_6,
          VAR_7,
          &VAR_11,
          &VAR_12);
 if (VAR_19 != VAR_4)
  return VAR_19;


 VAR_16 += FUNC_3(VAR_6,
      VAR_7,
      VAR_8 + VAR_16, VAR_9, 1);
 VAR_16 += FUNC_7(VAR_8 + VAR_16,
         VAR_9, "dump-type", "mcp-trace");





 if (VAR_9 && VAR_20) {
  VAR_21 = !FUNC_10(VAR_6, VAR_7);
  if (!VAR_21)
   FUNC_2(VAR_6, "MCP halt failed!\n");
 }


 VAR_13 =
     FUNC_1(VAR_12 + sizeof(struct mcp_trace),
    VAR_0);


 VAR_16 += FUNC_6(VAR_8 + VAR_16,
           VAR_9, "mcp_trace_data", 1);
 VAR_16 += FUNC_5(VAR_8 + VAR_16,
         VAR_9, "size", VAR_13);


 VAR_16 += FUNC_8(VAR_6,
       VAR_7,
       VAR_8 + VAR_16,
       VAR_9,
       FUNC_0(VAR_11),
       VAR_13, 0,
       VAR_5, 0);


 if (VAR_21 && FUNC_11(VAR_6, VAR_7))
  FUNC_2(VAR_6, "Failed to resume MCP after halt!\n");


 VAR_16 += FUNC_6(VAR_8 + VAR_16,
           VAR_9, "mcp_trace_meta", 1);





 VAR_18 =
  FUNC_9(VAR_6, VAR_1);
 if ((!VAR_18 || VAR_9) && VAR_20) {
  VAR_19 = FUNC_13(VAR_6,
           VAR_7,
           VAR_12,
           &VAR_15,
           &VAR_17,
           &VAR_18);
  if (VAR_19 == VAR_4)
   VAR_14 =
    FUNC_0(VAR_18);
 }


 VAR_16 += FUNC_5(VAR_8 + VAR_16,
         VAR_9, "size", VAR_14);


 if (VAR_9 && VAR_14)
  VAR_19 = FUNC_14(VAR_6,
       VAR_7,
       VAR_17,
       VAR_18,
       VAR_8 + VAR_16);
 if (VAR_19 == VAR_4)
  VAR_16 += VAR_14;


 VAR_16 += FUNC_4(VAR_8, VAR_16, VAR_9);

 *VAR_10 = VAR_16;




 return VAR_20 ? VAR_19 : VAR_3;
}
