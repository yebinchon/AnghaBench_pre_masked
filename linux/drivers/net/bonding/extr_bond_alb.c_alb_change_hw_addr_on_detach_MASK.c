
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int perm_hwaddr; TYPE_1__* dev; } ;
struct bonding {TYPE_2__* dev; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (struct bonding*,struct slave*,struct slave*) ;
 int FUNC_1 (struct slave*,struct slave*) ;
 struct slave* FUNC_2 (struct bonding*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bonding *VAR_0, struct slave *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct slave *VAR_4;

 VAR_2 = !FUNC_3(VAR_1->perm_hwaddr,
        VAR_1->dev->dev_addr);
 VAR_3 = !FUNC_3(VAR_1->perm_hwaddr,
        VAR_0->dev->dev_addr);

 if (VAR_2 && VAR_3) {
  VAR_4 = FUNC_2(VAR_0, VAR_1->perm_hwaddr);

  if (VAR_4) {
   FUNC_1(VAR_1, VAR_4);
   FUNC_0(VAR_0, VAR_1, VAR_4);
  }
 }
}
