
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ address; } ;
struct TYPE_9__ {TYPE_3__ a64; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct mem_array {unsigned int size; unsigned int num_elements; unsigned int size_in_bytes; struct mem_array* wrb_context; struct mem_array* mem_array; TYPE_5__ bus_address; int virtual_address; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {unsigned int size; unsigned int num_elements; unsigned int size_in_bytes; struct hwi_controller* wrb_context; struct hwi_controller* mem_array; TYPE_5__ bus_address; int virtual_address; } ;
struct TYPE_6__ {unsigned int cxns_per_ctrl; int hwi_ws_sz; } ;
struct beiscsi_hba {unsigned int* mem_req; struct mem_array* phwi_ctrlr; struct mem_array* init_mem; TYPE_2__* pcidev; TYPE_1__ params; } ;
struct be_mem_descriptor {unsigned int size; unsigned int num_elements; unsigned int size_in_bytes; struct be_mem_descriptor* wrb_context; struct be_mem_descriptor* mem_array; TYPE_5__ bus_address; int virtual_address; } ;
typedef scalar_t__ dma_addr_t ;
typedef scalar_t__ __u64 ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned int,scalar_t__*,int ) ;
 int FUNC_1 (int *,unsigned int,int ,unsigned long) ;
 void* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct mem_array*) ;
 void* FUNC_4 (unsigned int,int,int ) ;
 struct mem_array* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mem_array*,struct mem_array*,int) ;
 int FUNC_7 (struct mem_array*,int ,int) ;
 unsigned int FUNC_8 (int,unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;

__attribute__((used)) static int FUNC_10(struct beiscsi_hba *VAR_6)
{
 dma_addr_t VAR_7;
 struct hwi_controller *VAR_8;
 struct be_mem_descriptor *VAR_9;
 struct mem_array *VAR_10, *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_6->phwi_ctrlr = FUNC_5(VAR_6->params.hwi_ws_sz, VAR_3);
 if (!VAR_6->phwi_ctrlr)
  return -VAR_2;


 VAR_8 = VAR_6->phwi_ctrlr;
 VAR_8->wrb_context = FUNC_2(VAR_6->params.cxns_per_ctrl,
       sizeof(struct hwi_wrb_context),
       VAR_3);
 if (!VAR_8->wrb_context) {
  FUNC_3(VAR_6->phwi_ctrlr);
  return -VAR_2;
 }

 VAR_6->init_mem = FUNC_2(VAR_4, sizeof(*VAR_9),
     VAR_3);
 if (!VAR_6->init_mem) {
  FUNC_3(VAR_8->wrb_context);
  FUNC_3(VAR_6->phwi_ctrlr);
  return -VAR_2;
 }

 VAR_11 = FUNC_4(VAR_0,
         sizeof(*VAR_11),
         VAR_3);
 if (!VAR_11) {
  FUNC_3(VAR_6->init_mem);
  FUNC_3(VAR_8->wrb_context);
  FUNC_3(VAR_6->phwi_ctrlr);
  return -VAR_2;
 }

 VAR_9 = VAR_6->init_mem;
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (!VAR_6->mem_req[VAR_12]) {
   VAR_9->mem_array = ((void*)0);
   VAR_9++;
   continue;
  }

  VAR_13 = 0;
  VAR_10 = VAR_11;
  VAR_14 = VAR_6->mem_req[VAR_12];
  FUNC_7(VAR_10, 0, sizeof(struct mem_array) *
         VAR_0);
  VAR_15 = FUNC_8(VAR_5 * 1024, VAR_14);
  do {
   VAR_10->virtual_address =
    FUNC_0(&VAR_6->pcidev->dev,
     VAR_15, &VAR_7, VAR_3);
   if (!VAR_10->virtual_address) {
    if (VAR_15 <= VAR_1)
     goto free_mem;
    if (VAR_15 -
     FUNC_9(VAR_15))
     VAR_15 = FUNC_9
            (VAR_15);
    else
     VAR_15 = VAR_15 / 2;
   } else {
    VAR_10->bus_address.u.
        a64.address = (__u64) VAR_7;
    VAR_10->size = VAR_15;
    VAR_14 -= VAR_15;
    VAR_15 = FUNC_8(VAR_5 *
            1024, VAR_14);
    VAR_13++;
    VAR_10++;
   }
  } while (VAR_14);
  VAR_9->num_elements = VAR_13;
  VAR_9->size_in_bytes = VAR_6->mem_req[VAR_12];
  VAR_9->mem_array = FUNC_4(VAR_13, sizeof(*VAR_10),
           VAR_3);
  if (!VAR_9->mem_array)
   goto free_mem;

  FUNC_6(VAR_9->mem_array, VAR_11,
         sizeof(struct mem_array) * VAR_13);
  VAR_9++;
 }
 FUNC_3(VAR_11);
 return 0;
free_mem:
 VAR_9->num_elements = VAR_13;
 while ((VAR_12) || (VAR_13)) {
  for (VAR_13 = VAR_9->num_elements; VAR_13 > 0; VAR_13--) {
   FUNC_1(&VAR_6->pcidev->dev,
         VAR_9->mem_array[VAR_13 - 1].size,
         VAR_9->mem_array[VAR_13 - 1].
         virtual_address,
         (unsigned long)VAR_9->
         mem_array[VAR_13 - 1].
         bus_address.u.a64.address);
  }
  if (VAR_12) {
   VAR_12--;
   FUNC_3(VAR_9->mem_array);
   VAR_9--;
  }
 }
 FUNC_3(VAR_11);
 FUNC_3(VAR_6->init_mem);
 FUNC_3(VAR_6->phwi_ctrlr->wrb_context);
 FUNC_3(VAR_6->phwi_ctrlr);
 return -VAR_2;
}
