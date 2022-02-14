
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct dpc_dev {int cap_pos; TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct dpc_dev *VAR_8 = (struct dpc_dev *)VAR_7;
 struct pci_dev *VAR_9 = VAR_8->dev->port;
 u16 VAR_10 = VAR_8->cap_pos, VAR_11;

 FUNC_0(VAR_9, VAR_10 + VAR_3, &VAR_11);

 if (!(VAR_11 & VAR_4) || VAR_11 == (u16)(~0))
  return VAR_1;

 FUNC_1(VAR_9, VAR_10 + VAR_3,
         VAR_4);
 if (VAR_11 & VAR_5)
  return VAR_2;
 return VAR_0;
}
