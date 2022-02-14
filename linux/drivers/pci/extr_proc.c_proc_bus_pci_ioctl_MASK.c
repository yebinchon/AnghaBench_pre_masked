
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_filp_private {int write_combine; int mmap_state; } ;
struct pci_dev {int bus; } ;
struct file {struct pci_filp_private* private_data; } ;


 long VAR_0 ;
 int VAR_1 ;




 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_4, unsigned int VAR_5,
          unsigned long VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_0(FUNC_3(VAR_4));



 int VAR_8 = 0;

 VAR_8 = FUNC_5(VAR_1);
 if (VAR_8)
  return VAR_8;

 switch (VAR_5) {
 case 131:
  VAR_8 = FUNC_4(VAR_7->bus);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
