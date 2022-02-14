
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fc_seq {int cnt; } ;
struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {scalar_t__ lro_xid; TYPE_1__ tt; int r_a_tov; } ;
struct fc_frame_header {scalar_t__ fh_r_ctl; int fh_f_ctl; int fh_type; int fh_d_id; int fh_s_id; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int dummy; } ;
struct fc_exch {void (* resp ) (struct fc_seq*,struct fc_frame*,void*) ;void (* destructor ) (struct fc_seq*,void*) ;int f_ctl; scalar_t__ xid; int ex_lock; int esb_stat; int fh_type; struct fc_seq seq; struct fc_lport* lp; int r_a_tov; void* arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct fc_exch* FUNC_0 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_1 (struct fc_exch*) ;
 int FUNC_2 (struct fc_exch*) ;
 int FUNC_3 (struct fc_exch*,int,int) ;
 int FUNC_4 (struct fc_exch*,struct fc_frame*,int) ;
 int FUNC_5 (struct fc_exch*,int ) ;
 int FUNC_6 (struct fc_fcp_pkt*) ;
 int FUNC_7 (struct fc_fcp_pkt*,scalar_t__) ;
 int FUNC_8 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_9 (struct fc_frame*) ;
 struct fc_fcp_pkt* FUNC_10 (struct fc_frame*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct fc_lport*,struct fc_frame*) ;
 scalar_t__ FUNC_14 (int ) ;

struct fc_seq *FUNC_15(struct fc_lport *VAR_4,
    struct fc_frame *VAR_5,
    void (*VAR_6)(struct fc_seq *,
          struct fc_frame *VAR_7,
          void *VAR_8),
    void (*VAR_9)(struct fc_seq *, void *),
    void *VAR_10, u32 VAR_11)
{
 struct fc_exch *VAR_12;
 struct fc_seq *VAR_13 = ((void*)0);
 struct fc_frame_header *VAR_14;
 struct fc_fcp_pkt *VAR_15 = ((void*)0);
 int VAR_16 = 1;

 VAR_12 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_12) {
  FUNC_8(VAR_5);
  return ((void*)0);
 }
 VAR_12->esb_stat |= VAR_0;
 VAR_14 = FUNC_9(VAR_5);
 FUNC_3(VAR_12, FUNC_11(VAR_14->fh_s_id), FUNC_11(VAR_14->fh_d_id));
 VAR_12->resp = VAR_6;
 VAR_12->destructor = VAR_9;
 VAR_12->arg = VAR_10;
 VAR_12->r_a_tov = VAR_4->r_a_tov;
 VAR_12->lp = VAR_4;
 VAR_13 = &VAR_12->seq;

 VAR_12->fh_type = VAR_14->fh_type;
 VAR_12->f_ctl = FUNC_11(VAR_14->fh_f_ctl);
 FUNC_4(VAR_12, VAR_5, VAR_12->f_ctl);
 VAR_13->cnt++;

 if (VAR_12->xid <= VAR_4->lro_xid && VAR_14->fh_r_ctl == VAR_3) {
  VAR_15 = FUNC_10(VAR_5);
  FUNC_7(FUNC_10(VAR_5), VAR_12->xid);
 }

 if (FUNC_14(VAR_4->tt.frame_send(VAR_4, VAR_5)))
  goto err;

 if (VAR_11)
  FUNC_5(VAR_12, VAR_11);
 VAR_12->f_ctl &= ~VAR_1;

 if (VAR_12->f_ctl & VAR_2)
  VAR_12->esb_stat &= ~VAR_0;
 FUNC_12(&VAR_12->ex_lock);
 return VAR_13;
err:
 if (VAR_15)
  FUNC_6(VAR_15);
 VAR_16 = FUNC_2(VAR_12);
 FUNC_12(&VAR_12->ex_lock);
 if (!VAR_16)
  FUNC_1(VAR_12);
 return ((void*)0);
}
