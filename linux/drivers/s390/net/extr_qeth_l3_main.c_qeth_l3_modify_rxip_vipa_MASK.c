
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int addr; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct qeth_ipaddr {TYPE_3__ u; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef enum qeth_ip_types { ____Placeholder_qeth_ip_types } qeth_ip_types ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (struct qeth_ipaddr*,int,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_ipaddr*,int) ;

int FUNC_3(struct qeth_card *VAR_1, bool VAR_2, const u8 *VAR_3,
        enum qeth_ip_types VAR_4,
        enum qeth_prot_versions VAR_5)
{
 struct qeth_ipaddr VAR_6;

 FUNC_1(&VAR_6, VAR_4, VAR_5);
 if (VAR_5 == VAR_0)
  FUNC_0(&VAR_6.u.a4.addr, VAR_3, 4);
 else
  FUNC_0(&VAR_6.u.a6.addr, VAR_3, 16);

 return FUNC_2(VAR_1, &VAR_6, VAR_2);
}
