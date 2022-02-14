
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_ids {int uuid; int nguid; int eui64; } ;
struct nvme_ns_id_desc {scalar_t__ nidl; int nidt; } ;
struct nvme_ctrl {int device; int admin_q; } ;
struct TYPE_2__ {int cns; int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ identify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,void*,int) ;
 int VAR_7 ;
 int FUNC_5 (int ,struct nvme_command*,void*,int) ;
 int FUNC_6 (int *,void*) ;

__attribute__((used)) static int FUNC_7(struct nvme_ctrl *VAR_8, unsigned VAR_9,
  struct nvme_ns_ids *VAR_10)
{
 struct nvme_command VAR_11 = { };
 int VAR_12;
 void *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11.identify.opcode = VAR_7;
 VAR_11.identify.nsid = FUNC_0(VAR_9);
 VAR_11.identify.cns = VAR_3;

 VAR_13 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_8->admin_q, &VAR_11, VAR_13,
          VAR_2);
 if (VAR_12)
  goto free_data;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14 += VAR_15) {
  struct nvme_ns_id_desc *VAR_16 = VAR_13 + VAR_14;

  if (VAR_16->nidl == 0)
   break;

  switch (VAR_16->nidt) {
  case 130:
   if (VAR_16->nidl != VAR_4) {
    FUNC_1(VAR_8->device,
      "ctrl returned bogus length: %d for NVME_NIDT_EUI64\n",
      VAR_16->nidl);
    goto free_data;
   }
   VAR_15 = VAR_4;
   FUNC_4(VAR_10->eui64, VAR_13 + VAR_14 + sizeof(*VAR_16), VAR_15);
   break;
  case 129:
   if (VAR_16->nidl != VAR_5) {
    FUNC_1(VAR_8->device,
      "ctrl returned bogus length: %d for NVME_NIDT_NGUID\n",
      VAR_16->nidl);
    goto free_data;
   }
   VAR_15 = VAR_5;
   FUNC_4(VAR_10->nguid, VAR_13 + VAR_14 + sizeof(*VAR_16), VAR_15);
   break;
  case 128:
   if (VAR_16->nidl != VAR_6) {
    FUNC_1(VAR_8->device,
      "ctrl returned bogus length: %d for NVME_NIDT_UUID\n",
      VAR_16->nidl);
    goto free_data;
   }
   VAR_15 = VAR_6;
   FUNC_6(&VAR_10->uuid, VAR_13 + VAR_14 + sizeof(*VAR_16));
   break;
  default:

   VAR_15 = VAR_16->nidl;
   break;
  }

  VAR_15 += sizeof(*VAR_16);
 }
free_data:
 FUNC_2(VAR_13);
 return VAR_12;
}
