
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_endpoint_test {int mutex; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct file {int private_data; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_endpoint_test*,int) ;
 int FUNC_4 (struct pci_endpoint_test*,unsigned long) ;
 int FUNC_5 (struct pci_endpoint_test*) ;
 int FUNC_6 (struct pci_endpoint_test*,unsigned long,int) ;
 int FUNC_7 (struct pci_endpoint_test*,unsigned long) ;
 int FUNC_8 (struct pci_endpoint_test*,unsigned long) ;
 int FUNC_9 (struct pci_endpoint_test*,unsigned long) ;
 struct pci_endpoint_test* FUNC_10 (int ) ;

__attribute__((used)) static long FUNC_11(struct file *VAR_3, unsigned int VAR_4,
        unsigned long VAR_5)
{
 int VAR_6 = -VAR_1;
 enum pci_barno VAR_7;
 struct pci_endpoint_test *VAR_8 = FUNC_10(VAR_3->private_data);
 struct pci_dev *VAR_9 = VAR_8->pdev;

 FUNC_1(&VAR_8->mutex);
 switch (VAR_4) {
 case 136:
  VAR_7 = VAR_5;
  if (VAR_7 < 0 || VAR_7 > 5)
   goto ret;
  if (FUNC_0(VAR_9) && VAR_7 == VAR_0)
   goto ret;
  VAR_6 = FUNC_3(VAR_8, VAR_7);
  break;
 case 133:
  VAR_6 = FUNC_5(VAR_8);
  break;
 case 132:
 case 131:
  VAR_6 = FUNC_6(VAR_8, VAR_5, VAR_4 == 131);
  break;
 case 128:
  VAR_6 = FUNC_9(VAR_8, VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_7(VAR_8, VAR_5);
  break;
 case 135:
  VAR_6 = FUNC_4(VAR_8, VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_8(VAR_8, VAR_5);
  break;
 case 134:
  VAR_6 = VAR_2;
  break;
 }

ret:
 FUNC_2(&VAR_8->mutex);
 return VAR_6;
}
