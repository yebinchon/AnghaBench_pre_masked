
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {struct aidaw* next_aidaw; } ;
struct aidaw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aidaw*,int ,int ) ;
 struct aidaw* FUNC_1 () ;
 unsigned int FUNC_2 (struct aidaw*) ;

struct aidaw *FUNC_3(struct scm_request *VAR_1, unsigned int VAR_2)
{
 struct aidaw *VAR_3;

 if (FUNC_2(VAR_1->next_aidaw) >= VAR_2)
  return VAR_1->next_aidaw;

 VAR_3 = FUNC_1();
 if (VAR_3)
  FUNC_0(VAR_3, 0, VAR_0);
 return VAR_3;
}
