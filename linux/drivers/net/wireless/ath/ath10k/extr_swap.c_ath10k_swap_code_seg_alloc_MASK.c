
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* size_log2; void* num_segs; void* swap_size; void* size; void** bus_addr; } ;
struct ath10k_swap_code_seg_info {size_t* paddr; void** virt_address; TYPE_1__ seg_hw_info; } ;
struct ath10k {int dev; } ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (struct ath10k*,char*,size_t,size_t) ;
 struct ath10k_swap_code_seg_info* FUNC_2 (int ,int,int ) ;
 void* FUNC_3 (int ,size_t,size_t*,int ) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t,int) ;

__attribute__((used)) static struct ath10k_swap_code_seg_info *
FUNC_6(struct ath10k *VAR_3, size_t VAR_4)
{
 struct ath10k_swap_code_seg_info *VAR_5;
 void *VAR_6;
 dma_addr_t VAR_7;

 VAR_4 = FUNC_5(VAR_4, 2);
 if (VAR_4 > VAR_0) {
  FUNC_1(VAR_3, "refusing code swap bin because it is too big %zu > %d\n",
      VAR_4, VAR_0);
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_3->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_3->dev, VAR_4, &VAR_7,
           VAR_2);
 if (!VAR_6)
  return ((void*)0);

 VAR_5->seg_hw_info.bus_addr[0] = FUNC_0(VAR_7);
 VAR_5->seg_hw_info.size = FUNC_0(VAR_4);
 VAR_5->seg_hw_info.swap_size = FUNC_0(VAR_4);
 VAR_5->seg_hw_info.num_segs =
   FUNC_0(VAR_1);
 VAR_5->seg_hw_info.size_log2 = FUNC_0(FUNC_4(VAR_4));
 VAR_5->virt_address[0] = VAR_6;
 VAR_5->paddr[0] = VAR_7;

 return VAR_5;
}
