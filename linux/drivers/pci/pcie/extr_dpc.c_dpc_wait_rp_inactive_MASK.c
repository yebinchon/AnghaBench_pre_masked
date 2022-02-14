
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct dpc_dev {int cap_pos; TYPE_1__* dev; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dpc_dev *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + VAR_1;
 struct pci_dev *VAR_7 = VAR_5->dev->port;
 u16 VAR_8 = VAR_5->cap_pos, VAR_9;

 FUNC_1(VAR_7, VAR_8 + VAR_3, &VAR_9);
 while (VAR_9 & VAR_2 &&
     !FUNC_3(VAR_4, VAR_6)) {
  FUNC_0(10);
  FUNC_1(VAR_7, VAR_8 + VAR_3, &VAR_9);
 }
 if (VAR_9 & VAR_2) {
  FUNC_2(VAR_7, "root port still busy\n");
  return -VAR_0;
 }
 return 0;
}
