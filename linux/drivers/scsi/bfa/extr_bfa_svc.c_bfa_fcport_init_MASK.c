
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pbc_disabled; } ;
struct TYPE_5__ {TYPE_1__ port; } ;
struct bfa_s {TYPE_2__ modules; int ioc; } ;
struct TYPE_6__ {scalar_t__ maxfrsize; int rx_bbcredit; } ;
struct bfa_fcport_s {int speed_sup; TYPE_3__ cfg; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct bfa_s*) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct bfa_s *VAR_1)
{
 struct bfa_fcport_s *VAR_2 = FUNC_0(VAR_1);




 FUNC_3(VAR_2);
 if (VAR_2->cfg.maxfrsize == 0)
  VAR_2->cfg.maxfrsize = FUNC_4(&VAR_1->ioc);
 VAR_2->cfg.rx_bbcredit = FUNC_5(&VAR_1->ioc);
 VAR_2->speed_sup = FUNC_6(&VAR_1->ioc);

 if (FUNC_2(VAR_1))
  VAR_1->modules.port.pbc_disabled = VAR_0;

 FUNC_1(!VAR_2->cfg.maxfrsize);
 FUNC_1(!VAR_2->cfg.rx_bbcredit);
 FUNC_1(!VAR_2->speed_sup);
}
