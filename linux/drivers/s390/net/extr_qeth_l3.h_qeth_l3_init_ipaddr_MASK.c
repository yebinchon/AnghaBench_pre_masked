
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int type; int proto; int disp_flag; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef enum qeth_ip_types { ____Placeholder_qeth_ip_types } qeth_ip_types ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_ipaddr*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct qeth_ipaddr *VAR_1,
           enum qeth_ip_types VAR_2,
           enum qeth_prot_versions VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->type = VAR_2;
 VAR_1->proto = VAR_3;
 VAR_1->disp_flag = VAR_0;
}
