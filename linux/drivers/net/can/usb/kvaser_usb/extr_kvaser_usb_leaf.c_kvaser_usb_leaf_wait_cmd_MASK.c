
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kvaser_usb {TYPE_2__* intf; TYPE_1__* bulk_in; } ;
struct kvaser_cmd {int len; scalar_t__ id; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct kvaser_usb const*,void*,int ,int*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kvaser_cmd*,struct kvaser_cmd*,int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(const struct kvaser_usb *VAR_7, u8 VAR_8,
        struct kvaser_cmd *VAR_9)
{
 struct kvaser_cmd *VAR_10;
 void *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15 = VAR_6 + FUNC_6(VAR_5);

 VAR_11 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 do {
  VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_4,
       &VAR_12);
  if (VAR_13 < 0)
   goto end;

  VAR_14 = 0;
  while (VAR_14 <= VAR_12 - VAR_0) {
   VAR_10 = VAR_11 + VAR_14;





   if (VAR_10->len == 0) {
    VAR_14 = FUNC_7(VAR_14,
            FUNC_4
      (VAR_7->bulk_in->wMaxPacketSize));
    continue;
   }

   if (VAR_14 + VAR_10->len > VAR_12) {
    FUNC_0(&VAR_7->intf->dev,
          "Format error\n");
    break;
   }

   if (VAR_10->id == VAR_8) {
    FUNC_5(VAR_9, VAR_10, VAR_10->len);
    goto end;
   }

   VAR_14 += VAR_10->len;
  }
 } while (FUNC_8(VAR_6, VAR_15));

 VAR_13 = -VAR_1;

end:
 FUNC_1(VAR_11);

 return VAR_13;
}
