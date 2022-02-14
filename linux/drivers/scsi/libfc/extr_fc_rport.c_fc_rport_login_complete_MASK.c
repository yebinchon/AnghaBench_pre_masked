
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fc_rport_priv {unsigned int e_d_tov; int maxframe_size; struct fc_lport* local_port; } ;
struct fc_lport {int mfs; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {int sp_e_d_tov; int sp_features; } ;
struct fc_els_flogi {TYPE_1__ fl_csp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fc_rport_priv*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fc_els_flogi* FUNC_1 (struct fc_frame*,int) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_els_flogi*,int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct fc_rport_priv *VAR_4,
       struct fc_frame *VAR_5)
{
 struct fc_lport *VAR_6 = VAR_4->local_port;
 struct fc_els_flogi *VAR_7;
 unsigned int VAR_8;
 u16 VAR_9;

 VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_7->fl_csp.sp_features);

 if (FUNC_2(VAR_5) == VAR_1) {
  if (VAR_9 & VAR_3) {
   FUNC_0(VAR_4, "Fabric bit set in FLOGI\n");
   return -VAR_0;
  }
 } else {




  VAR_8 = FUNC_4(VAR_7->fl_csp.sp_e_d_tov);
  if (VAR_9 & VAR_2)
   VAR_8 /= 1000000;
  if (VAR_8 > VAR_4->e_d_tov)
   VAR_4->e_d_tov = VAR_8;
 }
 VAR_4->maxframe_size = FUNC_3(VAR_7, VAR_6->mfs);
 return 0;
}
