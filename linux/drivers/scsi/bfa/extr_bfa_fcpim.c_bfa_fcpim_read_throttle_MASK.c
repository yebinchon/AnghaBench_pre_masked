
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bfa_throttle_cfg_s {int is_valid; int value; } ;
struct bfa_s {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dconf; } ;
struct TYPE_3__ {struct bfa_throttle_cfg_s throttle_cfg; } ;


 TYPE_2__* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*) ;

u16
FUNC_2(struct bfa_s *VAR_0)
{
 struct bfa_throttle_cfg_s *VAR_1 =
   &(FUNC_0(VAR_0)->dconf->throttle_cfg);

 return ((!FUNC_1(VAR_0)) ?
        ((VAR_1->is_valid == 1) ? (VAR_1->value) : 0) : 0);
}
