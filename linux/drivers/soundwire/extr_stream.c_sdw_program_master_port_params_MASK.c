
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdw_port_runtime {int port_params; int transport_params; } ;
struct TYPE_4__ {int next_bank; } ;
struct sdw_bus {TYPE_2__ params; TYPE_1__* port_ops; } ;
struct TYPE_3__ {int (* dpn_set_port_transport_params ) (struct sdw_bus*,int *,int ) ;int (* dpn_set_port_params ) (struct sdw_bus*,int *,int ) ;} ;


 int FUNC_0 (struct sdw_bus*,int *,int ) ;
 int FUNC_1 (struct sdw_bus*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct sdw_bus *VAR_0,
       struct sdw_port_runtime *VAR_1)
{
 int VAR_2;







 VAR_2 = VAR_0->port_ops->dpn_set_port_transport_params(VAR_0,
     &VAR_1->transport_params,
     VAR_0->params.next_bank);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_0->port_ops->dpn_set_port_params(VAR_0,
        &VAR_1->port_params,
        VAR_0->params.next_bank);
}
