
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fs_enet_private {int ring_mem_addr; scalar_t__ ring_base; } ;


 int FUNC_0 (int ) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ring_base)
  FUNC_0(VAR_1->ring_mem_addr);
}
