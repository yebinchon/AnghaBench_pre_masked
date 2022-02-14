
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_mw {scalar_t__ alloc_size; scalar_t__ buff_size; int dma_addr; void* virt_addr; void* alloc_addr; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 void* FUNC_2 (void*,size_t) ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;
 void* FUNC_4 (struct device*,scalar_t__,int *,int ) ;
 int FUNC_5 (struct device*,scalar_t__,void*,int ) ;

__attribute__((used)) static int FUNC_6(struct ntb_transport_mw *VAR_2,
          struct device *VAR_3, size_t VAR_4)
{
 dma_addr_t VAR_5;
 void *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_3, VAR_2->alloc_size,
     &VAR_5, VAR_1);
 if (!VAR_6) {
  FUNC_3(VAR_3, "Unable to alloc MW buff of size %zu\n",
   VAR_2->alloc_size);
  return -VAR_0;
 }
 VAR_7 = VAR_6;







 if (!FUNC_1(VAR_5, VAR_4)) {
  if (VAR_2->alloc_size > VAR_2->buff_size) {
   VAR_7 = FUNC_2(VAR_6, VAR_4);
   VAR_5 = FUNC_0(VAR_5, VAR_4);
  } else {
   VAR_8 = -VAR_0;
   goto err;
  }
 }

 VAR_2->alloc_addr = VAR_6;
 VAR_2->virt_addr = VAR_7;
 VAR_2->dma_addr = VAR_5;

 return 0;

err:
 FUNC_5(VAR_3, VAR_2->alloc_size, VAR_6, VAR_5);

 return VAR_8;
}
