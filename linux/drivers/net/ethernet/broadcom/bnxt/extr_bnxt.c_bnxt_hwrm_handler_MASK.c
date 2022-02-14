
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tx_cmp {int dummy; } ;
struct hwrm_fwd_req_cmpl {int source_id; } ;
struct hwrm_cmpl {int sequence_id; } ;
struct hwrm_async_event_cmpl {int dummy; } ;
struct TYPE_2__ {int first_vf_id; int active_vfs; int * vf_event_bmap; } ;
struct bnxt {int hwrm_intr_seq_id; int sp_event; TYPE_1__ pf; int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct tx_cmp*) ;
 int FUNC_1 (struct bnxt*,struct hwrm_async_event_cmpl*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_2, struct tx_cmp *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3), VAR_5, VAR_6;
 struct hwrm_cmpl *VAR_7 = (struct hwrm_cmpl *)VAR_3;
 struct hwrm_fwd_req_cmpl *VAR_8 =
    (struct hwrm_fwd_req_cmpl *)VAR_3;

 switch (VAR_4) {
 case 129:
  VAR_6 = FUNC_3(VAR_7->sequence_id);
  if (VAR_6 == VAR_2->hwrm_intr_seq_id)
   VAR_2->hwrm_intr_seq_id = (u16)~VAR_2->hwrm_intr_seq_id;
  else
   FUNC_4(VAR_2->dev, "Invalid hwrm seq id %d\n", VAR_6);
  break;

 case 128:
  VAR_5 = FUNC_3(VAR_8->source_id);

  if ((VAR_5 < VAR_2->pf.first_vf_id) ||
      (VAR_5 >= VAR_2->pf.first_vf_id + VAR_2->pf.active_vfs)) {
   FUNC_4(VAR_2->dev, "Msg contains invalid VF id %x\n",
       VAR_5);
   return -VAR_1;
  }

  FUNC_5(VAR_5 - VAR_2->pf.first_vf_id, VAR_2->pf.vf_event_bmap);
  FUNC_5(VAR_0, &VAR_2->sp_event);
  FUNC_2(VAR_2);
  break;

 case 130:
  FUNC_1(VAR_2,
      (struct hwrm_async_event_cmpl *)VAR_3);

 default:
  break;
 }

 return 0;
}
