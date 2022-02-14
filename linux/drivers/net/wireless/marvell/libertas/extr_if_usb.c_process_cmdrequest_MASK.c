
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct lbs_private {scalar_t__ resp_idx; int* resp_len; int driver_lock; int * resp_buf; } ;
struct if_usb_card {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct lbs_private*,size_t) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_7(int VAR_2, uint8_t *VAR_3,
          struct sk_buff *VAR_4,
          struct if_usb_card *VAR_5,
          struct lbs_private *VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8;

 if (VAR_2 > VAR_0) {
  FUNC_2(&VAR_5->udev->dev,
        "The receive buffer is too large\n");
  FUNC_1(VAR_4);
  return;
 }

 FUNC_5(&VAR_6->driver_lock, VAR_7);

 VAR_8 = (VAR_6->resp_idx == 0) ? 1 : 0;
 FUNC_0(VAR_6->resp_len[VAR_8]);
 VAR_6->resp_len[VAR_8] = (VAR_2 - VAR_1);
 FUNC_4(VAR_6->resp_buf[VAR_8], VAR_3 + VAR_1,
  VAR_6->resp_len[VAR_8]);
 FUNC_1(VAR_4);
 FUNC_3(VAR_6, VAR_8);

 FUNC_6(&VAR_6->driver_lock, VAR_7);

 FUNC_2(&VAR_5->udev->dev,
      "Wake up main thread to handle cmd response\n");
}
