
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_2__ {struct device* parent; } ;
struct tegra_vde {TYPE_1__ miscdev; } ;
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {size_t size; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_buf*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct dma_buf* FUNC_3 (int) ;
 int FUNC_4 (struct dma_buf*) ;
 int FUNC_5 (struct tegra_vde*,struct dma_buf*,int,struct dma_buf_attachment**,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct tegra_vde *VAR_1,
       int VAR_2,
       unsigned long VAR_3,
       size_t VAR_4,
       size_t VAR_5,
       struct dma_buf_attachment **VAR_6,
       dma_addr_t *VAR_7,
       size_t *VAR_8,
       enum dma_data_direction VAR_9)
{
 struct device *VAR_10 = VAR_1->miscdev.parent;
 struct dma_buf *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_10, "Invalid dmabuf FD\n");
  return FUNC_1(VAR_11);
 }

 if (VAR_11->size & (VAR_5 - 1)) {
  FUNC_2(VAR_10, "Unaligned dmabuf 0x%zX, should be aligned to 0x%zX\n",
   VAR_11->size, VAR_5);
  return -VAR_0;
 }

 if ((u64)VAR_3 + VAR_4 > VAR_11->size) {
  FUNC_2(VAR_10, "Too small dmabuf size %zu @0x%lX, should be at least %zu\n",
   VAR_11->size, VAR_3, VAR_4);
  return -VAR_0;
 }

 VAR_12 = FUNC_5(VAR_1, VAR_11, VAR_9, VAR_6, VAR_7);
 if (VAR_12)
  goto err_put;

 *VAR_7 = *VAR_7 + VAR_3;

 if (VAR_8)
  *VAR_8 = VAR_11->size - VAR_3;

 return 0;

err_put:
 FUNC_4(VAR_11);

 return VAR_12;
}
