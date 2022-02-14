
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct TYPE_5__ {struct v4l2_rect win; } ;
struct TYPE_4__ {struct v4l2_rect win; } ;
struct TYPE_6__ {scalar_t__ if_type; TYPE_2__ ycbcr; TYPE_1__ bayer; } ;
struct vpfe_ccdc {TYPE_3__ ccdc_cfg; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct vpfe_ccdc *VAR_1,
      struct v4l2_rect *VAR_2)
{
 if (VAR_1->ccdc_cfg.if_type == VAR_0)
  *VAR_2 = VAR_1->ccdc_cfg.bayer.win;
 else
  *VAR_2 = VAR_1->ccdc_cfg.ycbcr.win;
}
