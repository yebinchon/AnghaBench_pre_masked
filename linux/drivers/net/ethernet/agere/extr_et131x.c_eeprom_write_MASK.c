
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ revision; } ;
struct et131x_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct et131x_adapter *VAR_9, u32 VAR_10, u8 VAR_11)
{
 struct pci_dev *VAR_12 = VAR_9->pdev;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 u32 VAR_17;
 u32 VAR_18 = 0;
 VAR_15 = FUNC_0(VAR_12, ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;






 if (FUNC_2(VAR_12, VAR_4,
      VAR_3 |
     VAR_2))
  return -VAR_0;


 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  if (FUNC_3(VAR_12, VAR_1, VAR_10))
   break;



  if (FUNC_2(VAR_12, VAR_5, VAR_11))
   break;







  VAR_15 = FUNC_0(VAR_12, &VAR_17);
  if (VAR_15 < 0)
   return 0;





  if ((VAR_17 & VAR_7) &&
      VAR_9->pdev->revision == 0)
   break;
  if (VAR_17 & VAR_6) {





   FUNC_4(10);
   continue;
  }

  VAR_16 = 1;
  break;
 }

 FUNC_4(10);

 while (1) {
  if (FUNC_2(VAR_12, VAR_4,
       VAR_3))
   VAR_16 = 0;




  do {
   FUNC_3(VAR_12,
            VAR_1,
            VAR_10);
   do {
    FUNC_1(VAR_12,
            VAR_5,
            &VAR_18);
   } while ((VAR_18 & 0x00010000) == 0);
  } while (VAR_18 & 0x00040000);

  if ((VAR_18 & 0xFF00) != 0xC000 || VAR_13 == 10000)
   break;
  VAR_13++;
 }
 return VAR_16 ? 0 : -VAR_0;
}
