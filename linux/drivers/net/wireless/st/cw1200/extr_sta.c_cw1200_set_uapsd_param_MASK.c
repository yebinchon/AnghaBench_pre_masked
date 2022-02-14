
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wsm_edca_params {scalar_t__* uapsd_enable; } ;
struct TYPE_2__ {scalar_t__ auto_trigger_step; scalar_t__ max_auto_trigger_interval; scalar_t__ min_auto_trigger_interval; int uapsd_flags; } ;
struct cw1200_common {TYPE_1__ uapsd_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cw1200_common*,TYPE_1__*) ;

int FUNC_2(struct cw1200_common *VAR_0,
      const struct wsm_edca_params *VAR_1)
{
 int VAR_2;
 u16 VAR_3 = 0;





 if (VAR_1->uapsd_enable[0])
  VAR_3 |= 1 << 3;

 if (VAR_1->uapsd_enable[1])
  VAR_3 |= 1 << 2;

 if (VAR_1->uapsd_enable[2])
  VAR_3 |= 1 << 1;

 if (VAR_1->uapsd_enable[3])
  VAR_3 |= 1;






 VAR_0->uapsd_info.uapsd_flags = FUNC_0(VAR_3);
 VAR_0->uapsd_info.min_auto_trigger_interval = 0;
 VAR_0->uapsd_info.max_auto_trigger_interval = 0;
 VAR_0->uapsd_info.auto_trigger_step = 0;

 VAR_2 = FUNC_1(VAR_0, &VAR_0->uapsd_info);
 return VAR_2;
}
