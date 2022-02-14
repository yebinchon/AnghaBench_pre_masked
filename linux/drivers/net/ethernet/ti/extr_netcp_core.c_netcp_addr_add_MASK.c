
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netcp_intf {int addr_list; int dev; } ;
struct netcp_addr {int type; int node; int addr; struct netcp_intf* netcp; scalar_t__ flags; } ;
typedef enum netcp_addr_type { ____Placeholder_netcp_addr_type } netcp_addr_type ;


 int VAR_0 ;
 struct netcp_addr* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct netcp_addr *FUNC_4(struct netcp_intf *VAR_1,
      const u8 *VAR_2,
      enum netcp_addr_type VAR_3)
{
 struct netcp_addr *VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->type = VAR_3;
 VAR_4->flags = 0;
 VAR_4->netcp = VAR_1;
 if (VAR_2)
  FUNC_2(VAR_4->addr, VAR_2);
 else
  FUNC_1(VAR_4->addr);
 FUNC_3(&VAR_4->node, &VAR_1->addr_list);

 return VAR_4;
}
