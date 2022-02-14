
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct t10_pr_registration {unsigned char* pr_reg_isid; scalar_t__ isid_present_at_reg; } ;
struct se_node_acl {char* initiatorname; int nacl_sess_lock; } ;


 int FUNC_0 (size_t,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (unsigned char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(
 struct se_node_acl *VAR_0,
 struct t10_pr_registration *VAR_1,
 int *VAR_2,
 unsigned char *VAR_3)
{
 u32 VAR_4 = 4, VAR_5 = 0;
 u16 VAR_6 = 0;

 FUNC_1(&VAR_0->nacl_sess_lock);
 VAR_6 = FUNC_3(&VAR_3[VAR_4], "%s", VAR_0->initiatorname);



 VAR_6++;
 if ((*VAR_2 == 1) && (VAR_1->isid_present_at_reg)) {




  VAR_3[0] |= 0x40;
  VAR_3[VAR_4+VAR_6] = 0x2c; VAR_4++;
  VAR_3[VAR_4+VAR_6] = 0x69; VAR_4++;
  VAR_3[VAR_4+VAR_6] = 0x2c; VAR_4++;
  VAR_3[VAR_4+VAR_6] = 0x30; VAR_4++;
  VAR_3[VAR_4+VAR_6] = 0x78; VAR_4++;
  VAR_6 += 5;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[0]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[1]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[2]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[3]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[4]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = VAR_1->pr_reg_isid[5]; VAR_4++;
  VAR_3[VAR_4+VAR_6] = '\0'; VAR_4++;
  VAR_6 += 7;
 }
 FUNC_2(&VAR_0->nacl_sess_lock);





 VAR_5 = ((-VAR_6) & 3);
 if (VAR_5 != 0)
  VAR_6 += VAR_5;

 FUNC_0(VAR_6, &VAR_3[2]);




 VAR_6 += 4;

 return VAR_6;
}
