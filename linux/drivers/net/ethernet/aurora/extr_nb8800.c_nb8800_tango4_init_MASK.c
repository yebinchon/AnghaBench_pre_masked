
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nb8800_priv {int rx_dma_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nb8800_priv*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct nb8800_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct nb8800_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;






 FUNC_1(VAR_3, VAR_1, FUNC_0(7));


 VAR_3->rx_dma_config |= VAR_0;

 return 0;
}
