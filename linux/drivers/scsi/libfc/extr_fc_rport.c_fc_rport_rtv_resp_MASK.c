
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_rport_priv {scalar_t__ rp_state; int r_a_tov; int e_d_tov; int kref; int rp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_rtv_acc {int rtv_e_d_tov; int rtv_r_a_tov; int rtv_toq; } ;


 scalar_t__ VAR_0 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,char*,int ) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_frame*) ;
 struct fc_els_rtv_acc* FUNC_6 (struct fc_frame*,int) ;
 scalar_t__ FUNC_7 (struct fc_frame*) ;
 int VAR_4 ;
 int FUNC_8 (struct fc_rport_priv*) ;
 int FUNC_9 (struct fc_rport_priv*,int ) ;
 int FUNC_10 (struct fc_rport_priv*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct fc_seq *VAR_5, struct fc_frame *VAR_6,
         void *VAR_7)
{
 struct fc_rport_priv *VAR_8 = VAR_7;
 u8 VAR_9;

 FUNC_1(VAR_8, "Received a RTV %s\n", FUNC_4(VAR_6));

 if (VAR_6 == FUNC_0(-VAR_2))
  goto put;

 FUNC_12(&VAR_8->rp_mutex);

 if (VAR_8->rp_state != VAR_3) {
  FUNC_1(VAR_8, "Received a RTV response, but in state "
        "%s\n", FUNC_10(VAR_8));
  if (FUNC_2(VAR_6))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_6)) {
  FUNC_9(VAR_8, FUNC_3(VAR_6));
  goto err;
 }

 VAR_9 = FUNC_7(VAR_6);
 if (VAR_9 == VAR_0) {
  struct fc_els_rtv_acc *VAR_10;
  u32 VAR_11;
  u32 VAR_12;

  VAR_10 = FUNC_6(VAR_6, sizeof(*VAR_10));
  if (VAR_10) {
   VAR_11 = FUNC_14(VAR_10->rtv_toq);
   VAR_12 = FUNC_14(VAR_10->rtv_r_a_tov);
   if (VAR_12 == 0)
    VAR_12 = 1;
   if (VAR_12 > VAR_8->r_a_tov)
    VAR_8->r_a_tov = VAR_12;
   VAR_12 = FUNC_14(VAR_10->rtv_e_d_tov);
   if (VAR_11 & VAR_1)
    VAR_12 /= 1000000;
   if (VAR_12 == 0)
    VAR_12 = 1;
   if (VAR_12 > VAR_8->e_d_tov)
    VAR_8->e_d_tov = VAR_12;
  }
 }

 FUNC_8(VAR_8);

out:
 FUNC_5(VAR_6);
err:
 FUNC_13(&VAR_8->rp_mutex);
put:
 FUNC_11(&VAR_8->kref, VAR_4);
}
