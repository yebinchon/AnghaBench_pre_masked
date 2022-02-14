
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int temp_spp ;
struct fc_seq {int dummy; } ;
struct TYPE_2__ {int roles; } ;
struct fc_rport_priv {scalar_t__ rp_state; size_t spp_type; int kref; int rp_mutex; TYPE_1__ ids; int supported_classes; int flags; } ;
struct fc_frame {int dummy; } ;
struct fc_els_spp {int spp_flags; size_t spp_type; int spp_params; } ;
struct fc_els_prli {int prli_spp_len; } ;
struct fc_els_ls_rjt {int er_reason; size_t er_explan; } ;
struct fc4_prov {int (* prli ) (struct fc_rport_priv*,int,struct fc_els_spp*,struct fc_els_spp*) ;} ;
typedef enum fc_els_spp_resp { ____Placeholder_fc_els_spp_resp } fc_els_spp_resp ;


 scalar_t__ VAR_0 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct fc_rport_priv*,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_frame*) ;
 void* FUNC_6 (struct fc_frame*,int) ;
 scalar_t__ FUNC_7 (struct fc_frame*) ;
 struct fc4_prov** VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (struct fc_rport_priv*) ;
 int FUNC_9 (struct fc_rport_priv*,int ) ;
 int FUNC_10 (struct fc_rport_priv*,int ) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct fc_els_spp*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct fc_rport_priv*,int,struct fc_els_spp*,struct fc_els_spp*) ;

__attribute__((used)) static void FUNC_18(struct fc_seq *VAR_22, struct fc_frame *VAR_23,
          void *VAR_24)
{
 struct fc_rport_priv *VAR_25 = VAR_24;
 struct {
  struct fc_els_prli prli;
  struct fc_els_spp spp;
 } *VAR_26;
 struct fc_els_spp VAR_27;
 struct fc_els_ls_rjt *VAR_28;
 struct fc4_prov *VAR_29;
 u32 VAR_30 = VAR_11;
 u32 VAR_31 = 0;
 u8 VAR_32;
 enum fc_els_spp_resp VAR_33;

 FUNC_1(VAR_25, "Received a PRLI %s\n", FUNC_4(VAR_23));

 if (VAR_23 == FUNC_0(-VAR_6))
  goto put;

 FUNC_14(&VAR_25->rp_mutex);

 if (VAR_25->rp_state != VAR_19) {
  FUNC_1(VAR_25, "Received a PRLI response, but in state "
        "%s\n", FUNC_11(VAR_25));
  if (FUNC_2(VAR_23))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_23)) {
  FUNC_10(VAR_25, FUNC_3(VAR_23));
  goto err;
 }


 VAR_25->ids.roles = VAR_11;

 VAR_32 = FUNC_7(VAR_23);
 if (VAR_32 == VAR_0) {
  VAR_26 = FUNC_6(VAR_23, sizeof(*VAR_26));
  if (!VAR_26) {
   FUNC_10(VAR_25, -VAR_8);
   goto out;
  }

  VAR_33 = (VAR_26->spp.spp_flags & VAR_17);
  FUNC_1(VAR_25, "PRLI spp_flags = 0x%x spp_type 0x%x\n",
        VAR_26->spp.spp_flags, VAR_26->spp.spp_type);
  VAR_25->spp_type = VAR_26->spp.spp_type;
  if (VAR_33 != VAR_15) {
   if (VAR_33 == VAR_16)
    FUNC_9(VAR_25, -VAR_8);
   else
    FUNC_10(VAR_25, -VAR_8);
   goto out;
  }
  if (VAR_26->prli.prli_spp_len < sizeof(VAR_26->spp)) {
   FUNC_10(VAR_25, -VAR_8);
   goto out;
  }

  VAR_31 = FUNC_16(VAR_26->spp.spp_params);
  if (VAR_31 & VAR_3)
   VAR_25->flags |= VAR_13;
  if (VAR_31 & VAR_1)
   VAR_25->flags |= VAR_12;




  VAR_29 = VAR_20[VAR_25->spp_type];
  if (VAR_29) {
   FUNC_13(&VAR_27, 0, sizeof(VAR_27));
   VAR_29->prli(VAR_25, VAR_26->prli.prli_spp_len,
       &VAR_26->spp, &VAR_27);
  }



  if (VAR_25->spp_type != VAR_18 ||
      !(VAR_26->spp.spp_flags & VAR_14)) {



   VAR_31 &= ~VAR_4;
  }
  VAR_25->supported_classes = VAR_5;
  if (VAR_31 & VAR_2)
   VAR_30 |= VAR_9;
  if (VAR_31 & VAR_4)
   VAR_30 |= VAR_10;

  VAR_25->ids.roles = VAR_30;
  FUNC_8(VAR_25);

 } else {
  VAR_28 = FUNC_6(VAR_23, sizeof(*VAR_28));
  if (!VAR_28)
   FUNC_1(VAR_25, "PRLI bad response\n");
  else
   FUNC_1(VAR_25, "PRLI ELS rejected, reason %x expl %x\n",
         VAR_28->er_reason, VAR_28->er_explan);
  FUNC_10(VAR_25, VAR_7);
 }

out:
 FUNC_5(VAR_23);
err:
 FUNC_15(&VAR_25->rp_mutex);
put:
 FUNC_12(&VAR_25->kref, VAR_21);
}
