
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* s6_addr; } ;
struct TYPE_7__ {TYPE_4__ addr; } ;
struct TYPE_5__ {TYPE_3__ a6; } ;
struct qeth_ipaddr {TYPE_1__ u; } ;
struct TYPE_6__ {int* hsuid; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_ipaddr*,int ,int ) ;
 int FUNC_1 (struct qeth_card*,struct qeth_ipaddr*,int) ;

int FUNC_2(struct qeth_card *VAR_2, bool VAR_3)
{
 struct qeth_ipaddr VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_4, VAR_0, VAR_1);
 VAR_4.u.a6.addr.s6_addr[0] = 0xfe;
 VAR_4.u.a6.addr.s6_addr[1] = 0x80;
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  VAR_4.u.a6.addr.s6_addr[8+VAR_5] = VAR_2->options.hsuid[VAR_5];

 return FUNC_1(VAR_2, &VAR_4, VAR_3);
}
