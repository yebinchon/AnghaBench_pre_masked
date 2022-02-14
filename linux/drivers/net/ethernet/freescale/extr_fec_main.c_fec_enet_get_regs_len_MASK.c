
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {int pdev; } ;


 int VAR_0 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 struct resource* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_0(VAR_1);
 struct resource *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2->pdev, VAR_0, 0);
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_3);

 return VAR_4;
}
