
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int*,int,char const*,int,int,int,int,char const*,int,char) ;

__attribute__((used)) static u32 FUNC_2(struct qed_hwfn *VAR_1,
       struct qed_ptt *VAR_2,
       u32 *VAR_3,
       bool VAR_4,
       const char *VAR_5,
       u32 VAR_6,
       u32 VAR_7,
       bool VAR_8,
       u32 VAR_9,
       bool VAR_10,
       const char *VAR_11,
       bool VAR_12, char VAR_13)
{
 u32 VAR_14 = 0;

 VAR_14 += FUNC_1(VAR_1,
           VAR_3 + VAR_14,
           VAR_4,
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_9,
           VAR_10,
           VAR_11, VAR_12, VAR_13);
 VAR_14 += FUNC_0(VAR_1,
       VAR_2,
       VAR_3 + VAR_14,
       VAR_4, VAR_6, VAR_7, VAR_8,
       VAR_0, 0);

 return VAR_14;
}
