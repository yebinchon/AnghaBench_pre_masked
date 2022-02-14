
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mcu_msg_destroy_channel_response {int channel_id; TYPE_1__ header; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {int completion; int mcu_channel_id; int user_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct allegro_channel*) ;
 struct allegro_channel* FUNC_1 (struct allegro_dev*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct allegro_dev *VAR_2,
          struct mcu_msg_destroy_channel_response *VAR_3)
{
 struct allegro_channel *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3->channel_id);
 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_2->v4l2_dev,
    "received %s for unknown channel %d\n",
    FUNC_3(VAR_3->header.type),
    VAR_3->channel_id);
  return -VAR_0;
 }

 FUNC_4(2, VAR_1, &VAR_2->v4l2_dev,
   "user %d: vcu destroyed channel %d\n",
   VAR_4->user_id, VAR_4->mcu_channel_id);
 FUNC_2(&VAR_4->completion);

 return 0;
}
