
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int type; } ;
struct mcu_msg_destroy_channel {int channel_id; TYPE_1__ header; } ;
struct allegro_dev {int mbox_command; } ;
struct allegro_channel {int mcu_channel_id; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct allegro_dev*,int *,struct mcu_msg_destroy_channel*,int) ;
 int FUNC_1 (struct allegro_dev*) ;
 int FUNC_2 (struct mcu_msg_destroy_channel*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct allegro_dev *VAR_1,
         struct allegro_channel *VAR_2)
{
 struct mcu_msg_destroy_channel VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.header.type = VAR_0;
 VAR_3.header.length = sizeof(VAR_3) - sizeof(VAR_3.header);

 VAR_3.channel_id = VAR_2->mcu_channel_id;

 FUNC_0(VAR_1, &VAR_1->mbox_command, &VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_1);

 return 0;
}
