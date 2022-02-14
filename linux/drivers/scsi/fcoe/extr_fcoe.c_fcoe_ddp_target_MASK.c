
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scatterlist {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct fc_lport {int dummy; } ;
struct TYPE_2__ {int (* ndo_fcoe_ddp_target ) (struct net_device*,int ,struct scatterlist*,unsigned int) ;} ;


 struct net_device* FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct net_device*,int ,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct fc_lport *VAR_0, u16 VAR_1,
      struct scatterlist *VAR_2, unsigned int VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->netdev_ops->ndo_fcoe_ddp_target)
  return VAR_4->netdev_ops->ndo_fcoe_ddp_target(VAR_4, VAR_1,
              VAR_2, VAR_3);

 return 0;
}
