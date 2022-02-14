
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skge_port {TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct skge_port *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 FUNC_1(VAR_3->hw->pdev, VAR_0, &VAR_4);
 return 1 << (((VAR_4 & VAR_1) >> 14) + 8);
}
