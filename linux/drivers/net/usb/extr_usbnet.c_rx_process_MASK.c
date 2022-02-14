
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbnet {int done; TYPE_3__* net; TYPE_1__* driver_info; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int rx_length_errors; int rx_errors; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int flags; int (* rx_fixup ) (struct usbnet*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,TYPE_3__*,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct usbnet*,struct sk_buff*) ;
 int FUNC_3 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4 (struct usbnet *VAR_4, struct sk_buff *VAR_5)
{
 if (VAR_4->driver_info->rx_fixup &&
     !VAR_4->driver_info->rx_fixup (VAR_4, VAR_5)) {

  if (!(VAR_4->driver_info->flags & VAR_2))
   VAR_4->net->stats.rx_errors++;
  goto done;
 }



 if (VAR_4->driver_info->flags & VAR_1)
  goto done;

 if (VAR_5->len < VAR_0) {
  VAR_4->net->stats.rx_errors++;
  VAR_4->net->stats.rx_length_errors++;
  FUNC_0(VAR_4, VAR_3, VAR_4->net, "rx length %d\n", VAR_5->len);
 } else {
  FUNC_3(VAR_4, VAR_5);
  return;
 }

done:
 FUNC_1(&VAR_4->done, VAR_5);
}
