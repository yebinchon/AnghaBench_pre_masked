
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rocker_wait {int dummy; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct rocker_wait*,int) ;
 int FUNC_2 (struct rocker_wait*) ;
 int FUNC_3 (struct rocker const*,int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct rocker *VAR_3,
          struct rocker_wait *VAR_4, u32 VAR_5,
          dma_addr_t VAR_6, const unsigned char *VAR_7,
          const unsigned char *VAR_8, size_t VAR_9)
{
 const struct pci_dev *VAR_10 = VAR_3->pdev;
 int VAR_11;

 FUNC_2(VAR_4);
 FUNC_3(VAR_3, VAR_2, VAR_5);

 if (!FUNC_1(VAR_4, VAR_1 / 10)) {
  FUNC_0(&VAR_10->dev, "no interrupt received within a timeout\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (VAR_7[VAR_11] != VAR_8[VAR_11]) {
   FUNC_0(&VAR_10->dev, "unexpected memory content %02x at byte %x\n, %02x expected",
    VAR_7[VAR_11], VAR_11, VAR_8[VAR_11]);
   return -VAR_0;
  }
 }
 return 0;
}
