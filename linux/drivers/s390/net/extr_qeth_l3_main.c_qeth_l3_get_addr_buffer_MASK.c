
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 struct qeth_ipaddr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct qeth_ipaddr*,int ,int) ;

__attribute__((used)) static struct qeth_ipaddr *FUNC_2(enum qeth_prot_versions VAR_2)
{
 struct qeth_ipaddr *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
