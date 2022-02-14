
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_func {int busno; int device; int function; int bus; int ** mem; int ** pfmem; int ** io; struct pci_func* next; int * irq; int * devices; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct pci_func*,int) ;
 int FUNC_2 (struct pci_func**,int) ;
 int FUNC_3 (struct pci_func*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__* VAR_12 ;
 int FUNC_6 (int *) ;
 struct pci_func* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*,unsigned int,int ,int*) ;
 int FUNC_9 (TYPE_1__*,unsigned int,int ,int*) ;
 int FUNC_10 (TYPE_1__*,unsigned int,int ,scalar_t__*) ;

int FUNC_11(struct pci_func *VAR_13, u8 VAR_14)
{
 u16 VAR_15;
 u32 VAR_16;
 u8 VAR_17;
 u8 VAR_18, VAR_19, VAR_20;
 u8 VAR_21;
 struct pci_func *VAR_22;
 struct pci_func *VAR_23, *VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;
 u8 VAR_29;
 u8 VAR_30 = 0x00;

 FUNC_4("inside configure_card, func->busno = %x\n", VAR_13->busno);

 VAR_19 = VAR_13->device;
 VAR_23 = VAR_13;







 for (VAR_21 = 0x00; VAR_21 < 0x08; VAR_21++) {
  unsigned int VAR_31 = FUNC_0(VAR_19, VAR_21);
  VAR_12->number = VAR_23->busno;

  VAR_23->function = VAR_21;

  FUNC_4("inside the loop, cur_func->busno = %x, cur_func->device = %x, cur_func->function = %x\n",
   VAR_23->busno, VAR_23->device, VAR_23->function);

  FUNC_10(VAR_12, VAR_31, VAR_10, &VAR_15);

  FUNC_4("vendor_id is %x\n", VAR_15);
  if (VAR_15 != VAR_11) {

   FUNC_4("found valid device, vendor_id = %x\n", VAR_15);

   ++VAR_30;






   FUNC_8(VAR_12, VAR_31, VAR_8, &VAR_18);
   FUNC_9(VAR_12, VAR_31, VAR_7, &VAR_16);

   VAR_17 = VAR_16 >> 24;
   FUNC_4("hrd_type = %x, class = %x, class_code %x\n", VAR_18, VAR_16, VAR_17);
   VAR_16 >>= 8;
   if (VAR_16 == VAR_6) {
    FUNC_5("The device %x is VGA compatible and as is not supported for hot plugging. "
         "Please choose another device.\n", VAR_23->device);
    return -VAR_0;
   } else if (VAR_16 == VAR_5) {
    FUNC_5("The device %x is not supported for hot plugging. Please choose another device.\n",
         VAR_23->device);
    return -VAR_0;
   }
   switch (VAR_18) {
    case 128:
     FUNC_4("single device case.... vendor id = %x, hdr_type = %x, class = %x\n", VAR_15, VAR_18, VAR_16);
     FUNC_1(VAR_23, VAR_17);
     VAR_25 = FUNC_3(VAR_23);
     if (VAR_25 < 0) {

      FUNC_5("was not able to configure devfunc %x on bus %x.\n",
           VAR_23->device, VAR_23->busno);
      VAR_28 = 6;
      goto error;
     }
     VAR_23->next = ((void*)0);
     VAR_21 = 0x8;
     break;
    case 129:
     FUNC_1(VAR_23, VAR_17);
     VAR_25 = FUNC_3(VAR_23);
     if (VAR_25 < 0) {

      FUNC_5("was not able to configure devfunc %x on bus %x...bailing out\n",
           VAR_23->device, VAR_23->busno);
      VAR_28 = 6;
      goto error;
     }
     VAR_22 = FUNC_7(sizeof(*VAR_22), VAR_3);
     if (!VAR_22)
      return -VAR_1;

     VAR_22->busno = VAR_23->busno;
     VAR_22->device = VAR_19;
     VAR_23->next = VAR_22;
     VAR_23 = VAR_22;
     for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
      VAR_22->irq[VAR_27] = VAR_23->irq[VAR_27];
     break;
    case 130:
     VAR_16 >>= 8;
     if (VAR_16 != VAR_4) {
      FUNC_5("This %x is not PCI-to-PCI bridge, and as is not supported for hot-plugging.  Please insert another card.\n",
           VAR_23->device);
      return -VAR_0;
     }
     FUNC_1(VAR_23, VAR_17);
     VAR_25 = FUNC_2(&VAR_23, VAR_14);
     if (VAR_25 == -VAR_0) {
      FUNC_5("You chose to insert Single Bridge, or nested bridges, this is not supported...\n");
      FUNC_5("Bus %x, devfunc %x\n", VAR_23->busno, VAR_23->device);
      return VAR_25;
     }
     if (VAR_25) {

      FUNC_5("was not able to hot-add PPB properly.\n");
      VAR_13->bus = 1;
      VAR_28 = 2;
      goto error;
     }

     FUNC_8(VAR_12, VAR_31, VAR_9, &VAR_20);
     VAR_29 = 0;
     for (VAR_26 = 0; VAR_26 < 32; VAR_26++) {
      if (VAR_13->devices[VAR_26]) {
       VAR_22 = FUNC_7(sizeof(*VAR_22), VAR_3);
       if (!VAR_22)
        return -VAR_1;

       VAR_22->busno = VAR_20;
       VAR_22->device = (u8) VAR_26;
       for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
        VAR_22->irq[VAR_27] = VAR_23->irq[VAR_27];

       if (VAR_29) {
        for (VAR_24 = VAR_23; VAR_24->next; VAR_24 = VAR_24->next) ;
        VAR_24->next = VAR_22;
       } else
        VAR_23->next = VAR_22;

       VAR_25 = FUNC_11(VAR_22, VAR_14);

       if (VAR_25) {

        VAR_13->bus = 1;
        VAR_28 = 2;
        goto error;
       }
       VAR_29 = 1;
      }
     }

     VAR_22 = FUNC_7(sizeof(*VAR_22), VAR_3);
     if (!VAR_22)
      return -VAR_1;

     VAR_22->busno = VAR_23->busno;
     VAR_22->device = VAR_19;
     for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
      VAR_22->irq[VAR_27] = VAR_23->irq[VAR_27];
     for (VAR_24 = VAR_23; VAR_24->next; VAR_24 = VAR_24->next);
     VAR_24->next = VAR_22;
     VAR_23 = VAR_22;
     break;
    case 131:
     VAR_16 >>= 8;
     FUNC_4("class now is %x\n", VAR_16);
     if (VAR_16 != VAR_4) {
      FUNC_5("This %x is not PCI-to-PCI bridge, and as is not supported for hot-plugging.  Please insert another card.\n",
           VAR_23->device);
      return -VAR_0;
     }

     FUNC_1(VAR_23, VAR_17);

     FUNC_4("cur_func->busno b4 configure_bridge is %x\n", VAR_23->busno);
     VAR_25 = FUNC_2(&VAR_23, VAR_14);
     if (VAR_25 == -VAR_0) {
      FUNC_5("You chose to insert Single Bridge, or nested bridges, this is not supported...\n");
      FUNC_5("Bus %x, devfunc %x\n", VAR_23->busno, VAR_23->device);
      return VAR_25;
     }
     if (VAR_25) {

      VAR_13->bus = 1;
      FUNC_5("was not able to hot-add PPB properly.\n");
      VAR_28 = 2;
      goto error;
     }
     FUNC_4("cur_func->busno = %x, device = %x, function = %x\n",
      VAR_23->busno, VAR_19, VAR_21);
     FUNC_8(VAR_12, VAR_31, VAR_9, &VAR_20);
     FUNC_4("after configuring bridge..., sec_number = %x\n", VAR_20);
     VAR_29 = 0;
     for (VAR_26 = 0; VAR_26 < 32; VAR_26++) {
      if (VAR_13->devices[VAR_26]) {
       FUNC_4("inside for loop, device is %x\n", VAR_26);
       VAR_22 = FUNC_7(sizeof(*VAR_22), VAR_3);
       if (!VAR_22)
        return -VAR_1;

       VAR_22->busno = VAR_20;
       VAR_22->device = (u8) VAR_26;
       for (VAR_27 = 0; VAR_27 < 4; VAR_27++)
        VAR_22->irq[VAR_27] = VAR_23->irq[VAR_27];

       if (VAR_29) {
        for (VAR_24 = VAR_23; VAR_24->next; VAR_24 = VAR_24->next);
        VAR_24->next = VAR_22;
       } else
        VAR_23->next = VAR_22;

       VAR_25 = FUNC_11(VAR_22, VAR_14);


       if (VAR_25) {

        VAR_13->bus = 1;
        VAR_28 = 2;
        goto error;
       }
       VAR_29 = 1;
      }
     }

     VAR_21 = 0x8;
     break;
    default:
     FUNC_5("MAJOR PROBLEM!!!!, header type not supported? %x\n", VAR_18);
     return -VAR_2;
     break;
   }
  }
 }

 if (!VAR_30) {
  FUNC_5("Cannot find any valid devices on the card.  Or unable to read from card.\n");
  return -VAR_0;
 }

 return 0;

error:
 for (VAR_26 = 0; VAR_26 < VAR_28; VAR_26++) {
  if (VAR_23->io[VAR_26]) {
   FUNC_6(VAR_23->io[VAR_26]);
   VAR_23->io[VAR_26] = ((void*)0);
  } else if (VAR_23->pfmem[VAR_26]) {
   FUNC_6(VAR_23->pfmem[VAR_26]);
   VAR_23->pfmem[VAR_26] = ((void*)0);
  } else if (VAR_23->mem[VAR_26]) {
   FUNC_6(VAR_23->mem[VAR_26]);
   VAR_23->mem[VAR_26] = ((void*)0);
  }
 }
 return VAR_25;
}
