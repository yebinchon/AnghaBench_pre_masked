
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehea_port_res {int send_mr; int recv_mr; TYPE_1__* port; } ;
struct ehea_adapter {int mr; } ;
struct TYPE_2__ {struct ehea_adapter* adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehea_adapter*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ehea_port_res *VAR_1)
{
 int VAR_2;
 struct ehea_adapter *VAR_3 = VAR_1->port->adapter;

 VAR_2 = FUNC_0(VAR_3, &VAR_3->mr, &VAR_1->send_mr);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_3, &VAR_3->mr, &VAR_1->recv_mr);
 if (VAR_2)
  goto out_free;

 return 0;

out_free:
 FUNC_1(&VAR_1->send_mr);
out:
 FUNC_2("Generating SMRS failed\n");
 return -VAR_0;
}
