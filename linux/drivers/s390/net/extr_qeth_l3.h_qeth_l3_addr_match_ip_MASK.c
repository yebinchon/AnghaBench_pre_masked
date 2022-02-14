
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct qeth_ipaddr *VAR_1,
      struct qeth_ipaddr *VAR_2)
{
 if (VAR_1->proto != VAR_2->proto)
  return 0;
 if (VAR_1->proto == VAR_0)
  return FUNC_0(&VAR_1->u.a6.addr, &VAR_2->u.a6.addr);
 return VAR_1->u.a4.addr == VAR_2->u.a4.addr;
}
