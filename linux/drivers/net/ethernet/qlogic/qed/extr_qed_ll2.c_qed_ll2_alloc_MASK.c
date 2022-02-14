
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_ll2_info {size_t my_id; } ;
struct qed_hwfn {struct qed_ll2_info* p_ll2_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct qed_ll2_info* FUNC_1 (size_t,int,int ) ;

int FUNC_2(struct qed_hwfn *VAR_3)
{
 struct qed_ll2_info *VAR_4;
 u8 VAR_5;


 VAR_4 = FUNC_1(VAR_2,
        sizeof(struct qed_ll2_info), VAR_1);
 if (!VAR_4) {
  FUNC_0(VAR_3, "Failed to allocate `struct qed_ll2'\n");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5].my_id = VAR_5;

 VAR_3->p_ll2_info = VAR_4;
 return 0;
}
