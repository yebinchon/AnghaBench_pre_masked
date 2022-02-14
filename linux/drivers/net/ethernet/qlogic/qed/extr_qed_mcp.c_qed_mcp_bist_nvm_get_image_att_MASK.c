
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct bist_nvm_image_att {int return_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int,int*,int*,int*,int*) ;

int FUNC_1(struct qed_hwfn *VAR_7,
       struct qed_ptt *VAR_8,
       struct bist_nvm_image_att *VAR_9,
       u32 VAR_10)
{
 u32 VAR_11 = 0, VAR_12, VAR_13 = 0, VAR_14 = 0;
 int VAR_15;

 VAR_12 = VAR_0 <<
  VAR_2;
 VAR_12 |= VAR_10 << VAR_1;

 VAR_15 = FUNC_0(VAR_7, VAR_8,
    VAR_3, VAR_12,
    &VAR_13, &VAR_14,
    &VAR_11,
    (u32 *)VAR_9);
 if (VAR_15)
  return VAR_15;

 if (((VAR_13 & VAR_5) != VAR_6) ||
     (VAR_9->return_code != 1))
  VAR_15 = -VAR_4;

 return VAR_15;
}
