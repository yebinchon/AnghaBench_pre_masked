
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

int FUNC_1(struct qed_hwfn *VAR_7, struct qed_ptt *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_9 = (VAR_0 <<
   VAR_2);

 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_3,
    VAR_9, &VAR_10, &VAR_11);

 if (VAR_12)
  return VAR_12;

 if (((VAR_10 & VAR_5) != VAR_6) ||
     (VAR_11 != VAR_1))
  VAR_12 = -VAR_4;

 return VAR_12;
}
