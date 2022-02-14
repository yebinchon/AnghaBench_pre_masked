
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disc_stop_final ) (struct fc_lport*) ;} ;
struct fc_lport {int retry_work; int lp_mutex; scalar_t__ dns_rdata; TYPE_1__ tt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fc_lport*) ;

int FUNC_7(struct fc_lport *VAR_0)
{
 VAR_0->tt.disc_stop_final(VAR_0);
 FUNC_4(&VAR_0->lp_mutex);
 if (VAR_0->dns_rdata)
  FUNC_3(VAR_0->dns_rdata);
 FUNC_5(&VAR_0->lp_mutex);
 FUNC_2();
 FUNC_4(&VAR_0->lp_mutex);
 FUNC_1(VAR_0);
 FUNC_5(&VAR_0->lp_mutex);
 FUNC_0(&VAR_0->retry_work);
 return 0;
}
