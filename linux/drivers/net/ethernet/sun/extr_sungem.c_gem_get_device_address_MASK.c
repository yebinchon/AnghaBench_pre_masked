
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; int name; } ;
struct gem {struct net_device* dev; int pdev; int of_node; } ;
struct TYPE_2__ {unsigned char* id_ethaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,unsigned char const*,int ) ;
 unsigned char* FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct gem *VAR_2)
{
 FUNC_0(VAR_2->pdev, VAR_2->dev->dev_addr);

 return 0;
}
