
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct rocker const*,int ) ;
 int FUNC_3 (struct rocker const*,int ) ;
 int FUNC_4 (struct rocker const*,int ,int) ;
 int FUNC_5 (struct rocker const*,int ,int) ;

__attribute__((used)) static int FUNC_6(const struct rocker *VAR_3)
{
 const struct pci_dev *VAR_4 = VAR_3->pdev;
 u64 VAR_5;
 u64 VAR_6;

 VAR_6 = FUNC_1();
 VAR_6 >>= 1;
 FUNC_4(VAR_3, VAR_1, VAR_6);
 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 != VAR_6 * 2) {
  FUNC_0(&VAR_4->dev, "unexpected 32bit register value %08llx, expected %08llx\n",
   VAR_5, VAR_6 * 2);
  return -VAR_0;
 }

 VAR_6 = FUNC_1();
 VAR_6 <<= 31;
 VAR_6 |= FUNC_1();
 FUNC_5(VAR_3, VAR_2, VAR_6);
 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_5 != VAR_6 * 2) {
  FUNC_0(&VAR_4->dev, "unexpected 64bit register value %16llx, expected %16llx\n",
   VAR_5, VAR_6 * 2);
  return -VAR_0;
 }

 return 0;
}
