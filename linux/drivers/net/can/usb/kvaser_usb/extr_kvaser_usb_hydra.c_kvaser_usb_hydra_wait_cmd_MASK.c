
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kvaser_usb {TYPE_1__* intf; } ;
struct TYPE_4__ {scalar_t__ cmd_no; } ;
struct kvaser_cmd {TYPE_2__ header; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 unsigned long VAR_6 ;
 int FUNC_2 (void*) ;
 size_t FUNC_3 (struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_usb const*,void*,int ,int*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct kvaser_cmd*,struct kvaser_cmd*,size_t) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(const struct kvaser_usb *VAR_7, u8 VAR_8,
         struct kvaser_cmd *VAR_9)
{
 void *VAR_10;
 int VAR_11;
 unsigned long VAR_12 = VAR_6 + FUNC_7(VAR_5);

 if (VAR_9->header.cmd_no == VAR_0) {
  FUNC_0(&VAR_7->intf->dev, "Wait for CMD_EXTENDED not allowed\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 do {
  int VAR_13 = 0;
  int VAR_14 = 0;

  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_4,
       &VAR_13);
  if (VAR_11 < 0)
   goto end;

  while (VAR_14 < VAR_13) {
   struct kvaser_cmd *VAR_15;
   size_t VAR_16;

   VAR_15 = VAR_10 + VAR_14;
   VAR_16 = FUNC_3(VAR_15);
   if (VAR_14 + VAR_16 > VAR_13) {
    FUNC_1(&VAR_7->intf->dev,
          "Format error\n");
    break;
   }

   if (VAR_15->header.cmd_no == VAR_8) {
    FUNC_6(VAR_9, VAR_15, VAR_16);
    goto end;
   }
   VAR_14 += VAR_16;
  }
 } while (FUNC_8(VAR_6, VAR_12));

 VAR_11 = -VAR_1;

end:
 FUNC_2(VAR_10);

 return VAR_11;
}
