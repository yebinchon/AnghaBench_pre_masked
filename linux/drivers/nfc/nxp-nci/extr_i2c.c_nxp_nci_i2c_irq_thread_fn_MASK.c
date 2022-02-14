
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nxp_nci_info {int mode; int info_lock; } ;
struct nxp_nci_i2c_phy {int hard_fault; int ndev; struct i2c_client* i2c_dev; } ;
struct i2c_client {int irq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nxp_nci_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 int FUNC_7 (struct nxp_nci_i2c_phy*,struct sk_buff**) ;
 int FUNC_8 (struct nxp_nci_i2c_phy*,struct sk_buff**) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct nxp_nci_i2c_phy *VAR_5 = VAR_4;
 struct i2c_client *VAR_6;
 struct nxp_nci_info *VAR_7;

 struct sk_buff *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!VAR_5 || !VAR_5->ndev)
  goto exit_irq_none;

 VAR_6 = VAR_5->i2c_dev;

 if (!VAR_6 || VAR_3 != VAR_6->irq)
  goto exit_irq_none;

 VAR_7 = FUNC_3(VAR_5->ndev);

 if (!VAR_7)
  goto exit_irq_none;

 FUNC_1(&VAR_7->info_lock);

 if (VAR_5->hard_fault != 0)
  goto exit_irq_handled;

 switch (VAR_7->mode) {
 case 128:
  VAR_9 = FUNC_8(VAR_5, &VAR_8);
  break;
 case 129:
  VAR_9 = FUNC_7(VAR_5, &VAR_8);
  break;
 case 130:
  VAR_9 = -VAR_0;
  break;
 }

 if (VAR_9 == -VAR_0) {
  VAR_5->hard_fault = VAR_9;
  VAR_8 = ((void*)0);
 } else if (VAR_9 < 0) {
  FUNC_5(&VAR_6->dev, "Read failed with error %d\n", VAR_9);
  goto exit_irq_handled;
 }

 switch (VAR_7->mode) {
 case 128:
  FUNC_4(VAR_5->ndev, VAR_8);
  break;
 case 129:
  FUNC_6(VAR_5->ndev, VAR_8);
  break;
 case 130:
  break;
 }

exit_irq_handled:
 FUNC_2(&VAR_7->info_lock);
 return VAR_1;
exit_irq_none:
 FUNC_0(1);
 return VAR_2;
}
