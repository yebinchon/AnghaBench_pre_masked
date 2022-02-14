
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mcu_msg_encode_frame_response {int channel_id; TYPE_1__ header; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct allegro_channel*) ;
 int FUNC_1 (struct allegro_channel*,struct mcu_msg_encode_frame_response*) ;
 struct allegro_channel* FUNC_2 (struct allegro_dev*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct allegro_dev *VAR_1,
       struct mcu_msg_encode_frame_response *VAR_2)
{
 struct allegro_channel *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2->channel_id);
 if (FUNC_0(VAR_3)) {
  FUNC_4(&VAR_1->v4l2_dev,
    "received %s for unknown channel %d\n",
    FUNC_3(VAR_2->header.type),
    VAR_2->channel_id);
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_2);

 return 0;
}
