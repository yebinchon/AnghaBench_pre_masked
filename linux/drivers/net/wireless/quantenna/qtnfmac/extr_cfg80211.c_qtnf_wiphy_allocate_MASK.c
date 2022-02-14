
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_wmac {int dummy; } ;
struct TYPE_4__ {int hw_capab; } ;
struct qtnf_bus {int dev; TYPE_1__ hw_info; } ;
struct TYPE_5__ {int * set_power_mgmt; int * start_radar_detection; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct wiphy*,int ) ;
 struct wiphy* FUNC_1 (TYPE_2__*,int) ;

struct wiphy *FUNC_2(struct qtnf_bus *VAR_3)
{
 struct wiphy *VAR_4;

 if (VAR_3->hw_info.hw_capab & VAR_0)
  VAR_2.start_radar_detection = ((void*)0);

 if (!(VAR_3->hw_info.hw_capab & VAR_1))
  VAR_2.set_power_mgmt = ((void*)0);

 VAR_4 = FUNC_1(&VAR_2, sizeof(struct qtnf_wmac));
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(VAR_4, VAR_3->dev);

 return VAR_4;
}
