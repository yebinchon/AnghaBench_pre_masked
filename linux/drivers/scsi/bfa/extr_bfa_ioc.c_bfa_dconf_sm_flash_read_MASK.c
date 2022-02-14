
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_dconf_mod_s {TYPE_1__* bfa; int timer; } ;
typedef enum bfa_dconf_event { ____Placeholder_bfa_dconf_event } bfa_dconf_event ;
struct TYPE_3__ {int iocfc; int ioc; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct bfa_dconf_mod_s*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_dconf_mod_s *VAR_3,
   enum bfa_dconf_event VAR_4)
{
 FUNC_5(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_4(&VAR_3->timer);
  FUNC_3(VAR_3, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_3, VAR_1);
  FUNC_1(&VAR_3->bfa->ioc);
  break;
 case 131:
  FUNC_4(&VAR_3->timer);
  FUNC_3(VAR_3, VAR_2);
  FUNC_0(&VAR_3->bfa->iocfc, VAR_0);
  break;
 case 129:
  FUNC_4(&VAR_3->timer);
  FUNC_3(VAR_3, VAR_2);
  break;
 default:
  FUNC_2(VAR_3->bfa, VAR_4);
 }
}
