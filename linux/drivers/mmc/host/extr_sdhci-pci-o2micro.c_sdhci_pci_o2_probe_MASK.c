
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdhci_pci_chip {TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sdhci_pci_chip*) ;
 int FUNC_1 (struct sdhci_pci_chip*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (struct sdhci_pci_chip*) ;

int FUNC_7(struct sdhci_pci_chip *VAR_14)
{
 int VAR_15;
 u8 VAR_16;
 u32 VAR_17;

 switch (VAR_14->pdev->device) {
 case 136:
 case 135:
 case 134:
 case 133:

  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 &= 0x7f;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);


  FUNC_4(VAR_14->pdev, VAR_11, 0x08);


  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_4, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x20;
  FUNC_4(VAR_14->pdev, VAR_4, VAR_16);




  VAR_15 = FUNC_2(VAR_14->pdev, VAR_2, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x01;
  FUNC_4(VAR_14->pdev, VAR_2, VAR_16);
  FUNC_4(VAR_14->pdev, VAR_2, 0x73);


  FUNC_4(VAR_14->pdev, VAR_0, 0x39);
  FUNC_4(VAR_14->pdev, VAR_1, 0x08);


  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_9, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x08;
  FUNC_4(VAR_14->pdev, VAR_9, VAR_16);


  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x80;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);
  break;
 case 131:
 case 130:
 case 132:

  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_16 &= 0x7f;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);


  if (VAR_14->pdev->device == 132) {
   VAR_15 = FUNC_3(VAR_14->pdev,
          VAR_7,
          &VAR_17);
   VAR_17 = ((VAR_17 & 0xFF000000) >> 24);


   if ((VAR_17 == 0x11) || (VAR_17 == 0x12)) {
    VAR_17 = 0x25100000;

    FUNC_1(VAR_14, VAR_17);
    VAR_15 = FUNC_3(VAR_14->pdev,
           VAR_8,
           &VAR_17);


    VAR_17 |= VAR_6;
    FUNC_5(VAR_14->pdev,
             VAR_8,
             VAR_17);


    FUNC_4(VAR_14->pdev,
            VAR_13, 0x44);

    break;
   }
  }


  FUNC_0(VAR_14);


  VAR_15 = FUNC_3(VAR_14->pdev,
         VAR_5, &VAR_17);
  if (VAR_15)
   return VAR_15;

  VAR_17 &= ~(0xFF00);
  VAR_17 |= 0x07E0C800;
  FUNC_5(VAR_14->pdev,
           VAR_5, VAR_17);

  VAR_15 = FUNC_3(VAR_14->pdev,
         VAR_4, &VAR_17);
  if (VAR_15)
   return VAR_15;
  VAR_17 |= 0x3;
  FUNC_5(VAR_14->pdev, VAR_4, VAR_17);

  VAR_15 = FUNC_3(VAR_14->pdev,
         VAR_12, &VAR_17);
  if (VAR_15)
   return VAR_15;

  VAR_17 &= ~(0x1F3F070E);
  VAR_17 |= 0x18270106;
  FUNC_5(VAR_14->pdev,
           VAR_12, VAR_17);


  VAR_15 = FUNC_3(VAR_14->pdev,
         VAR_3, &VAR_17);
  if (VAR_15)
   return VAR_15;
  VAR_17 &= ~(0xE0);
  FUNC_5(VAR_14->pdev,
           VAR_3, VAR_17);

  if (VAR_14->pdev->device == 132)
   FUNC_6(VAR_14);


  VAR_15 = FUNC_2(VAR_14->pdev,
        VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x80;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);
  break;
 case 129:
 case 128:

  VAR_15 = FUNC_2(VAR_14->pdev,
    VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_16 &= 0x7f;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);

  VAR_15 = FUNC_3(VAR_14->pdev,
         VAR_12, &VAR_17);

  if ((VAR_17 & 0xff000000) == 0x01000000) {
   VAR_17 &= 0x0000FFFF;
   VAR_17 |= 0x1F340000;

   FUNC_5(VAR_14->pdev,
            VAR_12, VAR_17);
  } else {
   VAR_17 &= 0x0000FFFF;
   VAR_17 |= 0x25100000;

   FUNC_5(VAR_14->pdev,
            VAR_12, VAR_17);

   VAR_15 = FUNC_3(VAR_14->pdev,
          VAR_8,
          &VAR_17);
   VAR_17 |= (1 << 22);
   FUNC_5(VAR_14->pdev,
            VAR_8, VAR_17);
  }


  FUNC_4(VAR_14->pdev,
    VAR_13, 0x55);

  VAR_15 = FUNC_2(VAR_14->pdev,
        VAR_10, &VAR_16);
  if (VAR_15)
   return VAR_15;
  VAR_16 |= 0x80;
  FUNC_4(VAR_14->pdev, VAR_10, VAR_16);
  break;
 }

 return 0;
}
