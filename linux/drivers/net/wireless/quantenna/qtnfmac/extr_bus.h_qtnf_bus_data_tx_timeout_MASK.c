
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_bus {TYPE_1__* bus_ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {void (* data_tx_timeout ) (struct qtnf_bus*,struct net_device*) ;} ;


 void FUNC_0 (struct qtnf_bus*,struct net_device*) ;

__attribute__((used)) static inline void
FUNC_1(struct qtnf_bus *VAR_0, struct net_device *VAR_1)
{
 return VAR_0->bus_ops->data_tx_timeout(VAR_0, VAR_1);
}
