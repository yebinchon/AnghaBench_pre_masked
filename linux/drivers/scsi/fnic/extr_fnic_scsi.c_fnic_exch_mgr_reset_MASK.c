
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fnic {int in_remove; } ;
struct fc_lport {int dummy; } ;


 int FUNC_0 (struct fc_lport*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fnic*,scalar_t__) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 struct fnic* FUNC_4 (struct fc_lport*) ;

void FUNC_5(struct fc_lport *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct fnic *VAR_3 = FUNC_4(VAR_0);


 if (VAR_1)
  goto call_fc_exch_mgr_reset;

 if (VAR_2) {
  FUNC_1(VAR_3, VAR_2);
  goto call_fc_exch_mgr_reset;
 }





 if (!VAR_3->in_remove)
  FUNC_3(VAR_0);
 else
  FUNC_2(VAR_0);


call_fc_exch_mgr_reset:
 FUNC_0(VAR_0, VAR_1, VAR_2);

}
