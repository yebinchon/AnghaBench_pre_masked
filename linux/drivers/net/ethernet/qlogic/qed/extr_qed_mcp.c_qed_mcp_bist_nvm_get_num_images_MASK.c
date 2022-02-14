
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int,int*,int*) ;

int FUNC_1(struct qed_hwfn *VAR_6,
        struct qed_ptt *VAR_7,
        u32 *VAR_8)
{
 u32 VAR_9 = 0, VAR_10;
 int VAR_11 = 0;

 VAR_9 = (VAR_0 <<
   VAR_1);

 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_2,
    VAR_9, &VAR_10, VAR_8);
 if (VAR_11)
  return VAR_11;

 if (((VAR_10 & VAR_4) != VAR_5))
  VAR_11 = -VAR_3;

 return VAR_11;
}
