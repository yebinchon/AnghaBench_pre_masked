
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qtnf_bus {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* data_tx ) (struct qtnf_bus*,struct sk_buff*) ;} ;


 int FUNC_0 (struct qtnf_bus*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct qtnf_bus *VAR_0, struct sk_buff *VAR_1)
{
 return VAR_0->bus_ops->data_tx(VAR_0, VAR_1);
}
