
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_dev {scalar_t__ i2c_msg_ptr; scalar_t__ i2c_msg_num; TYPE_1__* i2c_msg; } ;
struct TYPE_2__ {scalar_t__ len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct solo_dev*,int ) ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;

__attribute__((used)) static int FUNC_3(struct solo_dev *VAR_2)
{
prepare_read:
 if (VAR_2->i2c_msg_ptr != VAR_2->i2c_msg->len) {
  FUNC_0(VAR_2, 0);
  return 0;
 }

 VAR_2->i2c_msg_ptr = 0;
 VAR_2->i2c_msg++;
 VAR_2->i2c_msg_num--;

 if (VAR_2->i2c_msg_num == 0) {
  FUNC_2(VAR_2);
  return 0;
 }

 if (!(VAR_2->i2c_msg->flags & VAR_0)) {
  FUNC_1(VAR_2);
 } else {
  if (VAR_2->i2c_msg->flags & VAR_1)
   goto prepare_read;
  else
   FUNC_2(VAR_2);
 }

 return 0;
}
