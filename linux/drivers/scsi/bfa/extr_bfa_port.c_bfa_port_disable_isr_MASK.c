
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_port_s {int endis_cbarg; int (* endis_cbfn ) (int ,int ) ;int endis_pending; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_port_s*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_port_s *VAR_1, bfa_status_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 VAR_1->endis_pending = VAR_0;
 VAR_1->endis_cbfn(VAR_1->endis_cbarg, VAR_2);
}
