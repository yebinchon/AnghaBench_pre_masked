
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct solo_dev {scalar_t__ i2c_state; scalar_t__ i2c_msg_ptr; TYPE_1__* i2c_msg; int i2c_id; } ;
struct TYPE_2__ {int flags; scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct solo_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_8, int VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_8->i2c_id);

 if (VAR_8->i2c_state == VAR_1)
  VAR_10 |= VAR_5;

 if (VAR_9) {
  VAR_10 |= VAR_7;
 } else {
  VAR_10 |= VAR_4;
  if (!(VAR_8->i2c_msg->flags & VAR_0))
   VAR_10 |= VAR_2;
 }

 if (VAR_8->i2c_msg_ptr == VAR_8->i2c_msg->len)
  VAR_10 |= VAR_6;

 FUNC_1(VAR_8, VAR_3, VAR_10);
}
