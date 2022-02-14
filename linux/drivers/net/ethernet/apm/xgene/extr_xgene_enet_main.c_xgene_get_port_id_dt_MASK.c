
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int port_id; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct xgene_enet_pdata *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_1(VAR_0->of_node, "port-id", &VAR_2);

 VAR_1->port_id = VAR_2 & FUNC_0(0);

 return;
}
