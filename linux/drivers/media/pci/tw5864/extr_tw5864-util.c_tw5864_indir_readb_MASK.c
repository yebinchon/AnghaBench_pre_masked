
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tw5864_dev {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

u8 FUNC_4(struct tw5864_dev *VAR_3, u16 VAR_4)
{
 int VAR_5 = 30000;

 while (FUNC_2(VAR_1) & FUNC_0(31) && --VAR_5)
  ;
 if (!VAR_5)
  FUNC_1(&VAR_3->pci->dev,
   "tw_indir_readl() retries exhausted before reading\n");

 FUNC_3(VAR_1, VAR_4 << 2 | VAR_0);

 VAR_5 = 30000;
 while (FUNC_2(VAR_1) & FUNC_0(31) && --VAR_5)
  ;
 if (!VAR_5)
  FUNC_1(&VAR_3->pci->dev,
   "tw_indir_readl() retries exhausted at reading\n");

 return FUNC_2(VAR_2);
}
