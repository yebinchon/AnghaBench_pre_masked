
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dlm_message {scalar_t__ m_type; } ;
struct dlm_ls {int ls_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct dlm_ls*,int) ;
 int FUNC_1 (struct dlm_ls*) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_3, struct dlm_message *VAR_4, int VAR_5)
{
 uint32_t VAR_6 = VAR_4->m_type;


 if (!VAR_3->ls_count)
  return 1;

 if (FUNC_0(VAR_3, VAR_5))
  return 1;




 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_0 ||
     VAR_6 == VAR_1)
  return 1;

 if (!FUNC_1(VAR_3))
  return 0;

 return 1;
}
