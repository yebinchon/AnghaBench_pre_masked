
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_hdr {int imageid; } ;
struct flash_file_hdr_g3 {int num_imgs; } ;
struct firmware {scalar_t__ data; } ;
struct device {int dummy; } ;
struct be_dma_mem {int size; int dma; int va; } ;
struct be_cmd_write_flashrom {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct be_adapter*,struct flash_file_hdr_g3*) ;
 int FUNC_2 (struct be_adapter*,struct firmware const*,struct be_dma_mem*,int) ;
 int FUNC_3 (struct be_adapter*,struct firmware const*,struct be_dma_mem*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int,int *,int ) ;
 int FUNC_7 (struct device*,int,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_3, const struct firmware *VAR_4)
{
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct flash_file_hdr_g3 *VAR_6;
 struct image_hdr *VAR_7;
 int VAR_8 = 0, VAR_9, VAR_10;
 struct be_dma_mem VAR_11;

 VAR_6 = (struct flash_file_hdr_g3 *)VAR_4->data;
 if (!FUNC_1(VAR_3, VAR_6)) {
  FUNC_4(VAR_5, "Flash image is not compatible with adapter\n");
  return -VAR_0;
 }

 VAR_11.size = sizeof(struct be_cmd_write_flashrom);
 VAR_11.va = FUNC_6(VAR_5, VAR_11.size, &VAR_11.dma,
       VAR_2);
 if (!VAR_11.va)
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_6->num_imgs);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7 = (struct image_hdr *)(VAR_4->data +
    (sizeof(struct flash_file_hdr_g3) +
     VAR_9 * sizeof(struct image_hdr)));
  if (!FUNC_0(VAR_3) &&
      FUNC_8(VAR_7->imageid) != 1)
   continue;

  if (FUNC_9(VAR_3))
   VAR_8 = FUNC_3(VAR_3, VAR_4, &VAR_11,
        VAR_10);
  else
   VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_11,
           VAR_10);
 }

 FUNC_7(VAR_5, VAR_11.size, VAR_11.va, VAR_11.dma);
 if (!VAR_8)
  FUNC_5(VAR_5, "Firmware flashed successfully\n");

 return VAR_8;
}
