
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {struct xge_desc_ring* rx_ring; struct xge_desc_ring* tx_ring; } ;
struct xge_desc_ring {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xge_pdata* FUNC_0 (struct net_device*) ;
 struct xge_desc_ring* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct xge_pdata*) ;
 int FUNC_5 (struct xge_pdata*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct xge_pdata *VAR_3 = FUNC_0(VAR_2);
 struct xge_desc_ring *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  goto err;

 VAR_3->tx_ring = VAR_4;
 FUNC_5(VAR_3);


 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  goto err;

 VAR_3->rx_ring = VAR_4;
 FUNC_4(VAR_3);

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_2(VAR_2);

 return -VAR_0;
}
