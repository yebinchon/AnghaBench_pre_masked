
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int ,int,int) ;
 int FUNC_2 (int*,int,int,int ,int ,int *,int *) ;

__attribute__((used)) static u32 FUNC_3(struct qed_hwfn *VAR_5,
         struct qed_ptt *VAR_6,
         u32 *VAR_7, bool VAR_8)
{
 u32 VAR_9 = 0, VAR_10;

 VAR_9 += FUNC_2(VAR_7,
     VAR_8, 2, VAR_2, 0,
     ((void*)0), ((void*)0));




 VAR_10 = FUNC_0(VAR_0);
 VAR_9 += FUNC_1(VAR_5,
           VAR_6,
           VAR_7 + VAR_9,
           VAR_8,
           VAR_10,
           VAR_1,
           7,
           1);
 VAR_10 = FUNC_0(VAR_3);
 VAR_9 +=
     FUNC_1(VAR_5,
     VAR_6,
     VAR_7 + VAR_9,
     VAR_8,
     VAR_10,
     VAR_4,
     7,
     1);

 return VAR_9;
}
