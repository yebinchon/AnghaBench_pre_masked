
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dma; } ;
struct s5p_mfc_dev {void** mem_dev; scalar_t__* dma_base; TYPE_2__ fw_buf; TYPE_1__* plat_dev; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,unsigned long,scalar_t__*,int ) ;
 int FUNC_3 (void*,unsigned long,void*,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct s5p_mfc_dev*) ;
 void* FUNC_6 (struct device*,char*,size_t) ;
 int FUNC_7 (struct s5p_mfc_dev*) ;
 int FUNC_8 (void*,int ) ;

__attribute__((used)) static int FUNC_9(struct s5p_mfc_dev *VAR_6)
{
 struct device *VAR_7 = &VAR_6->plat_dev->dev;
 void *VAR_8;
 dma_addr_t VAR_9;
 unsigned long VAR_10 = 1 << VAR_5;
 int VAR_11;





 VAR_6->mem_dev[VAR_0] = FUNC_6(VAR_7, "left",
          VAR_0);
 if (!VAR_6->mem_dev[VAR_0])
  return -VAR_2;
 VAR_6->mem_dev[VAR_1] = FUNC_6(VAR_7, "right",
          VAR_1);
 if (!VAR_6->mem_dev[VAR_1]) {
  FUNC_1(VAR_6->mem_dev[VAR_0]);
  return -VAR_2;
 }


 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11) {
  FUNC_1(VAR_6->mem_dev[VAR_1]);
  FUNC_1(VAR_6->mem_dev[VAR_0]);
  return VAR_11;
 }

 VAR_6->dma_base[VAR_0] = VAR_6->fw_buf.dma;

 VAR_8 = FUNC_2(VAR_6->mem_dev[VAR_1],
           VAR_10, &VAR_9, VAR_4);
 if (!VAR_8) {
  FUNC_4("Allocating bank2 base failed\n");
  FUNC_7(VAR_6);
  FUNC_1(VAR_6->mem_dev[VAR_1]);
  FUNC_1(VAR_6->mem_dev[VAR_0]);
  return -VAR_3;
 }





 VAR_6->dma_base[VAR_1] = VAR_9 - VAR_10;

 FUNC_3(VAR_6->mem_dev[VAR_1], VAR_10, VAR_8,
     VAR_9);

 FUNC_8(VAR_6->mem_dev[VAR_0],
     FUNC_0(32));
 FUNC_8(VAR_6->mem_dev[VAR_1],
     FUNC_0(32));

 return 0;
}
