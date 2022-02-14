
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int descriptors_laddr; int descriptors; int dma_bitmode; int device; } ;
struct platform_device {int dummy; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct sonic_local* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_4(VAR_2);
 struct sonic_local* VAR_4 = FUNC_3(VAR_3);

 FUNC_6(VAR_3);
 FUNC_1(VAR_4->device, VAR_0 * FUNC_0(VAR_4->dma_bitmode),
                   VAR_4->descriptors, VAR_4->descriptors_laddr);
 FUNC_5(VAR_3->base_addr, VAR_1);
 FUNC_2(VAR_3);

 return 0;
}
