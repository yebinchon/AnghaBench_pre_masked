
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_priv_buf {unsigned int ctx; int size; int dma; int virt; } ;
struct s5p_mfc_dev {struct device** mem_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int *,int ) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct s5p_mfc_dev *VAR_2, unsigned int VAR_3,
      struct s5p_mfc_priv_buf *VAR_4)
{
 struct device *VAR_5 = VAR_2->mem_dev[VAR_3];

 FUNC_1(3, "Allocating generic buf: %zu\n", VAR_4->size);

 VAR_4->ctx = VAR_3;
 VAR_4->virt = FUNC_0(VAR_5, VAR_4->size, &VAR_4->dma, VAR_1);
 if (!VAR_4->virt)
  goto no_mem;

 FUNC_1(3, "Allocated addr %p %pad\n", VAR_4->virt, &VAR_4->dma);
 return 0;
no_mem:
 FUNC_2("Allocating generic buffer of size %zu failed\n", VAR_4->size);
 return -VAR_0;
}
