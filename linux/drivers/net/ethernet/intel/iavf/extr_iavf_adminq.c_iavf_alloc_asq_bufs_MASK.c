
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ va; } ;
struct TYPE_6__ {struct iavf_dma_mem* asq_bi; } ;
struct TYPE_7__ {TYPE_4__ dma_head; TYPE_1__ r; } ;
struct TYPE_8__ {int num_asq_entries; TYPE_2__ asq; int asq_buf_size; } ;
struct iavf_hw {TYPE_3__ aq; } ;
struct iavf_dma_mem {int dummy; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_hw*,struct iavf_dma_mem*,int ,int ,int ) ;
 int FUNC_1 (struct iavf_hw*,TYPE_4__*,int) ;
 int FUNC_2 (struct iavf_hw*,struct iavf_dma_mem*) ;
 int FUNC_3 (struct iavf_hw*,TYPE_4__*) ;
 int VAR_1 ;

__attribute__((used)) static enum iavf_status FUNC_4(struct iavf_hw *VAR_2)
{
 struct iavf_dma_mem *VAR_3;
 enum iavf_status VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_2, &VAR_2->aq.asq.dma_head,
       (VAR_2->aq.num_asq_entries *
        sizeof(struct iavf_dma_mem)));
 if (VAR_4)
  goto alloc_asq_bufs;
 VAR_2->aq.asq.r.asq_bi = (struct iavf_dma_mem *)VAR_2->aq.asq.dma_head.va;


 for (VAR_5 = 0; VAR_5 < VAR_2->aq.num_asq_entries; VAR_5++) {
  VAR_3 = &VAR_2->aq.asq.r.asq_bi[VAR_5];
  VAR_4 = FUNC_0(VAR_2, VAR_3,
       VAR_1,
       VAR_2->aq.asq_buf_size,
       VAR_0);
  if (VAR_4)
   goto unwind_alloc_asq_bufs;
 }
alloc_asq_bufs:
 return VAR_4;

unwind_alloc_asq_bufs:

 VAR_5--;
 for (; VAR_5 >= 0; VAR_5--)
  FUNC_2(VAR_2, &VAR_2->aq.asq.r.asq_bi[VAR_5]);
 FUNC_3(VAR_2, &VAR_2->aq.asq.dma_head);

 return VAR_4;
}
