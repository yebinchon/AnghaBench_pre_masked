
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_params {int width; unsigned short speed; int variant; } ;
struct adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_8, struct pci_params *VAR_9)
{
 static unsigned short VAR_10[] = { 33, 66, 100, 133 };
 u32 VAR_11;

 if (FUNC_2(VAR_8->pdev)) {
  u16 VAR_12;

  VAR_9->variant = VAR_4;
  FUNC_3(VAR_8->pdev, VAR_2, &VAR_12);
  VAR_9->width = (VAR_12 >> 4) & 0x3f;
  return;
 }

 VAR_11 = FUNC_4(VAR_8, VAR_0);
 VAR_9->speed = VAR_10[FUNC_1(VAR_11)];
 VAR_9->width = (VAR_11 & VAR_1) ? 64 : 32;
 VAR_11 = FUNC_0(VAR_11);
 if (VAR_11 == 0)
  VAR_9->variant = VAR_3;
 else if (VAR_11 < 4)
  VAR_9->variant = VAR_7;
 else if (VAR_11 < 8)
  VAR_9->variant = VAR_6;
 else
  VAR_9->variant = VAR_5;
}
