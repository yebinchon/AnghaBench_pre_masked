
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int dev; } ;
struct netcp_addr {int node; } ;


 int FUNC_0 (int ,struct netcp_addr*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct netcp_intf *VAR_0, struct netcp_addr *VAR_1)
{
 FUNC_1(&VAR_1->node);
 FUNC_0(VAR_0->dev, VAR_1);
}
