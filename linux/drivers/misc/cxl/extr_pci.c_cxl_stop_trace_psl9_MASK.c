
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxl*,int ) ;
 int FUNC_1 (struct cxl*,int ,int) ;
 int FUNC_2 (int *,char*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cxl *VAR_4)
{
 int VAR_5;
 u64 VAR_6, VAR_7;
 struct pci_dev *VAR_8 = FUNC_3(VAR_4->dev.parent);


 for (VAR_5 = 0; VAR_5 <= VAR_2; ++VAR_5) {
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  VAR_7 = (0x3ULL << (62 - VAR_5 * 2));
  VAR_6 = (VAR_6 & VAR_7) >> (62 - VAR_5 * 2);
  FUNC_2(&VAR_8->dev, "cxl: Traceid-%d trace_state=0x%0llX\n",
   VAR_5, VAR_6);


  if (VAR_6 != VAR_3)
   FUNC_1(VAR_4, VAR_1,
         0x8400000000000000ULL | VAR_5);
 }
}
