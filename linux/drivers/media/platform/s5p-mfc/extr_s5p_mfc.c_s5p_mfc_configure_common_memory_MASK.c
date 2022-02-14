
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {unsigned int mem_base; unsigned long mem_size; unsigned int* dma_base; struct device** mem_dev; int mem_bitmap; int mem_virt; TYPE_1__* plat_dev; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (struct device*,char*,unsigned long) ;
 int FUNC_5 (struct device*,char*,unsigned long) ;
 int FUNC_6 (struct device*,unsigned long,unsigned int*,int ) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int,int ) ;
 unsigned long FUNC_10 (scalar_t__,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (struct s5p_mfc_dev*) ;
 int FUNC_12 (struct device*,int ) ;

__attribute__((used)) static int FUNC_13(struct s5p_mfc_dev *VAR_11)
{
 struct device *VAR_12 = &VAR_11->plat_dev->dev;
 unsigned long VAR_13 = VAR_8;
 unsigned int VAR_14;

 if (FUNC_2(VAR_2) || FUNC_7(VAR_12))
  VAR_13 = VAR_9;

 if (VAR_10)
  VAR_13 = FUNC_10(VAR_10, ((void*)0));

 VAR_14 = FUNC_0(VAR_13 >> VAR_6) * sizeof(long);

 VAR_11->mem_bitmap = FUNC_9(VAR_14, VAR_4);
 if (!VAR_11->mem_bitmap)
  return -VAR_3;

 VAR_11->mem_virt = FUNC_6(VAR_12, VAR_13,
            &VAR_11->mem_base, VAR_4);
 if (!VAR_11->mem_virt) {
  FUNC_8(VAR_11->mem_bitmap);
  FUNC_4(VAR_12, "failed to preallocate %ld MiB for the firmware and context buffers\n",
   (VAR_13 / VAR_7));
  return -VAR_3;
 }
 VAR_11->mem_size = VAR_13;
 VAR_11->dma_base[VAR_0] = VAR_11->mem_base;
 VAR_11->dma_base[VAR_1] = VAR_11->mem_base;





 if (VAR_11->mem_base == (dma_addr_t)0) {
  unsigned int VAR_15 = 1 << VAR_5;

  FUNC_3(VAR_11->mem_bitmap, 0, VAR_15 >> VAR_6);
  VAR_11->dma_base[VAR_0] += VAR_15;
  VAR_11->dma_base[VAR_1] += VAR_15;
 }


 FUNC_11(VAR_11);

 VAR_11->mem_dev[VAR_0] = VAR_11->mem_dev[VAR_1] = VAR_12;
 FUNC_12(VAR_12, FUNC_1(32));

 FUNC_5(VAR_12, "preallocated %ld MiB buffer for the firmware and context buffers\n",
   (VAR_13 / VAR_7));

 return 0;
}
