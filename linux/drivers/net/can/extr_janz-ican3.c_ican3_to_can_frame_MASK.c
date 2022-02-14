
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_fast_desc {int command; int* data; } ;
struct ican3_dev {int dummy; } ;
struct can_frame {int can_id; void* can_dlc; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int*,void*) ;

__attribute__((used)) static void FUNC_2(struct ican3_dev *VAR_8,
          struct ican3_fast_desc *VAR_9,
          struct can_frame *VAR_10)
{
 if ((VAR_9->command & VAR_3) == VAR_4) {
  if (VAR_9->data[1] & VAR_7)
   VAR_10->can_id |= VAR_1;

  VAR_10->can_id |= VAR_9->data[0] << 3;
  VAR_10->can_id |= (VAR_9->data[1] & 0xe0) >> 5;
  VAR_10->can_dlc = FUNC_0(VAR_9->data[1] & VAR_2);
  FUNC_1(VAR_10->data, &VAR_9->data[2], VAR_10->can_dlc);
 } else {
  VAR_10->can_dlc = FUNC_0(VAR_9->data[0] & VAR_2);
  if (VAR_9->data[0] & VAR_6)
   VAR_10->can_id |= VAR_1;

  if (VAR_9->data[0] & VAR_5) {
   VAR_10->can_id |= VAR_0;
   VAR_10->can_id |= VAR_9->data[2] << 21;
   VAR_10->can_id |= VAR_9->data[3] << 13;
   VAR_10->can_id |= VAR_9->data[4] << 5;
   VAR_10->can_id |= (VAR_9->data[5] & 0xf8) >> 3;
  } else {
   VAR_10->can_id |= VAR_9->data[2] << 3;
   VAR_10->can_id |= VAR_9->data[3] >> 5;
  }

  FUNC_1(VAR_10->data, &VAR_9->data[6], VAR_10->can_dlc);
 }
}
