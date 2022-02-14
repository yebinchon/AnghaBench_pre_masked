
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef size_t uint8_t ;
struct hwi_controller {TYPE_17__* phwi_ctxt; } ;
struct TYPE_36__ {scalar_t__ address; } ;
struct TYPE_19__ {TYPE_9__ a64; } ;
struct TYPE_20__ {TYPE_10__ u; } ;
struct hd_async_handle {int cri; int is_header; unsigned int index; TYPE_11__ pa; void* pbuffer; int link; } ;
struct TYPE_32__ {int list; } ;
struct hd_async_entry {struct hd_async_handle* data; TYPE_5__ wq; struct hd_async_handle* header; } ;
struct TYPE_21__ {scalar_t__ address; } ;
struct TYPE_22__ {TYPE_12__ a64; } ;
struct TYPE_23__ {TYPE_13__ u; } ;
struct TYPE_24__ {unsigned int buffer_size; TYPE_14__ pa_base; scalar_t__ va_base; scalar_t__ pi; scalar_t__ handle_base; scalar_t__ ring_base; } ;
struct TYPE_28__ {scalar_t__ address; } ;
struct TYPE_29__ {TYPE_1__ a64; } ;
struct TYPE_30__ {TYPE_2__ u; } ;
struct TYPE_31__ {unsigned int buffer_size; TYPE_3__ pa_base; scalar_t__ va_base; scalar_t__ handle_base; scalar_t__ ring_base; scalar_t__ pi; } ;
struct hd_async_context {unsigned int num_entries; struct hd_async_entry* async_entry; TYPE_15__ async_data; TYPE_4__ async_header; } ;
struct hba_parameters {unsigned int defpdu_hdr_sz; unsigned int defpdu_data_sz; } ;
struct TYPE_25__ {int ulp_supported; } ;
struct beiscsi_hba {struct hba_parameters params; scalar_t__ init_mem; struct hwi_controller* phwi_ctrlr; TYPE_16__ fw_config; } ;
struct be_mem_descriptor {TYPE_18__* mem_array; } ;
struct TYPE_33__ {scalar_t__ address; } ;
struct TYPE_34__ {TYPE_6__ a64; } ;
struct TYPE_35__ {TYPE_7__ u; } ;
struct TYPE_27__ {unsigned int size; TYPE_8__ bus_address; scalar_t__ virtual_address; } ;
struct TYPE_26__ {struct hd_async_context** pasync_ctx; } ;


 unsigned int FUNC_0 (struct beiscsi_hba*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,size_t,...) ;
 int FUNC_3 (struct hd_async_context*,int ,int) ;
 scalar_t__ FUNC_4 (size_t,int *) ;

__attribute__((used)) static int FUNC_5(struct beiscsi_hba *VAR_12)
{
 uint8_t VAR_13;
 struct hwi_controller *VAR_14;
 struct hba_parameters *VAR_15 = &VAR_12->params;
 struct hd_async_context *VAR_16;
 struct hd_async_handle *VAR_17, *VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 struct be_mem_descriptor *VAR_23;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (FUNC_4(VAR_13, &VAR_12->fw_config.ulp_supported)) {

   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += (VAR_8 +
         (VAR_13 * VAR_11));

   VAR_14 = VAR_12->phwi_ctrlr;
   VAR_14->phwi_ctxt->pasync_ctx[VAR_13] =
    (struct hd_async_context *)
     VAR_23->mem_array[0].virtual_address;

   VAR_16 = VAR_14->phwi_ctxt->pasync_ctx[VAR_13];
   FUNC_3(VAR_16, 0, sizeof(*VAR_16));

   VAR_16->async_entry =
     (struct hd_async_entry *)
     ((long unsigned int)VAR_16 +
     sizeof(struct hd_async_context));

   VAR_16->num_entries = FUNC_0(VAR_12,
        VAR_13);

   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_5 +
    (VAR_13 * VAR_11);
   if (VAR_23->mem_array[0].virtual_address) {
    FUNC_2(VAR_12, VAR_9, VAR_0,
         "BM_%d : hwi_init_async_pdu_ctx"
         " HWI_MEM_ASYNC_HEADER_BUF_ULP%d va=%p\n",
         VAR_13,
         VAR_23->mem_array[0].
         virtual_address);
   } else
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_16->async_header.pi = 0;
   VAR_16->async_header.buffer_size = VAR_15->defpdu_hdr_sz;
   VAR_16->async_header.va_base =
    VAR_23->mem_array[0].virtual_address;

   VAR_16->async_header.pa_base.u.a64.address =
    VAR_23->mem_array[0].
    bus_address.u.a64.address;


   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_7 +
         (VAR_13 * VAR_11);
   if (VAR_23->mem_array[0].virtual_address) {
    FUNC_2(VAR_12, VAR_9, VAR_0,
         "BM_%d : hwi_init_async_pdu_ctx"
         " HWI_MEM_ASYNC_HEADER_RING_ULP%d va=%p\n",
         VAR_13,
         VAR_23->mem_array[0].
         virtual_address);
   } else
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_16->async_header.ring_base =
    VAR_23->mem_array[0].virtual_address;


   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_6 +
         (VAR_13 * VAR_11);
   if (VAR_23->mem_array[0].virtual_address) {
    FUNC_2(VAR_12, VAR_9, VAR_0,
         "BM_%d : hwi_init_async_pdu_ctx"
         " HWI_MEM_ASYNC_HEADER_HANDLE_ULP%d va=%p\n",
         VAR_13,
         VAR_23->mem_array[0].
         virtual_address);
   } else
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_16->async_header.handle_base =
    VAR_23->mem_array[0].virtual_address;


   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_4 +
         (VAR_13 * VAR_11);
   if (VAR_23->mem_array[0].virtual_address) {
    FUNC_2(VAR_12, VAR_9, VAR_0,
         "BM_%d : hwi_init_async_pdu_ctx"
         " HWI_MEM_ASYNC_DATA_RING_ULP%d va=%p\n",
         VAR_13,
         VAR_23->mem_array[0].
         virtual_address);
   } else
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_16->async_data.ring_base =
    VAR_23->mem_array[0].virtual_address;


   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_3 +
         (VAR_13 * VAR_11);
   if (!VAR_23->mem_array[0].virtual_address)
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_16->async_data.handle_base =
    VAR_23->mem_array[0].virtual_address;

   VAR_17 =
    (struct hd_async_handle *)
    VAR_16->async_header.handle_base;
   VAR_18 =
    (struct hd_async_handle *)
    VAR_16->async_data.handle_base;


   VAR_23 = (struct be_mem_descriptor *)VAR_12->init_mem;
   VAR_23 += VAR_2 +
         (VAR_13 * VAR_11);
   if (VAR_23->mem_array[0].virtual_address) {
    FUNC_2(VAR_12, VAR_9, VAR_0,
         "BM_%d : hwi_init_async_pdu_ctx"
         " HWI_MEM_ASYNC_DATA_BUF_ULP%d va=%p\n",
         VAR_13,
         VAR_23->mem_array[0].
         virtual_address);
   } else
    FUNC_2(VAR_12, VAR_10,
         VAR_0,
         "BM_%d : No Virtual address for ULP : %d\n",
         VAR_13);

   VAR_20 = 0;
   VAR_16->async_data.pi = 0;
   VAR_16->async_data.buffer_size = VAR_15->defpdu_data_sz;
   VAR_16->async_data.va_base =
    VAR_23->mem_array[VAR_20].virtual_address;
   VAR_16->async_data.pa_base.u.a64.address =
    VAR_23->mem_array[VAR_20].
    bus_address.u.a64.address;

   VAR_22 = ((VAR_23->mem_array[VAR_20].size) /
     VAR_12->params.defpdu_data_sz);
   VAR_21 = 0;

   for (VAR_19 = 0; VAR_19 < FUNC_0
     (VAR_12, VAR_13); VAR_19++) {
    VAR_17->cri = -1;
    VAR_17->is_header = 1;
    VAR_17->index = VAR_19;
    FUNC_1(&VAR_17->link);
    VAR_17->pbuffer =
     (void *)((unsigned long)
       (VAR_16->
        async_header.va_base) +
       (VAR_15->defpdu_hdr_sz * VAR_19));

    VAR_17->pa.u.a64.address =
     VAR_16->async_header.pa_base.u.a64.
     address + (VAR_15->defpdu_hdr_sz * VAR_19);

    VAR_16->async_entry[VAR_19].header =
     VAR_17;
    VAR_17++;
    FUNC_1(&VAR_16->async_entry[VAR_19].
      wq.list);

    VAR_18->cri = -1;
    VAR_18->is_header = 0;
    VAR_18->index = VAR_19;
    FUNC_1(&VAR_18->link);

    if (!VAR_22) {
     VAR_21 = 0;
     VAR_20++;
     VAR_16->async_data.va_base =
      VAR_23->mem_array[VAR_20].
      virtual_address;
     VAR_16->async_data.pa_base.u.
      a64.address =
      VAR_23->mem_array[VAR_20].
      bus_address.u.a64.address;
     VAR_22 =
      ((VAR_23->mem_array[VAR_20].
        size) /
       VAR_12->params.defpdu_data_sz);
    }
    VAR_18->pbuffer =
     (void *)((unsigned long)
     (VAR_16->async_data.va_base) +
     (VAR_15->defpdu_data_sz * VAR_21));

    VAR_18->pa.u.a64.address =
     VAR_16->async_data.pa_base.u.a64.
     address + (VAR_15->defpdu_data_sz *
     VAR_21);
    VAR_21++;
    VAR_22--;

    VAR_16->async_entry[VAR_19].data =
     VAR_18;
    VAR_18++;
   }
  }
 }

 return 0;
}
