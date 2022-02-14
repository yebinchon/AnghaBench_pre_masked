
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_dev_attrib {int pi_prot_verify; int pi_prot_type; scalar_t__ hw_pi_prot_type; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int*) ;
 struct se_dev_attrib* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0,
  const char *VAR_1, size_t VAR_2)
{
 struct se_dev_attrib *VAR_3 = FUNC_2(VAR_0);
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (!VAR_4) {
  VAR_3->pi_prot_verify = VAR_4;
  return VAR_2;
 }
 if (VAR_3->hw_pi_prot_type) {
  FUNC_0("DIF protection enabled on underlying hardware,"
   " ignoring\n");
  return VAR_2;
 }
 if (!VAR_3->pi_prot_type) {
  FUNC_0("DIF protection not supported by backend, ignoring\n");
  return VAR_2;
 }
 VAR_3->pi_prot_verify = VAR_4;

 return VAR_2;
}
