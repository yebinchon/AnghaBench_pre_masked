
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct ethtool_regs {int version; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_regs ) (struct hnae3_handle*,int *,void*) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int *,void*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3->ae_algo->ops->get_regs)
  return;

 VAR_3->ae_algo->ops->get_regs(VAR_3, &VAR_1->version, VAR_2);
}
