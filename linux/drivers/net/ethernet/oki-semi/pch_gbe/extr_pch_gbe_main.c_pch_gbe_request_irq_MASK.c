
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int pdev; int irq; struct net_device* netdev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*,int ,int) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct pch_gbe_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->pdev, 1, 1, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->irq = FUNC_4(VAR_3->pdev, 0);

 VAR_5 = FUNC_5(VAR_3->irq, &VAR_2, VAR_0,
     VAR_4->name, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_4, "Unable to allocate interrupt Error: %d\n",
      VAR_5);
 FUNC_0(VAR_4, "have_msi : %d  return : 0x%04x\n",
     FUNC_3(VAR_3->pdev), VAR_5);
 return VAR_5;
}
