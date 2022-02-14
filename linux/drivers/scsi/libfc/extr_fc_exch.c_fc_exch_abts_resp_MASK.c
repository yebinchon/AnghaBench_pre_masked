
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fc_seq {int dummy; } ;
struct fc_frame_header {int fh_r_ctl; int fh_f_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int esb_stat; scalar_t__ fh_type; int r_a_tov; int ex_lock; struct fc_seq seq; int seq_id; int timeout_work; } ;
struct fc_ba_acc {int ba_seq_id; int ba_seq_id_val; int ba_high_seq_cnt; int ba_low_seq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_exch*,char*,...) ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct fc_exch*) ;
 int FUNC_3 (struct fc_exch*) ;
 int FUNC_4 (struct fc_exch*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct fc_exch*) ;
 int FUNC_7 (struct fc_exch*,int ) ;
 int FUNC_8 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_9 (struct fc_frame*) ;
 struct fc_ba_acc* FUNC_10 (struct fc_frame*,int) ;
 int FUNC_11 (struct fc_exch*,struct fc_seq*,struct fc_frame*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct fc_exch *VAR_4, struct fc_frame *VAR_5)
{
 struct fc_frame_header *VAR_6;
 struct fc_ba_acc *VAR_7;
 struct fc_seq *VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 int VAR_11 = 1, VAR_12 = 0;

 VAR_6 = FUNC_9(VAR_5);
 FUNC_0(VAR_4, "exch: BLS rctl %x - %s\n", VAR_6->fh_r_ctl,
      FUNC_5(VAR_6->fh_r_ctl));

 if (FUNC_1(&VAR_4->timeout_work)) {
  FUNC_0(VAR_4, "Exchange timer canceled due to ABTS response\n");
  FUNC_6(VAR_4);
 }

 FUNC_14(&VAR_4->ex_lock);
 switch (VAR_6->fh_r_ctl) {
 case 129:
  VAR_7 = FUNC_10(VAR_5, sizeof(*VAR_7));
  if (!VAR_7)
   break;






  VAR_9 = FUNC_13(VAR_7->ba_low_seq_cnt);
  VAR_10 = FUNC_13(VAR_7->ba_high_seq_cnt);
  if ((VAR_4->esb_stat & VAR_0) == 0 &&
      (VAR_7->ba_seq_id_val != VAR_1 ||
       VAR_7->ba_seq_id == VAR_4->seq_id) && VAR_9 != VAR_10) {
   VAR_4->esb_stat |= VAR_0;
   FUNC_4(VAR_4);
   VAR_12 = 1;
  }
  break;
 case 128:
  break;
 default:
  break;
 }




 VAR_8 = &VAR_4->seq;



 if (VAR_4->fh_type != VAR_3 &&
     FUNC_12(VAR_6->fh_f_ctl) & VAR_2)
  VAR_11 = FUNC_3(VAR_4);
 FUNC_15(&VAR_4->ex_lock);

 FUNC_4(VAR_4);
 if (!VAR_11)
  FUNC_2(VAR_4);
 if (!FUNC_11(VAR_4, VAR_8, VAR_5))
  FUNC_8(VAR_5);
 if (VAR_12)
  FUNC_7(VAR_4, VAR_4->r_a_tov);
 FUNC_6(VAR_4);
}
