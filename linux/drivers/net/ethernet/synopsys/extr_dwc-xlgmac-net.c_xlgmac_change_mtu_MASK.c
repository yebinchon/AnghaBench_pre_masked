
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int rx_buf_size; } ;
struct net_device {int mtu; } ;


 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct xlgmac_pdata *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->rx_buf_size = VAR_3;
 VAR_0->mtu = VAR_1;

 FUNC_2(VAR_2);

 return 0;
}
