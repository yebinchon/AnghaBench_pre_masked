
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_dconf_mod_s {TYPE_1__* bfa; int timer; } ;
typedef enum bfa_dconf_event { ____Placeholder_bfa_dconf_event } bfa_dconf_event ;
struct TYPE_3__ {int iocfc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct bfa_dconf_mod_s*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_dconf_mod_s *VAR_2,
   enum bfa_dconf_event VAR_3)
{
 FUNC_4(VAR_2->bfa, VAR_3);

 switch (VAR_3) {
 case 129:
 case 130:
  FUNC_3(&VAR_2->timer);

 case 128:
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(&VAR_2->bfa->iocfc, VAR_0);
  break;
 default:
  FUNC_1(VAR_2->bfa, VAR_3);
 }
}
