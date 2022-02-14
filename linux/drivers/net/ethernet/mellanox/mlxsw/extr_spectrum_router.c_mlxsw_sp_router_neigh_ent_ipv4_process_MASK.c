
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
struct mlxsw_sp {TYPE_3__* router; TYPE_1__* bus_info; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_2__** rifs; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,size_t*,int *) ;
 int FUNC_3 (struct neighbour*,int *) ;
 struct neighbour* FUNC_4 (int *,int *,struct net_device*) ;
 int FUNC_5 (struct neighbour*) ;
 int FUNC_6 (struct net_device*,char*,int *) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_sp *VAR_1,
         char *VAR_2,
         int VAR_3)
{
 struct net_device *VAR_4;
 struct neighbour *VAR_5;
 __be32 VAR_6;
 u32 VAR_7;
 u16 VAR_8;

 FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_7);

 if (!VAR_1->router->rifs[VAR_8]) {
  FUNC_0(VAR_1->bus_info->dev, "Incorrect RIF in neighbour entry\n");
  return;
 }

 VAR_6 = FUNC_1(VAR_7);
 VAR_4 = VAR_1->router->rifs[VAR_8]->dev;
 VAR_5 = FUNC_4(&VAR_0, &VAR_6, VAR_4);
 if (!VAR_5)
  return;

 FUNC_6(VAR_4, "Updating neighbour with IP=%pI4h\n", &VAR_7);
 FUNC_3(VAR_5, ((void*)0));
 FUNC_5(VAR_5);
}
