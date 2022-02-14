
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_set_pm {int mode; } ;
struct TYPE_2__ {scalar_t__ uapsd_flags; } ;
struct cw1200_common {struct wsm_set_pm firmware_ps_mode; TYPE_1__ uapsd_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wsm_set_pm*,struct wsm_set_pm*,int) ;
 int FUNC_1 (struct cw1200_common*,struct wsm_set_pm*) ;

int FUNC_2(struct cw1200_common *VAR_1, const struct wsm_set_pm *VAR_2)
{
 struct wsm_set_pm VAR_3 = *VAR_2;

 if (VAR_1->uapsd_info.uapsd_flags != 0)
  VAR_3.mode &= ~VAR_0;

 if (FUNC_0(&VAR_3, &VAR_1->firmware_ps_mode,
     sizeof(struct wsm_set_pm))) {
  VAR_1->firmware_ps_mode = VAR_3;
  return FUNC_1(VAR_1, &VAR_3);
 } else {
  return 0;
 }
}
