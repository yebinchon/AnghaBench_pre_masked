
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int * channel_to_he; } ;
struct TYPE_7__ {TYPE_2__ hydra; } ;
struct kvaser_usb {TYPE_3__ card_data; TYPE_1__* intf; } ;
struct TYPE_8__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_4__ header; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 struct kvaser_cmd* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_usb*) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_cmd*,int ) ;
 int FUNC_7 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;

__attribute__((used)) static int FUNC_8(struct kvaser_usb *VAR_5,
         u8 VAR_6, int VAR_7)
{
 struct kvaser_cmd *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(1, sizeof(struct kvaser_cmd), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->header.cmd_no = VAR_6;
 if (VAR_7 < 0) {
  FUNC_5
    (VAR_8, VAR_3);
 } else {
  if (VAR_7 >= VAR_4) {
   FUNC_0(&VAR_5->intf->dev, "channel (%d) out of range.\n",
    VAR_7);
   VAR_9 = -VAR_0;
   goto end;
  }
  FUNC_5
   (VAR_8, VAR_5->card_data.hydra.channel_to_he[VAR_7]);
 }
 FUNC_6
    (VAR_8, FUNC_4(VAR_5));

 VAR_9 = FUNC_7(VAR_5, VAR_8, FUNC_3(VAR_8));
 if (VAR_9)
  goto end;

end:
 FUNC_2(VAR_8);

 return VAR_9;
}
