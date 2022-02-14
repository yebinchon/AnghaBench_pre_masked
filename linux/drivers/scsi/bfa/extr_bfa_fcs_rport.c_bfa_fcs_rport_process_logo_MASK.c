
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fchs_s {int ox_id; } ;
struct TYPE_2__ {int logo_rcvd; } ;
struct bfa_fcs_rport_s {TYPE_1__ stats; int prlo; int reply_oxid; int fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_rport_s *VAR_2, struct fchs_s *VAR_3)
{
 VAR_2->reply_oxid = VAR_3->ox_id;
 FUNC_1(VAR_2->fcs, VAR_2->reply_oxid);

 VAR_2->prlo = VAR_0;
 VAR_2->stats.logo_rcvd++;
 FUNC_0(VAR_2, VAR_1);
}
