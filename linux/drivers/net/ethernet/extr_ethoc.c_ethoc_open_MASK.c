
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mem_end; int mem_start; int base_addr; int dev; int phydev; int name; int irq; } ;
struct ethoc {int old_link; int old_duplex; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (struct ethoc*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ethoc*) ;
 int FUNC_4 (int *) ;
 struct ethoc* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct ethoc*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct ethoc *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_11(VAR_2->irq, VAR_1, VAR_0,
   VAR_2->name, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_4(&VAR_3->napi);

 FUNC_2(VAR_3, VAR_2->mem_start);
 FUNC_3(VAR_3);

 if (FUNC_7(VAR_2)) {
  FUNC_0(&VAR_2->dev, " resuming queue\n");
  FUNC_9(VAR_2);
 } else {
  FUNC_0(&VAR_2->dev, " starting queue\n");
  FUNC_8(VAR_2);
 }

 VAR_3->old_link = -1;
 VAR_3->old_duplex = -1;

 FUNC_10(VAR_2->phydev);

 if (FUNC_6(VAR_3)) {
  FUNC_1(&VAR_2->dev, "I/O: %08lx Memory: %08lx-%08lx\n",
    VAR_2->base_addr, VAR_2->mem_start, VAR_2->mem_end);
 }

 return 0;
}
