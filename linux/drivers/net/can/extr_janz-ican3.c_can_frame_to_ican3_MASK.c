
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ican3_fast_desc {int* data; int command; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct ican3_dev {TYPE_1__ can; } ;
struct can_frame {int can_dlc; int can_id; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ican3_dev *VAR_8,
          struct can_frame *VAR_9,
          struct ican3_fast_desc *VAR_10)
{

 FUNC_1(VAR_10->data, 0, sizeof(VAR_10->data));


 VAR_10->command = VAR_3;
 VAR_10->data[0] |= VAR_9->can_dlc;
 VAR_10->data[1] |= VAR_4;


 if (VAR_8->can.ctrlmode & VAR_0)
  VAR_10->data[1] |= VAR_7;

 if (VAR_9->can_id & VAR_2)
  VAR_10->data[0] |= VAR_6;


 if (VAR_9->can_id & VAR_1) {
  VAR_10->data[0] |= VAR_5;
  VAR_10->data[2] = (VAR_9->can_id & 0x1fe00000) >> 21;
  VAR_10->data[3] = (VAR_9->can_id & 0x001fe000) >> 13;
  VAR_10->data[4] = (VAR_9->can_id & 0x00001fe0) >> 5;
  VAR_10->data[5] = (VAR_9->can_id & 0x0000001f) << 3;
 } else {
  VAR_10->data[2] = (VAR_9->can_id & 0x7F8) >> 3;
  VAR_10->data[3] = (VAR_9->can_id & 0x007) << 5;
 }


 FUNC_0(&VAR_10->data[6], VAR_9->data, VAR_9->can_dlc);
}
