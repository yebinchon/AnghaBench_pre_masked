
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pci_chip {int pdev; } ;


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
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sdhci_pci_chip *VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_11->pdev, VAR_3, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~((1 << 12) | (1 << 13) | (1 << 14));
 FUNC_1(VAR_11->pdev, VAR_3, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_7, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~((1 << 19) | (1 << 11));
 VAR_12 |= (1 << 10);
 FUNC_1(VAR_11->pdev, VAR_7, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_8, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 |= (1 << 4);
 FUNC_1(VAR_11->pdev, VAR_8, VAR_12);


 FUNC_1(VAR_11->pdev, VAR_2, 0x00002492);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_5, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(3 << 12);
 FUNC_1(VAR_11->pdev, VAR_5, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_1, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(0x01FE);
 VAR_12 |= 0x00CC;
 FUNC_1(VAR_11->pdev, VAR_1, VAR_12);

 VAR_13 = FUNC_0(VAR_11->pdev,
        VAR_9, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(0x000000FF);
 VAR_12 |= 0x00000066;
 FUNC_1(VAR_11->pdev, VAR_9, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev,
        VAR_10, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(0x000000FC);
 VAR_12 |= 0x00000084;
 FUNC_1(VAR_11->pdev, VAR_10, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_4, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~((1 << 21) | (1 << 30));

 FUNC_1(VAR_11->pdev, VAR_4, VAR_12);


 VAR_13 = FUNC_0(VAR_11->pdev, VAR_0, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(0xf0000000);
 VAR_12 |= 0x30000000;
 FUNC_1(VAR_11->pdev, VAR_0, VAR_12);

 VAR_13 = FUNC_0(VAR_11->pdev,
        VAR_6, &VAR_12);
 if (VAR_13)
  return;
 VAR_12 &= ~(0x000f0000);
 VAR_12 |= 0x00080000;
 FUNC_1(VAR_11->pdev, VAR_6, VAR_12);
}
