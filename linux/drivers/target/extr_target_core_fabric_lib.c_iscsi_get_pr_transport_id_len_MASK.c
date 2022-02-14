
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pr_registration {scalar_t__ isid_present_at_reg; } ;
struct se_node_acl {int nacl_sess_lock; int initiatorname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
 struct se_node_acl *VAR_0,
 struct t10_pr_registration *VAR_1,
 int *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;

 FUNC_0(&VAR_0->nacl_sess_lock);
 VAR_3 = FUNC_2(VAR_0->initiatorname);



 VAR_3++;







 if (VAR_1->isid_present_at_reg) {
  VAR_3 += 5;
  VAR_3 += 7;
  *VAR_2 = 1;
 } else
  *VAR_2 = 0;
 FUNC_1(&VAR_0->nacl_sess_lock);





 VAR_4 = ((-VAR_3) & 3);
 if (VAR_4 != 0)
  VAR_3 += VAR_4;




 VAR_3 += 4;

 return VAR_3;
}
