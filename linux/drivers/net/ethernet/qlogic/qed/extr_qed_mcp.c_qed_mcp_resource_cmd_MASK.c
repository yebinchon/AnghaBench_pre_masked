
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_5,
    struct qed_ptt *VAR_6,
    u32 VAR_7, u32 *VAR_8, u32 *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_0, VAR_7,
    VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 if (*VAR_8 == VAR_2) {
  FUNC_0(VAR_5,
   "The resource command is unsupported by the MFW\n");
  return -VAR_1;
 }

 if (*VAR_9 == VAR_4) {
  u8 VAR_11 = FUNC_2(VAR_7, VAR_3);

  FUNC_1(VAR_5,
     "The resource command is unknown to the MFW [param 0x%08x, opcode %d]\n",
     VAR_7, VAR_11);
  return -VAR_1;
 }

 return VAR_10;
}
