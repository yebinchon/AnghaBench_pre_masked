
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

int FUNC_2(struct qed_hwfn *VAR_3,
     struct qed_ptt *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_0,
    VAR_5, &VAR_6, &VAR_7);

 if (VAR_8) {
  FUNC_0(VAR_3,
         "MCP response failure for mask parities, aborting\n");
 } else if (VAR_6 != VAR_2) {
  FUNC_0(VAR_3,
         "MCP did not acknowledge mask parity request. Old MFW?\n");
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
