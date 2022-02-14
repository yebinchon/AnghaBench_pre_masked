
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_pci_slot {struct sdhci_pci_chip* chip; } ;
struct sdhci_pci_chip {int pdev; } ;
struct sdhci_host {int mmc; } ;
struct o2_host {size_t dll_adjust_count; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdhci_pci_chip*,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,size_t) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct sdhci_host*) ;
 struct o2_host* FUNC_10 (struct sdhci_pci_slot*) ;
 struct sdhci_pci_slot* FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct sdhci_host*,int ) ;
 int FUNC_13 (struct sdhci_host*,int,int ) ;
 int FUNC_14 (struct sdhci_host*,int ,int ) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int FUNC_16(struct sdhci_host *VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12 = 0;
 u32 VAR_13 = 0;
 struct sdhci_pci_slot *VAR_14 = FUNC_11(VAR_10);
 struct sdhci_pci_chip *VAR_15 = VAR_14->chip;
 struct o2_host *VAR_16 = FUNC_10(VAR_14);


 FUNC_2(VAR_15->pdev,
   VAR_5, &VAR_12);
 VAR_12 &= 0x7f;
 FUNC_4(VAR_15->pdev, VAR_5, VAR_12);
 while (VAR_16->dll_adjust_count < VAR_0 && !VAR_11) {

  FUNC_13(VAR_10, 0, VAR_7);


  VAR_13 = FUNC_12(VAR_10, VAR_1);
  VAR_13 |= VAR_2;
  FUNC_14(VAR_10, VAR_13, VAR_1);

  FUNC_3(VAR_15->pdev,
         VAR_4,
         &VAR_13);

  VAR_13 |= VAR_3;
  FUNC_5(VAR_15->pdev, VAR_4, VAR_13);
  FUNC_1(VAR_15, VAR_9[VAR_16->dll_adjust_count]);


  VAR_12 = VAR_8;
  FUNC_13(VAR_10, VAR_12, VAR_7);

  if (FUNC_8(VAR_10->mmc)) {




   FUNC_15(5000, 6000);
   if (FUNC_9(VAR_10)) {
    VAR_12 |= VAR_6;
    FUNC_13(VAR_10, VAR_12,
     VAR_7);
    VAR_11 = 1;
   } else {
    FUNC_7("%s: DLL unlocked when dll_adjust_count is %d.\n",
     FUNC_0(VAR_10->mmc),
     VAR_16->dll_adjust_count);
   }
  } else {
   FUNC_6("%s: card present detect failed.\n",
    FUNC_0(VAR_10->mmc));
   break;
  }

  VAR_16->dll_adjust_count++;
 }
 if (!VAR_11 && VAR_16->dll_adjust_count == VAR_0)
  FUNC_6("%s: DLL adjust over max times\n",
  FUNC_0(VAR_10->mmc));

 FUNC_2(VAR_15->pdev,
       VAR_5, &VAR_12);
 VAR_12 |= 0x80;
 FUNC_4(VAR_15->pdev, VAR_5, VAR_12);
 return VAR_11;
}
