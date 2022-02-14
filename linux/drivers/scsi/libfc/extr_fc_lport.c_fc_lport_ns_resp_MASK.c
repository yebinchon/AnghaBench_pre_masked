
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_lport {int state; int lp_mutex; int fdmi_enabled; } ;
struct fc_frame_header {scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {scalar_t__ ct_fs_type; scalar_t__ ct_fs_subtype; int ct_cmd; } ;


 struct fc_frame* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fc_lport*,char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;





 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_5 (struct fc_frame*) ;
 struct fc_ct_hdr* FUNC_6 (struct fc_frame*,int) ;
 int FUNC_7 (struct fc_lport*) ;
 int FUNC_8 (struct fc_lport*,int) ;
 int FUNC_9 (struct fc_lport*) ;
 int FUNC_10 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_11 (struct fc_lport*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct fc_seq *VAR_5, struct fc_frame *VAR_6,
        void *VAR_7)
{
 struct fc_lport *VAR_8 = VAR_7;
 struct fc_frame_header *VAR_9;
 struct fc_ct_hdr *VAR_10;

 FUNC_1(VAR_8, "Received a ns %s\n", FUNC_3(VAR_6));

 if (VAR_6 == FUNC_0(-VAR_0))
  return;

 FUNC_12(&VAR_8->lp_mutex);

 if (VAR_8->state < 130 || VAR_8->state > 132) {
  FUNC_1(VAR_8, "Received a name server response, "
        "but in state %s\n", FUNC_11(VAR_8));
  if (FUNC_2(VAR_6))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_6)) {
  FUNC_10(VAR_8, VAR_6);
  goto err;
 }

 VAR_9 = FUNC_5(VAR_6);
 VAR_10 = FUNC_6(VAR_6, sizeof(*VAR_10));

 if (VAR_9 && VAR_10 && VAR_9->fh_type == VAR_4 &&
     VAR_10->ct_fs_type == VAR_1 &&
     VAR_10->ct_fs_subtype == VAR_3 &&
     FUNC_14(VAR_10->ct_cmd) == VAR_2)
  switch (VAR_8->state) {
  case 130:
   FUNC_8(VAR_8, 129);
   break;
  case 129:
   FUNC_8(VAR_8, 128);
   break;
  case 128:
   FUNC_8(VAR_8, 131);
   break;
  case 131:
   FUNC_8(VAR_8, 132);
   break;
  case 132:
   if (VAR_8->fdmi_enabled)
    FUNC_7(VAR_8);
   else
    FUNC_9(VAR_8);
   break;
  default:

   break;
  }
 else
  FUNC_10(VAR_8, VAR_6);
out:
 FUNC_4(VAR_6);
err:
 FUNC_13(&VAR_8->lp_mutex);
}
