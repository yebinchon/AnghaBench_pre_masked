
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_mbx_nembed_rsrc_extent {int word4; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_8__ {struct lpfc_mbx_nembed_rsrc_extent req; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ alloc_rsrc_extents; } ;
struct TYPE_11__ {TYPE_4__ un; } ;
struct TYPE_12__ {TYPE_5__ mqe; } ;
struct lpfcMboxq {TYPE_6__ u; TYPE_1__* sge_array; } ;
struct TYPE_7__ {void** addr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct lpfc_mbx_nembed_rsrc_extent*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfcMboxq*) ;
 int FUNC_3 (int *,int *,int) ;

int
FUNC_4(struct lpfc_hba *VAR_6, struct lpfcMboxq *VAR_7,
      uint16_t VAR_8, uint16_t VAR_9, bool VAR_10)
{
 uint8_t VAR_11 = 0;
 struct lpfc_mbx_nembed_rsrc_extent *VAR_12 = ((void*)0);
 void *VAR_13 = ((void*)0);


 if (VAR_10 == VAR_3) {

  VAR_13 = VAR_7->sge_array->addr[0];
  if (VAR_13 == ((void*)0))
   return 1;
  VAR_12 = (struct lpfc_mbx_nembed_rsrc_extent *) VAR_13;
 }





 if (VAR_10 == VAR_2)
  FUNC_0(VAR_5,
         &VAR_7->u.mqe.un.alloc_rsrc_extents.u.req,
         VAR_9);
 else {

  FUNC_0(VAR_5,
         VAR_12, VAR_9);
  FUNC_3(&VAR_12->word4,
          &VAR_12->word4,
          sizeof(uint32_t));
 }


 VAR_11 = FUNC_2(VAR_6, VAR_7);
 switch (VAR_11) {
 case 131:
  if (VAR_10 == VAR_2)
   FUNC_0(VAR_4,
          &VAR_7->u.mqe.un.alloc_rsrc_extents.u.req,
          VAR_8);
  else
   FUNC_0(VAR_4,
          VAR_12, VAR_8);
  break;
 case 129:
 case 128:
 case 130:

  break;
 default:
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "2929 Resource Extent Opcode x%x is "
    "unsupported\n", VAR_11);
  return 1;
 }

 return 0;
}
