
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fdmi_rpa_s {int port_attr_blk; int port_name; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_lport_fdmi_s {TYPE_1__* ms; } ;
struct TYPE_2__ {struct bfa_fcs_lport_s* port; } ;


 int FUNC_0 (struct bfa_fcs_lport_fdmi_s*,int *) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;

__attribute__((used)) static u16
FUNC_2(struct bfa_fcs_lport_fdmi_s *VAR_0, u8 *VAR_1)
{
 struct bfa_fcs_lport_s *VAR_2 = VAR_0->ms->port;
 struct fdmi_rpa_s *VAR_3 = (struct fdmi_rpa_s *) VAR_1;
 u16 VAR_4;

 VAR_3->port_name = FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_0,
    (u8 *) &VAR_3->port_attr_blk);

 VAR_4 += sizeof(VAR_3->port_name);

 return VAR_4;
}
