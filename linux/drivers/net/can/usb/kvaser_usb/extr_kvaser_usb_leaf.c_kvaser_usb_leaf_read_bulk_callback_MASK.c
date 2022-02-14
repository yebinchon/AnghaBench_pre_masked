
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* intf; TYPE_2__* bulk_in; } ;
struct kvaser_cmd {int len; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct kvaser_usb*,struct kvaser_cmd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct kvaser_usb *VAR_1,
            void *VAR_2, int VAR_3)
{
 struct kvaser_cmd *VAR_4;
 int VAR_5 = 0;

 while (VAR_5 <= VAR_3 - VAR_0) {
  VAR_4 = VAR_2 + VAR_5;
  if (VAR_4->len == 0) {
   VAR_5 = FUNC_3(VAR_5, FUNC_2
      (VAR_1->bulk_in->wMaxPacketSize));
   continue;
  }

  if (VAR_5 + VAR_4->len > VAR_3) {
   FUNC_0(&VAR_1->intf->dev, "Format error\n");
   break;
  }

  FUNC_1(VAR_1, VAR_4);
  VAR_5 += VAR_4->len;
 }
}
