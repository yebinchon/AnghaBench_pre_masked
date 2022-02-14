
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int irq; } ;
struct net_device {int name; } ;
struct igc_adapter {int flags; int * q_vector; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (struct igc_adapter*) ;
 int FUNC_6 (struct igc_adapter*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct igc_adapter*) ;
 int FUNC_8 (struct igc_adapter*) ;
 int FUNC_9 (struct igc_adapter*) ;
 int FUNC_10 (struct igc_adapter*) ;
 int FUNC_11 (int ,int *,int ,int ,struct igc_adapter*) ;

__attribute__((used)) static int FUNC_12(struct igc_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 struct pci_dev *VAR_7 = VAR_5->pdev;
 int VAR_8 = 0;

 if (VAR_5->flags & VAR_1) {
  VAR_8 = FUNC_7(VAR_5);
  if (!VAR_8)
   goto request_done;

  FUNC_5(VAR_5);
  FUNC_4(VAR_5);

  FUNC_2(VAR_5);
  VAR_8 = FUNC_6(VAR_5, 0);
  if (VAR_8)
   goto request_done;
  FUNC_10(VAR_5);
  FUNC_9(VAR_5);
  FUNC_3(VAR_5);
 }

 FUNC_1(VAR_5->q_vector[0], 0);

 if (VAR_5->flags & VAR_0) {
  VAR_8 = FUNC_11(VAR_7->irq, &VAR_4, 0,
      VAR_6->name, VAR_5);
  if (!VAR_8)
   goto request_done;


  FUNC_8(VAR_5);
  VAR_5->flags &= ~VAR_0;
 }

 VAR_8 = FUNC_11(VAR_7->irq, &VAR_3, VAR_2,
     VAR_6->name, VAR_5);

 if (VAR_8)
  FUNC_0(&VAR_7->dev, "Error %d getting interrupt\n",
   VAR_8);

request_done:
 return VAR_8;
}
