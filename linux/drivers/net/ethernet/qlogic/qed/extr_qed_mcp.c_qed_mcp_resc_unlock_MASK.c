
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_resc_unlock_params {int resource; int b_released; scalar_t__ b_force; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int ,int,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int *,int *) ;

int
FUNC_6(struct qed_hwfn *VAR_7,
      struct qed_ptt *VAR_8,
      struct qed_resc_unlock_params *VAR_9)
{
 u32 VAR_10 = 0, VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->b_force ? VAR_5
       : VAR_6;
 FUNC_4(VAR_10, VAR_3, VAR_9->resource);
 FUNC_4(VAR_10, VAR_2, VAR_13);

 FUNC_2(VAR_7, VAR_1,
     "Resource unlock request: param 0x%08x [opcode %d, resource %d]\n",
     VAR_10, VAR_13, VAR_9->resource);


 VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_10, &VAR_11, &VAR_12);
 if (VAR_14)
  return VAR_14;


 VAR_13 = FUNC_3(VAR_12, VAR_4);

 FUNC_2(VAR_7, VAR_1,
     "Resource unlock response: mcp_param 0x%08x [opcode %d]\n",
     VAR_12, VAR_13);

 switch (VAR_13) {
 case 129:
  FUNC_0(VAR_7,
   "Resource unlock request for an already released resource [%d]\n",
   VAR_9->resource);

 case 130:
  VAR_9->b_released = 1;
  break;
 case 128:
  VAR_9->b_released = 0;
  break;
 default:
  FUNC_1(VAR_7,
     "Unexpected opcode in resource unlock response [mcp_param 0x%08x, opcode %d]\n",
     VAR_12, VAR_13);
  return -VAR_0;
 }

 return 0;
}
