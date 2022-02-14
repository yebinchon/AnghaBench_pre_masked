
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
typedef enum qeth_routing_types { ____Placeholder_qeth_routing_types } qeth_routing_types ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;






 int FUNC_1 (struct qeth_card*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_2,
  enum qeth_routing_types *VAR_3, enum qeth_prot_versions VAR_4)
{
 if (FUNC_0(VAR_2)) {
  switch (*VAR_3) {
  case 132:
  case 131:
  case 129:
  case 133:
   return 0;
  default:
   goto out_inval;
  }
 } else {
  switch (*VAR_3) {
  case 132:
  case 130:
  case 128:
   return 0;
  case 133:
   if (FUNC_1(VAR_2, VAR_4,
            VAR_1))
    return 0;
  default:
   goto out_inval;
  }
 }
out_inval:
 *VAR_3 = 132;
 return -VAR_0;
}
