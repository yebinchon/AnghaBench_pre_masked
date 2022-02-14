
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 unsigned long VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct at76_priv *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10 = VAR_6 + VAR_0;

 do {
  VAR_9 = FUNC_1(VAR_7->udev, VAR_8);
  if (VAR_9 < 0) {
   FUNC_5(VAR_7->hw->wiphy,
      "at76_get_cmd_status failed: %d\n",
      VAR_9);
   break;
  }

  FUNC_0(VAR_3,
    "%s: Waiting on cmd %d, status = %d (%s)",
    FUNC_6(VAR_7->hw->wiphy), VAR_8, VAR_9,
    FUNC_2(VAR_9));

  if (VAR_9 != VAR_2
      && VAR_9 != VAR_1)
   break;

  FUNC_3(VAR_5 / 10);
  if (FUNC_4(VAR_6, VAR_10)) {
   FUNC_5(VAR_7->hw->wiphy,
      "completion timeout for command %d\n", VAR_8);
   VAR_9 = -VAR_4;
   break;
  }
 } while (1);

 return VAR_9;
}
