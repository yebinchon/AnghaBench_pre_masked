
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum init_split_types { ____Placeholder_init_split_types } init_split_types ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int,int ) ;
 int FUNC_1 (int*,int,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct qed_hwfn *VAR_0,
      struct qed_ptt *VAR_1,
      u32 *VAR_2,
      bool VAR_3, u32 VAR_4, u32 VAR_5, bool VAR_6,
      enum init_split_types VAR_7, u8 VAR_8)
{
 u32 VAR_9 = 0;

 VAR_9 += FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_9 += FUNC_0(VAR_0,
       VAR_1,
       VAR_2 + VAR_9,
       VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);

 return VAR_9;
}
