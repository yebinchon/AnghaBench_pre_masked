
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_libfc_priv {unsigned int e_d_tov; } ;
struct fc_fcp_pkt {TYPE_1__* rport; } ;
struct TYPE_2__ {struct fc_rport_libfc_priv* dd_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct fc_fcp_pkt *VAR_2)
{
 struct fc_rport_libfc_priv *VAR_3 = VAR_2->rport->dd_data;
 unsigned int VAR_4 = VAR_0;

 if (VAR_3 && VAR_3->e_d_tov > VAR_4)
  VAR_4 = VAR_3->e_d_tov;
 return FUNC_0(VAR_4) + VAR_1;
}
