
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; struct rocker_desc_info* desc_info; struct rocker_desc* desc; } ;
struct rocker_desc_info {char* data; size_t data_size; } ;
struct rocker_desc {size_t buf_size; int buf_addr; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rocker_desc_info const*,int ) ;
 int FUNC_1 (struct rocker_desc_info*,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,char*,size_t,int) ;
 int FUNC_6 (struct pci_dev*,int ,size_t,int) ;

__attribute__((used)) static int FUNC_7(const struct rocker *VAR_5,
          const struct rocker_dma_ring_info *VAR_6,
          int VAR_7, size_t VAR_8)
{
 struct pci_dev *VAR_9 = VAR_5->pdev;
 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_6->size; VAR_10++) {
  struct rocker_desc_info *VAR_12 = &VAR_6->desc_info[VAR_10];
  struct rocker_desc *VAR_13 = &VAR_6->desc[VAR_10];
  dma_addr_t VAR_14;
  char *VAR_15;

  VAR_15 = FUNC_3(VAR_8, VAR_3 | VAR_2);
  if (!VAR_15) {
   VAR_11 = -VAR_1;
   goto rollback;
  }

  VAR_14 = FUNC_5(VAR_9, VAR_15, VAR_8, VAR_7);
  if (FUNC_4(VAR_9, VAR_14)) {
   FUNC_2(VAR_15);
   VAR_11 = -VAR_0;
   goto rollback;
  }

  VAR_12->data = VAR_15;
  VAR_12->data_size = VAR_8;
  FUNC_1(VAR_12, VAR_4, VAR_14);

  VAR_13->buf_addr = VAR_14;
  VAR_13->buf_size = VAR_8;
 }
 return 0;

rollback:
 for (VAR_10--; VAR_10 >= 0; VAR_10--) {
  const struct rocker_desc_info *VAR_16 = &VAR_6->desc_info[VAR_10];

  FUNC_6(VAR_9, FUNC_0(VAR_16, VAR_4),
     VAR_16->data_size, VAR_7);
  FUNC_2(VAR_16->data);
 }
 return VAR_11;
}
