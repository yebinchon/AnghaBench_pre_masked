
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pqi_sg_descriptor {int address; int flags; int length; } ;
struct pqi_ofa_memory {int bytes_allocated; struct pqi_sg_descriptor* sg_descriptor; int num_memory_descriptors; } ;
struct pqi_ctrl_info {int * pqi_ofa_chunk_virt_addr; struct pqi_ofa_memory* pqi_ofa_mem_virt_addr; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_1 (struct device*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct pqi_ctrl_info *VAR_3,
 u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8;
 struct pqi_sg_descriptor *VAR_9 = ((void*)0);
 struct device *VAR_10;
 struct pqi_ofa_memory *VAR_11;

 VAR_10 = &VAR_3->pci_dev->dev;

 VAR_6 = (VAR_4 + VAR_5 - 1);
 VAR_6 /= VAR_5;

 VAR_11 = VAR_3->pqi_ofa_mem_virt_addr;

 if (VAR_6*VAR_5 < VAR_4)
  goto out;

 VAR_3->pqi_ofa_chunk_virt_addr =
    FUNC_3(VAR_6, sizeof(void *), VAR_2);
 if (!VAR_3->pqi_ofa_chunk_virt_addr)
  goto out;

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_4; VAR_7 += VAR_5, VAR_8++) {
  dma_addr_t VAR_12;

  VAR_3->pqi_ofa_chunk_virt_addr[VAR_8] =
   FUNC_0(VAR_10, VAR_5, &VAR_12,
        VAR_2);

  if (!VAR_3->pqi_ofa_chunk_virt_addr[VAR_8])
   break;

  VAR_9 = &VAR_11->sg_descriptor[VAR_8];
  FUNC_7 ((u64) VAR_12, &VAR_9->address);
  FUNC_6 (VAR_5, &VAR_9->length);
 }

 if (!VAR_7 || VAR_7 < VAR_4)
  goto out_free_chunks;

 FUNC_6(VAR_0, &VAR_9->flags);
 FUNC_5(VAR_6, &VAR_11->num_memory_descriptors);
 FUNC_6(VAR_7, &VAR_11->bytes_allocated);

 return 0;

out_free_chunks:
 while (--VAR_8 >= 0) {
  VAR_9 = &VAR_11->sg_descriptor[VAR_8];
  FUNC_1(VAR_10, VAR_5,
    VAR_3->pqi_ofa_chunk_virt_addr[VAR_8],
    FUNC_2(&VAR_9->address));
 }
 FUNC_4(VAR_3->pqi_ofa_chunk_virt_addr);

out:
 FUNC_6 (0, &VAR_11->bytes_allocated);
 return -VAR_1;
}
