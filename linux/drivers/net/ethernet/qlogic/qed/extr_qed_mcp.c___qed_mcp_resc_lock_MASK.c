
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_resc_lock_params {int timeout; int resource; int b_granted; void* owner; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int,int,...) ;
 int VAR_0 ;


 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_10,
      struct qed_ptt *VAR_11,
      struct qed_resc_lock_params *VAR_12)
{
 u32 VAR_13 = 0, VAR_14, VAR_15;
 u8 VAR_16;
 int VAR_17;

 switch (VAR_12->timeout) {
 case 131:
  VAR_16 = VAR_7;
  VAR_12->timeout = 0;
  break;
 case 130:
  VAR_16 = VAR_8;
  VAR_12->timeout = 0;
  break;
 default:
  VAR_16 = VAR_9;
  break;
 }

 FUNC_3(VAR_13, VAR_4, VAR_12->resource);
 FUNC_3(VAR_13, VAR_3, VAR_16);
 FUNC_3(VAR_13, VAR_2, VAR_12->timeout);

 FUNC_1(VAR_10,
     VAR_1,
     "Resource lock request: param 0x%08x [age %d, opcode %d, resource %d]\n",
     VAR_13, VAR_12->timeout, VAR_16, VAR_12->resource);


 VAR_17 = FUNC_4(VAR_10, VAR_11, VAR_13, &VAR_14, &VAR_15);
 if (VAR_17)
  return VAR_17;


 VAR_12->owner = FUNC_2(VAR_15, VAR_6);
 VAR_16 = FUNC_2(VAR_15, VAR_5);

 FUNC_1(VAR_10,
     VAR_1,
     "Resource lock response: mcp_param 0x%08x [opcode %d, owner %d]\n",
     VAR_15, VAR_16, VAR_12->owner);

 switch (VAR_16) {
 case 128:
  VAR_12->b_granted = 1;
  break;
 case 129:
  VAR_12->b_granted = 0;
  break;
 default:
  FUNC_0(VAR_10,
     "Unexpected opcode in resource lock response [mcp_param 0x%08x, opcode %d]\n",
     VAR_15, VAR_16);
  return -VAR_0;
 }

 return 0;
}
