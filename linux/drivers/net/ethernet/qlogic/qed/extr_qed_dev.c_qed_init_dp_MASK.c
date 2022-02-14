
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef size_t u32 ;
struct qed_hwfn {size_t dp_module; void* dp_level; } ;
struct qed_dev {size_t dp_module; struct qed_hwfn* hwfns; void* dp_level; } ;


 size_t VAR_0 ;

void FUNC_0(struct qed_dev *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 VAR_1->dp_level = VAR_3;
 VAR_1->dp_module = VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct qed_hwfn *VAR_5 = &VAR_1->hwfns[VAR_4];

  VAR_5->dp_level = VAR_3;
  VAR_5->dp_module = VAR_2;
 }
}
