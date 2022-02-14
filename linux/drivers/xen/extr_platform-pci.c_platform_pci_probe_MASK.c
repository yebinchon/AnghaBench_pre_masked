
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int) ;
 int FUNC_11 (struct pci_dev*,int,int ) ;
 long FUNC_12 (struct pci_dev*,int) ;
 long FUNC_13 (struct pci_dev*,int) ;
 long VAR_5 ;
 long VAR_6 ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 () ;
 int VAR_7 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_8,
         const struct pci_device_id *VAR_9)
{
 int VAR_10, VAR_11;
 long VAR_12;
 long VAR_13, VAR_14;
 unsigned int VAR_15;
 unsigned long VAR_16;

 if (!FUNC_15())
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_12 = FUNC_13(VAR_8, 0);

 VAR_13 = FUNC_13(VAR_8, 1);
 VAR_14 = FUNC_12(VAR_8, 1);

 if (VAR_13 == 0 || VAR_12 == 0) {
  FUNC_1(&VAR_8->dev, "no resources found\n");
  VAR_11 = -VAR_2;
  goto pci_out;
 }

 VAR_11 = FUNC_11(VAR_8, 1, VAR_0);
 if (VAR_11 < 0)
  goto pci_out;

 VAR_11 = FUNC_11(VAR_8, 0, VAR_0);
 if (VAR_11 < 0)
  goto mem_out;

 VAR_5 = VAR_13;
 VAR_6 = VAR_14;
 if (!VAR_7) {
  VAR_11 = FUNC_14(VAR_8);
  if (VAR_11) {
   FUNC_2(&VAR_8->dev, "request_irq failed err=%d\n", VAR_11);
   goto out;
  }
  VAR_4 = FUNC_3(VAR_8);
  VAR_11 = FUNC_16(VAR_4);
  if (VAR_11) {
   FUNC_2(&VAR_8->dev, "Unable to set the evtchn callback "
      "err=%d\n", VAR_11);
   goto out;
  }
 }

 VAR_15 = FUNC_6();
 VAR_16 = FUNC_0(VAR_3 * VAR_15);
 VAR_11 = FUNC_7(VAR_16);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_5();
 if (VAR_11)
  goto grant_out;
 FUNC_17(((void*)0));
 return 0;
grant_out:
 FUNC_4();
out:
 FUNC_10(VAR_8, 0);
mem_out:
 FUNC_10(VAR_8, 1);
pci_out:
 FUNC_8(VAR_8);
 return VAR_11;
}
