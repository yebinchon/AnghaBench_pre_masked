
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_field {char* lsm_str; int lsm_rule; int op; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int ,char*,void**) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct audit_field *VAR_3,
        struct audit_field *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6;


 VAR_6 = FUNC_0(VAR_4->lsm_str, VAR_2);
 if (FUNC_3(!VAR_6))
  return -VAR_1;
 VAR_3->lsm_str = VAR_6;


 VAR_5 = FUNC_2(VAR_3->type, VAR_3->op, VAR_3->lsm_str,
           (void **)&VAR_3->lsm_rule);


 if (VAR_5 == -VAR_0) {
  FUNC_1("audit rule for LSM \'%s\' is invalid\n",
   VAR_3->lsm_str);
  VAR_5 = 0;
 }

 return VAR_5;
}
