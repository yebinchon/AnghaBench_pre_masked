
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_2__ tt; int host; } ;
struct fc_frame {int dummy; } ;
struct TYPE_3__ {int rec_data; } ;
struct fc_exch {scalar_t__ oid; scalar_t__ oxid; scalar_t__ rxid; scalar_t__ sid; scalar_t__ did; int esb_stat; TYPE_1__ seq; } ;
struct fc_els_rec_acc {void* reca_e_stat; void* reca_fc4value; int reca_rfid; int reca_rx_id; int reca_ofid; int reca_ox_id; int reca_cmd; } ;
struct fc_els_rec {int rec_s_id; int rec_ox_id; int rec_rx_id; } ;
typedef enum fc_els_rjt_reason { ____Placeholder_fc_els_rjt_reason } fc_els_rjt_reason ;
typedef enum fc_els_rjt_explan { ____Placeholder_fc_els_rjt_explan } fc_els_rjt_explan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fc_exch*,char*,...) ;
 int FUNC_1 (struct fc_lport*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct fc_exch* FUNC_2 (struct fc_lport*,scalar_t__) ;
 int FUNC_3 (struct fc_exch*) ;
 int FUNC_4 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_5 (struct fc_lport*,int) ;
 void* FUNC_6 (struct fc_frame*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct fc_frame*,int,int) ;
 struct fc_lport* FUNC_9 (struct fc_frame*) ;
 int FUNC_10 (int ,scalar_t__) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct fc_els_rec_acc*,int ,int) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_18(struct fc_frame *VAR_9)
{
 struct fc_lport *VAR_10;
 struct fc_frame *VAR_11;
 struct fc_exch *VAR_12;
 struct fc_els_rec *VAR_13;
 struct fc_els_rec_acc *VAR_14;
 enum fc_els_rjt_reason VAR_15 = VAR_3;
 enum fc_els_rjt_explan VAR_16;
 u32 VAR_17;
 u16 VAR_18, VAR_19, VAR_20;

 VAR_10 = FUNC_9(VAR_9);
 VAR_13 = FUNC_6(VAR_9, sizeof(*VAR_13));
 VAR_16 = VAR_0;
 if (!VAR_13)
  goto reject;
 VAR_17 = FUNC_15(VAR_13->rec_s_id);
 VAR_19 = FUNC_16(VAR_13->rec_rx_id);
 VAR_20 = FUNC_16(VAR_13->rec_ox_id);

 VAR_16 = VAR_1;
 if (VAR_17 == FUNC_7(VAR_10->host))
  VAR_18 = VAR_20;
 else
  VAR_18 = VAR_19;
 if (VAR_18 == VAR_8) {
  FUNC_1(VAR_10,
        "REC request from %x: invalid rxid %x oxid %x\n",
        VAR_17, VAR_19, VAR_20);
  goto reject;
 }
 VAR_12 = FUNC_2(VAR_10, VAR_18);
 if (!VAR_12) {
  FUNC_1(VAR_10,
        "REC request from %x: rxid %x oxid %x not found\n",
        VAR_17, VAR_19, VAR_20);
  goto reject;
 }
 FUNC_0(VAR_12, "REC request from %x: rxid %x oxid %x\n",
      VAR_17, VAR_19, VAR_20);
 if (VAR_12->oid != VAR_17 || VAR_20 != VAR_12->oxid)
  goto rel;
 if (VAR_19 != VAR_8 && VAR_19 != VAR_12->rxid)
  goto rel;
 VAR_11 = FUNC_5(VAR_10, sizeof(*VAR_14));
 if (!VAR_11) {
  FUNC_0(VAR_12, "Drop REC request, out of memory\n");
  goto out;
 }

 VAR_14 = FUNC_6(VAR_11, sizeof(*VAR_14));
 FUNC_14(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->reca_cmd = VAR_2;
 VAR_14->reca_ox_id = VAR_13->rec_ox_id;
 FUNC_13(VAR_14->reca_ofid, VAR_13->rec_s_id, 3);
 VAR_14->reca_rx_id = FUNC_12(VAR_12->rxid);
 if (VAR_12->sid == VAR_12->oid)
  FUNC_10(VAR_14->reca_rfid, VAR_12->did);
 else
  FUNC_10(VAR_14->reca_rfid, VAR_12->sid);
 VAR_14->reca_fc4value = FUNC_11(VAR_12->seq.rec_data);
 VAR_14->reca_e_stat = FUNC_11(VAR_12->esb_stat & (VAR_5 |
       VAR_6 |
       VAR_4));
 FUNC_4(VAR_11, VAR_9, VAR_7, 0);
 VAR_10->tt.frame_send(VAR_10, VAR_11);
out:
 FUNC_3(VAR_12);
 return;

rel:
 FUNC_3(VAR_12);
reject:
 FUNC_8(VAR_9, VAR_15, VAR_16);
}
