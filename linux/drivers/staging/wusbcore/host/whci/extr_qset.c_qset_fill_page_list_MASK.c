
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct whc_std {int dma_addr; int len; int num_pointers; TYPE_2__* pl_virt; } ;
struct whc_page_list_entry {int dummy; } ;
struct TYPE_5__ {int dev; } ;
struct whc {TYPE_1__ wusbhc; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int buf_ptr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_2__*,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct whc *VAR_4, struct whc_std *VAR_5, gfp_t VAR_6)
{
 dma_addr_t VAR_7 = VAR_5->dma_addr;
 dma_addr_t VAR_8, VAR_9;
 size_t VAR_10;
 int VAR_11;


 if (VAR_5->len <= VAR_3) {
  VAR_5->num_pointers = 0;
  return 0;
 }

 VAR_8 = VAR_7 & ~(VAR_3-1);
 VAR_9 = VAR_7 + VAR_5->len;
 VAR_5->num_pointers = FUNC_0(VAR_9 - VAR_8, VAR_3);

 VAR_10 = VAR_5->num_pointers * sizeof(struct whc_page_list_entry);
 VAR_5->pl_virt = FUNC_5(VAR_10, VAR_6);
 if (VAR_5->pl_virt == ((void*)0))
  return -VAR_2;
 VAR_5->dma_addr = FUNC_2(VAR_4->wusbhc.dev, VAR_5->pl_virt, VAR_10, VAR_0);
 if (FUNC_3(VAR_4->wusbhc.dev, VAR_5->dma_addr)) {
  FUNC_4(VAR_5->pl_virt);
  return -VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_5->num_pointers; VAR_11++) {
  VAR_5->pl_virt[VAR_11].buf_ptr = FUNC_1(VAR_7);
  VAR_7 = (VAR_7 + VAR_3) & ~(VAR_3-1);
 }

 return 0;
}
