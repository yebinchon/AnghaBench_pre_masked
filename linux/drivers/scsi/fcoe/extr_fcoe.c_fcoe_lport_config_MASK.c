
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int max_retry_count; int max_rport_retry_count; int service_params; int does_npiv; scalar_t__ lso_max; scalar_t__ lro_xid; scalar_t__ lro_enabled; scalar_t__ seq_offload; scalar_t__ crc_offload; int r_a_tov; int e_d_tov; scalar_t__ qfull; scalar_t__ link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct fc_lport *VAR_6)
{
 VAR_6->link_up = 0;
 VAR_6->qfull = 0;
 VAR_6->max_retry_count = 3;
 VAR_6->max_rport_retry_count = 3;
 VAR_6->e_d_tov = VAR_4;
 VAR_6->r_a_tov = VAR_5;
 VAR_6->service_params = (VAR_1 | VAR_2 |
     VAR_3 | VAR_0);
 VAR_6->does_npiv = 1;

 FUNC_1(VAR_6);


 FUNC_0(VAR_6);


 VAR_6->crc_offload = 0;
 VAR_6->seq_offload = 0;
 VAR_6->lro_enabled = 0;
 VAR_6->lro_xid = 0;
 VAR_6->lso_max = 0;

 return 0;
}
