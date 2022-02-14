
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct solo_dev {scalar_t__ i2c_id; int i2c_state; size_t i2c_msg_ptr; TYPE_1__* i2c_msg; } ;
struct TYPE_2__ {int flags; void** buf; } ;


 scalar_t__ FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*) ;
 void* FUNC_4 (struct solo_dev*,int ) ;

int FUNC_5(struct solo_dev *VAR_7)
{
 u32 VAR_8 = FUNC_4(VAR_7, VAR_3);
 int VAR_9 = -VAR_0;


 if (FUNC_0(VAR_8, VAR_6 | VAR_5)
     || VAR_7->i2c_id < 0) {
  FUNC_3(VAR_7);
  return -VAR_1;
 }

 switch (VAR_7->i2c_state) {
 case 129:
  if (VAR_7->i2c_msg->flags & VAR_2) {
   VAR_7->i2c_state = 130;
   VAR_9 = FUNC_1(VAR_7);
   break;
  }

  VAR_7->i2c_state = 128;

 case 128:
  VAR_9 = FUNC_2(VAR_7);
  break;

 case 130:
  VAR_7->i2c_msg->buf[VAR_7->i2c_msg_ptr] =
   FUNC_4(VAR_7, VAR_4);
  VAR_7->i2c_msg_ptr++;

  VAR_9 = FUNC_1(VAR_7);
  break;

 default:
  FUNC_3(VAR_7);
 }

 return VAR_9;
}
