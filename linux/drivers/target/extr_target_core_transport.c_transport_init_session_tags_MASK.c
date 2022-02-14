
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int dummy; } ;
typedef enum target_prot_op { ____Placeholder_target_prot_op } target_prot_op ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_session* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct se_session*) ;
 int FUNC_2 (char*,unsigned int) ;
 struct se_session* FUNC_3 (int) ;
 int FUNC_4 (struct se_session*,unsigned int,unsigned int) ;
 int FUNC_5 (struct se_session*) ;

__attribute__((used)) static struct se_session *
FUNC_6(unsigned int VAR_2, unsigned int VAR_3,
       enum target_prot_op VAR_4)
{
 struct se_session *VAR_5;
 int VAR_6;

 if (VAR_2 != 0 && !VAR_3) {
  FUNC_2("init_session_tags called with percpu-ida tag_num:"
         " %u, but zero tag_size\n", VAR_2);
  return FUNC_0(-VAR_0);
 }
 if (!VAR_2 && VAR_3) {
  FUNC_2("init_session_tags called with percpu-ida tag_size:"
         " %u, but zero tag_num\n", VAR_3);
  return FUNC_0(-VAR_0);
 }

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_5(VAR_5);
  return FUNC_0(-VAR_1);
 }

 return VAR_5;
}
