
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_dev {size_t i2c_msg_ptr; scalar_t__ i2c_msg_num; TYPE_1__* i2c_msg; } ;
struct TYPE_2__ {size_t len; int flags; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct solo_dev*,int) ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct solo_dev *VAR_3)
{
retry_write:
 if (VAR_3->i2c_msg_ptr != VAR_3->i2c_msg->len) {
  FUNC_3(VAR_3, VAR_2,
          VAR_3->i2c_msg->buf[VAR_3->i2c_msg_ptr]);
  VAR_3->i2c_msg_ptr++;
  FUNC_0(VAR_3, 1);
  return 0;
 }

 VAR_3->i2c_msg_ptr = 0;
 VAR_3->i2c_msg++;
 VAR_3->i2c_msg_num--;

 if (VAR_3->i2c_msg_num == 0) {
  FUNC_2(VAR_3);
  return 0;
 }

 if (!(VAR_3->i2c_msg->flags & VAR_0)) {
  FUNC_1(VAR_3);
 } else {
  if (VAR_3->i2c_msg->flags & VAR_1)
   FUNC_2(VAR_3);
  else
   goto retry_write;
 }

 return 0;
}
