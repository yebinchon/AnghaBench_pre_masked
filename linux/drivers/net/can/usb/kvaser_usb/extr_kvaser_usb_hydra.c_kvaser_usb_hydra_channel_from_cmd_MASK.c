
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__* channel_to_he; } ;
struct TYPE_4__ {TYPE_1__ hydra; } ;
struct kvaser_usb {TYPE_2__ card_data; } ;
struct kvaser_cmd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvaser_cmd const*) ;

__attribute__((used)) static u8 FUNC_1(const struct kvaser_usb *VAR_1,
         const struct kvaser_cmd *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0xff;
 u8 VAR_5 = FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->card_data.hydra.channel_to_he[VAR_3] == VAR_5) {
   VAR_4 = VAR_3;
   break;
  }
 }

 return VAR_4;
}
