
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int FUNC_0 (struct qeth_card*,int) ;
 int FUNC_1 (struct qeth_card*,int) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_0, bool VAR_1,
       enum qeth_prot_versions VAR_2)
{
 return VAR_1 ? FUNC_1(VAR_0, VAR_2) : FUNC_0(VAR_0, VAR_2);
}
