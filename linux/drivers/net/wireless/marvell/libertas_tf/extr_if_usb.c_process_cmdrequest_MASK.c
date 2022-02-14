
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sk_buff {int dummy; } ;
struct lbtf_private {int driver_lock; int cmd_resp_buff; } ;
struct if_usb_card {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct lbtf_private*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(int VAR_2, uint8_t *VAR_3,
          struct sk_buff *VAR_4,
          struct if_usb_card *VAR_5,
          struct lbtf_private *VAR_6)
{
 unsigned long VAR_7;

 if (VAR_2 < VAR_1 ||
     VAR_2 > VAR_0) {
  FUNC_2(&VAR_5->udev->dev,
        "The receive buffer is invalid: %d\n", VAR_2);
  FUNC_0(VAR_4);
  return;
 }

 FUNC_4(&VAR_6->driver_lock, VAR_7);
 FUNC_3(VAR_6->cmd_resp_buff, VAR_3 + VAR_1,
        VAR_2 - VAR_1);
 FUNC_0(VAR_4);
 FUNC_1(VAR_6);
 FUNC_5(&VAR_6->driver_lock, VAR_7);
}
