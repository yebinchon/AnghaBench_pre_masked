
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int dummy; } ;
struct fc_lport {int service_params; int e_d_tov; int r_a_tov; int does_npiv; scalar_t__ lso_max; scalar_t__ lro_xid; scalar_t__ lro_enabled; scalar_t__ seq_offload; scalar_t__ crc_offload; int boot_time; int max_rport_retry_count; int max_retry_count; scalar_t__ qfull; scalar_t__ link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fc_lport*) ;
 scalar_t__ FUNC_1 (struct fc_lport*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct fc_vport *VAR_8,
 struct fc_lport *VAR_9)
{
 VAR_9->link_up = 0;
 VAR_9->qfull = 0;
 VAR_9->max_retry_count = VAR_5;
 VAR_9->max_rport_retry_count = VAR_6;
 VAR_9->service_params = (VAR_2 | VAR_3 |
     VAR_4 | VAR_1);
 VAR_9->boot_time = VAR_7;
 VAR_9->e_d_tov = 2 * 1000;
 VAR_9->r_a_tov = 10 * 1000;
 VAR_9->does_npiv = 1;


 if (FUNC_1(VAR_9))
  return -VAR_0;


 FUNC_0(VAR_9);


 VAR_9->crc_offload = 0;
 VAR_9->seq_offload = 0;
 VAR_9->lro_enabled = 0;
 VAR_9->lro_xid = 0;
 VAR_9->lso_max = 0;

 return 0;
}
