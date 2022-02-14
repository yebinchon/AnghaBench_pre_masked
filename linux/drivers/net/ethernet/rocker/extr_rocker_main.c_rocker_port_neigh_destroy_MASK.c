
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dev; } ;
struct net_device {int dummy; } ;
struct neighbour {int dev; } ;


 struct rocker_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rocker_port*,struct neighbour*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
          struct neighbour *VAR_1)
{
 struct rocker_port *VAR_2 = FUNC_0(VAR_1->dev);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_2->dev, "failed to handle neigh destroy (err %d)\n",
       VAR_3);
}
