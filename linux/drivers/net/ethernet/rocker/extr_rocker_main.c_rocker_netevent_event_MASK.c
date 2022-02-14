
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {struct net_device* dev; int * tbl; } ;



 int VAR_0 ;
 int VAR_1 ;
 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rocker_port*,struct neighbour*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct rocker_port *VAR_5;
 struct net_device *VAR_6;
 struct neighbour *VAR_7 = VAR_4;
 int VAR_8;

 switch (VAR_3) {
 case 128:
  if (VAR_7->tbl != &VAR_1)
   return VAR_0;
  VAR_6 = VAR_7->dev;
  if (!FUNC_2(VAR_6))
   return VAR_0;
  VAR_5 = FUNC_0(VAR_6);
  VAR_8 = FUNC_3(VAR_5, VAR_7);
  if (VAR_8)
   FUNC_1(VAR_6, "failed to handle neigh update (err %d)\n",
        VAR_8);
  break;
 }

 return VAR_0;
}
