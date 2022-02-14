
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int napi; int tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xge_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct xge_pdata*) ;
 int FUNC_10 (struct xge_pdata*) ;
 int FUNC_11 (struct xge_pdata*) ;
 int FUNC_12 (struct xge_pdata*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct xge_pdata*) ;
 int FUNC_16 (struct xge_pdata*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_2)
{
 struct xge_pdata *VAR_3 = FUNC_2(VAR_2);

 FUNC_6();

 if (!FUNC_3(VAR_2))
  goto out;

 FUNC_5(VAR_2);
 FUNC_9(VAR_3);
 FUNC_0(&VAR_3->napi);

 FUNC_16(VAR_3, VAR_0, 0);
 FUNC_14(VAR_2);
 FUNC_8(VAR_2);
 FUNC_16(VAR_3, VAR_1, ~0U);

 FUNC_13(VAR_3->tx_ring);
 FUNC_15(VAR_3);
 FUNC_12(VAR_3);

 FUNC_1(&VAR_3->napi);
 FUNC_10(VAR_3);
 FUNC_11(VAR_3);
 FUNC_4(VAR_2);

out:
 FUNC_7();
}
