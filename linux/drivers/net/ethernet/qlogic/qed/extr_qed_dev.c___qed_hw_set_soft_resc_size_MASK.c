
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_resources { ____Placeholder_qed_resources } qed_resources ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int ,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,char*,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_1,
       struct qed_ptt *VAR_2,
       enum qed_resources VAR_3,
       u32 VAR_4, u32 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_1,
     "MFW response failure for a max value setting of resource %d [%s]\n",
     VAR_3, FUNC_2(VAR_3));
  return VAR_6;
 }

 if (*VAR_5 != VAR_0)
  FUNC_0(VAR_1,
   "Failed to set the max value of resource %d [%s]. mcp_resp = 0x%08x.\n",
   VAR_3, FUNC_2(VAR_3), *VAR_5);

 return 0;
}
