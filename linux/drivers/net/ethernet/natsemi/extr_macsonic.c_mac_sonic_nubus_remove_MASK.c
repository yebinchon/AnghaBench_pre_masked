
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int descriptors_laddr; int descriptors; int dma_bitmode; int device; } ;
struct nubus_board {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct sonic_local* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct nubus_board*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct nubus_board *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);
 struct sonic_local *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(VAR_2);
 FUNC_1(VAR_3->device,
     VAR_0 * FUNC_0(VAR_3->dma_bitmode),
     VAR_3->descriptors, VAR_3->descriptors_laddr);
 FUNC_2(VAR_2);

 return 0;
}
