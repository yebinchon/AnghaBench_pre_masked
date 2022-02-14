
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union atto_vda_req {int dummy; } atto_vda_req ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_request {int comp_cb; int req_list; } ;
struct esas2r_mem_desc {int size; scalar_t__ virt_addr; int next_desc; } ;
struct esas2r_inbound_list_source_entry {int length; scalar_t__ reserved; scalar_t__ address; } ;
struct esas2r_adapter {int list_size; scalar_t__ volatile* outbound_copy; struct esas2r_request* first_ae_req; struct esas2r_mem_desc inbound_list_md; int flags; int * disc_buffer; struct esas2r_sas_nvram* nvram; struct esas2r_mem_desc outbound_list_md; int free_sg_list_head; struct esas2r_mem_desc* sg_list_mds; int flags2; TYPE_1__* pcid; int * req_table; struct esas2r_request general_req; int * targetdb; int * targetdb_end; int queue_lock; int mem_lock; int sg_list_lock; } ;
struct atto_vda_ob_rsp {int dummy; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_16 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_3 (int) ;
 int VAR_17 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (struct esas2r_adapter*,struct esas2r_mem_desc*,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct esas2r_adapter*) ;
 int FUNC_9 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_10 (struct esas2r_adapter*) ;
 void* FUNC_11 (scalar_t__,int,int ) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

bool FUNC_15(struct esas2r_adapter *VAR_22,
    void **VAR_23)
{
 u32 VAR_24;
 u8 *VAR_25;
 struct esas2r_inbound_list_source_entry *VAR_26;
 struct esas2r_request *VAR_27;
 struct esas2r_mem_desc *VAR_28;

 FUNC_13(&VAR_22->sg_list_lock);
 FUNC_13(&VAR_22->mem_lock);
 FUNC_13(&VAR_22->queue_lock);

 VAR_22->targetdb_end = &VAR_22->targetdb[VAR_12];

 if (!FUNC_2(VAR_22, &VAR_22->general_req)) {
  FUNC_4(
   "failed to allocate a VDA request for the general req!");
  return 0;
 }


 VAR_22->first_ae_req =
  FUNC_11(VAR_18, sizeof(struct esas2r_request),
   VAR_14);

 if (VAR_22->first_ae_req == ((void*)0)) {
  FUNC_7(VAR_11,
      "failed to allocate memory for asynchronous events");
  return 0;
 }


 VAR_22->sg_list_mds = FUNC_11(VAR_20, sizeof(struct esas2r_mem_desc),
     VAR_14);

 if (VAR_22->sg_list_mds == ((void*)0)) {
  FUNC_7(VAR_11,
      "failed to allocate memory for s/g list descriptors");
  return 0;
 }


 VAR_22->req_table =
  FUNC_11(VAR_19 + VAR_18 + 1,
   sizeof(struct esas2r_request *),
   VAR_14);

 if (VAR_22->req_table == ((void*)0)) {
  FUNC_7(VAR_11,
      "failed to allocate memory for the request table");
  return 0;
 }


 FUNC_5(VAR_22);





 if ((VAR_22->pcid->subsystem_vendor == VAR_7)
     && (VAR_22->pcid->subsystem_device & VAR_5))
  VAR_22->flags2 |= VAR_1;

 if (FUNC_14(VAR_1, &VAR_22->flags2))
  VAR_22->flags2 |= VAR_0;

 if (VAR_22->pcid->subsystem_device == VAR_6)
  VAR_22->flags2 |= VAR_2;


 VAR_25 = (u8 *)*VAR_23;



 for (VAR_24 = 0, VAR_28 = VAR_22->sg_list_mds; VAR_24 < VAR_20; VAR_24++, VAR_28++) {
  VAR_28->size = VAR_21;

  FUNC_12(&VAR_28->next_desc, &VAR_22->free_sg_list_head);

  if (!FUNC_6(VAR_22, VAR_28, VAR_13)) {

   if (VAR_24 < VAR_16)
    return 0;
   break;
  }
 }


 VAR_22->list_size = VAR_19 + VAR_10;


 VAR_22->inbound_list_md.size = VAR_22->list_size *
      sizeof(struct
      esas2r_inbound_list_source_entry);

 if (!FUNC_6(VAR_22, &VAR_22->inbound_list_md, VAR_9)) {
  FUNC_4("failed to allocate IB list");
  return 0;
 }


 VAR_22->outbound_list_md.size = VAR_22->list_size *
       sizeof(struct atto_vda_ob_rsp);

 if (!FUNC_6(VAR_22, &VAR_22->outbound_list_md,
      VAR_9)) {
  FUNC_4("failed to allocate IB list");
  return 0;
 }


 VAR_22->nvram = (struct esas2r_sas_nvram *)VAR_25;
 VAR_25 += sizeof(struct esas2r_sas_nvram);


 VAR_22->disc_buffer = VAR_25;
 VAR_25 += VAR_8;
 VAR_25 = FUNC_1(VAR_25, 8);


 VAR_22->outbound_copy = (u32 volatile *)VAR_25;
 VAR_25 += sizeof(u32);

 if (!FUNC_14(VAR_4, &VAR_22->flags))
  FUNC_8(VAR_22);


 *VAR_23 = (void *)VAR_25;


 if (FUNC_14(VAR_3, &VAR_22->flags)) {
  FUNC_10(VAR_22);


  VAR_26 =
   (struct esas2r_inbound_list_source_entry *)VAR_22->
   inbound_list_md.
   virt_addr;

  for (VAR_24 = 0; VAR_24 < VAR_22->list_size; VAR_24++) {
   VAR_26->address = 0;
   VAR_26->reserved = 0;
   VAR_26->length = FUNC_3(VAR_15
            | (sizeof(union
        atto_vda_req)
        /
        sizeof(u32)));
   VAR_26++;
  }


  for (VAR_27 = VAR_22->first_ae_req, VAR_24 = 0; VAR_24 < VAR_18; VAR_27++,
       VAR_24++) {
   FUNC_0(&VAR_27->req_list);
   if (!FUNC_2(VAR_22, VAR_27)) {
    FUNC_4(
     "failed to allocate a VDA request!");
    return 0;
   }

   FUNC_9(VAR_27, VAR_22);


   VAR_27->comp_cb = VAR_17;
  }
 }

 return 1;
}
