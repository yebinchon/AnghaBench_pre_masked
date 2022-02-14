
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_bus {scalar_t__ bustype; int host_pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct ssb_bus *VAR_9, u32 VAR_10, int VAR_11)
{
 int VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 if (VAR_9->bustype != VAR_3)
  return 0;

 VAR_12 = FUNC_1(VAR_9->host_pci, VAR_4, &VAR_13);
 if (VAR_12)
  goto err_pci;
 VAR_12 = FUNC_1(VAR_9->host_pci, VAR_5, &VAR_14);
 if (VAR_12)
  goto err_pci;
 VAR_12 = FUNC_1(VAR_9->host_pci, VAR_6, &VAR_15);
 if (VAR_12)
  goto err_pci;

 VAR_15 |= VAR_10;

 if (VAR_11) {




  if (!(VAR_13 & VAR_8)) {
   if (VAR_10 & VAR_8) {

    VAR_14 |= VAR_8;
    if (VAR_10 & VAR_7)
     VAR_14 |= VAR_7;
    VAR_12 = FUNC_3(VAR_9->host_pci, VAR_5, VAR_14);
    if (VAR_12)
     goto err_pci;
    VAR_12 = FUNC_3(VAR_9->host_pci, VAR_6,
            VAR_15);
    if (VAR_12)
     goto err_pci;
    FUNC_0(1);
   }
   if (VAR_10 & VAR_7) {

    VAR_14 &= ~VAR_7;
    VAR_12 = FUNC_3(VAR_9->host_pci, VAR_5, VAR_14);
    if (VAR_12)
     goto err_pci;
    FUNC_0(5);
   }
  }

  VAR_12 = FUNC_2(VAR_9->host_pci, VAR_1, &VAR_16);
  if (VAR_12)
   goto err_pci;
  VAR_16 &= ~VAR_2;
  VAR_12 = FUNC_4(VAR_9->host_pci, VAR_1, VAR_16);
  if (VAR_12)
   goto err_pci;
 } else {
  if (VAR_10 & VAR_8) {

   VAR_14 &= ~VAR_8;
  }
  if (VAR_10 & VAR_7) {

   VAR_14 |= VAR_7;
  }
  VAR_12 = FUNC_3(VAR_9->host_pci, VAR_5, VAR_14);
  if (VAR_12)
   goto err_pci;
  VAR_12 = FUNC_3(VAR_9->host_pci, VAR_6, VAR_15);
  if (VAR_12)
   goto err_pci;
 }

out:
 return VAR_12;

err_pci:
 FUNC_5("Error: ssb_pci_xtal() could not access PCI config space!\n");
 VAR_12 = -VAR_0;
 goto out;
}
