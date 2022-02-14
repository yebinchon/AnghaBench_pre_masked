
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int,int*,int*) ;

int FUNC_2(struct qed_hwfn *VAR_2,
     struct qed_ptt *VAR_3, u16 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = (u32)VAR_4 << VAR_0;
 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_1,
    VAR_7, &VAR_5, &VAR_6);
 if (VAR_8)
  FUNC_0(VAR_2, "Failed to send mtu value, rc = %d\n", VAR_8);

 return VAR_8;
}
