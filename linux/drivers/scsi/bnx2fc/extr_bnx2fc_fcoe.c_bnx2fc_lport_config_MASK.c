
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rnid_atype; } ;
struct fc_lport {int e_d_tov; int r_a_tov; int service_params; int does_npiv; TYPE_1__ rnid_gen; int max_rport_retry_count; int max_retry_count; scalar_t__ qfull; scalar_t__ link_up; } ;
struct fc_els_rnid_gen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fc_lport*) ;
 scalar_t__ FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fc_lport *VAR_8)
{
 VAR_8->link_up = 0;
 VAR_8->qfull = 0;
 VAR_8->max_retry_count = VAR_0;
 VAR_8->max_rport_retry_count = VAR_1;
 VAR_8->e_d_tov = 2 * 1000;
 VAR_8->r_a_tov = 10 * 1000;

 VAR_8->service_params = (VAR_5 | VAR_6 |
    VAR_7 | VAR_4);
 VAR_8->does_npiv = 1;

 FUNC_2(&VAR_8->rnid_gen, 0, sizeof(struct fc_els_rnid_gen));
 VAR_8->rnid_gen.rnid_atype = VAR_2;


 if (FUNC_1(VAR_8))
  return -VAR_3;


 FUNC_0(VAR_8);

 return 0;
}
