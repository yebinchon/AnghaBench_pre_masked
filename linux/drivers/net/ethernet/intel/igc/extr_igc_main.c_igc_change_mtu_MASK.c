
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int mtu; } ;
struct igc_adapter {int max_frame_size; int state; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 struct igc_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 + VAR_2 + VAR_0 + VAR_3;
 struct igc_adapter *VAR_8 = FUNC_5(VAR_5);
 struct pci_dev *VAR_9 = VAR_8->pdev;


 if (VAR_7 < (VAR_1 + VAR_0))
  VAR_7 = VAR_1 + VAR_0;

 while (FUNC_7(VAR_4, &VAR_8->state))
  FUNC_8(1000, 2000);


 VAR_8->max_frame_size = VAR_7;

 if (FUNC_6(VAR_5))
  FUNC_2(VAR_8);

 FUNC_1(&VAR_9->dev, "changing MTU from %d to %d\n",
   VAR_5->mtu, VAR_6);
 VAR_5->mtu = VAR_6;

 if (FUNC_6(VAR_5))
  FUNC_4(VAR_8);
 else
  FUNC_3(VAR_8);

 FUNC_0(VAR_4, &VAR_8->state);

 return 0;
}
