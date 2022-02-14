
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_bus {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {void (* data_rx_start ) (struct qtnf_bus*) ;} ;


 void FUNC_0 (struct qtnf_bus*) ;

__attribute__((used)) static inline void FUNC_1(struct qtnf_bus *VAR_0)
{
 return VAR_0->bus_ops->data_rx_start(VAR_0);
}
