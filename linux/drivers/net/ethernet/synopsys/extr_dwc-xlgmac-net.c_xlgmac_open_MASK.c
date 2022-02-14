
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_desc_ops {int (* alloc_channles_and_rings ) (struct xlgmac_pdata*) ;int (* free_channels_and_rings ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {int rx_buf_size; int restart_work; struct xlgmac_desc_ops desc_ops; } ;
struct net_device {int mtu; } ;


 int FUNC_0 (int *,int ) ;
 struct xlgmac_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int VAR_0 ;
 int FUNC_6 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct xlgmac_pdata *VAR_2 = FUNC_1(VAR_1);
 struct xlgmac_desc_ops *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->desc_ops;




 VAR_4 = FUNC_4(VAR_1, VAR_1->mtu);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_2->rx_buf_size = VAR_4;


 VAR_4 = VAR_3->alloc_channles_and_rings(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_2->restart_work, VAR_0);
 FUNC_5(VAR_2);

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto err_channels_and_rings;

 return 0;

err_channels_and_rings:
 VAR_3->free_channels_and_rings(VAR_2);

 return VAR_4;
}
