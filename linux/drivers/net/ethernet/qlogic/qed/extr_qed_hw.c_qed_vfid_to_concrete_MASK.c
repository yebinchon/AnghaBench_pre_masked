
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int rel_pf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

u32 FUNC_1(struct qed_hwfn *VAR_3, u8 VAR_4)
{
 u32 VAR_5 = 0;

 FUNC_0(VAR_5, VAR_0, VAR_3->rel_pf_id);
 FUNC_0(VAR_5, VAR_1, VAR_4);
 FUNC_0(VAR_5, VAR_2, 1);

 return VAR_5;
}
