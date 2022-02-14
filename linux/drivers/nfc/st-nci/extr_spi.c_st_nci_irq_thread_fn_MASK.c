
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_nci_spi_phy {TYPE_1__* ndlc; struct spi_device* spi_dev; } ;
struct spi_device {int irq; int dev; } ;
struct sk_buff {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int powered; scalar_t__ hard_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (struct st_nci_spi_phy*) ;
 int FUNC_4 (struct st_nci_spi_phy*,struct sk_buff**) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct st_nci_spi_phy *VAR_7 = VAR_6;
 struct spi_device *VAR_8;
 struct sk_buff *VAR_9 = ((void*)0);
 int VAR_10;

 if (!VAR_7 || !VAR_7->ndlc || VAR_5 != VAR_7->spi_dev->irq) {
  FUNC_0(1);
  return VAR_4;
 }

 VAR_8 = VAR_7->spi_dev;
 FUNC_1(&VAR_8->dev, "IRQ\n");

 if (VAR_7->ndlc->hard_fault)
  return VAR_3;

 if (!VAR_7->ndlc->powered) {
  FUNC_3(VAR_7);
  return VAR_3;
 }

 VAR_10 = FUNC_4(VAR_7, &VAR_9);
 if (VAR_10 == -VAR_2 || VAR_10 == -VAR_1 || VAR_10 == -VAR_0)
  return VAR_3;

 FUNC_2(VAR_7->ndlc, VAR_9);

 return VAR_3;
}
