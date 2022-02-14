
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at76_priv {int radio_on; TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct at76_priv *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_2->radio_on == VAR_3)
  return 0;

 VAR_5 = VAR_3 ? VAR_1 : VAR_0;

 VAR_4 = FUNC_0(VAR_2->udev, VAR_5, ((void*)0), 0);
 if (VAR_4 < 0)
  FUNC_1(VAR_2->hw->wiphy,
     "at76_set_card_command(%d) failed: %d\n", VAR_5, VAR_4);
 else
  VAR_4 = 1;

 VAR_2->radio_on = VAR_3;
 return VAR_4;
}
