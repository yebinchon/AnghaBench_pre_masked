
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct solo_dev {int i2c_state; TYPE_1__* i2c_msg; } ;
struct TYPE_2__ {int addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct solo_dev*,int) ;
 int FUNC_1 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_3)
{
 u32 VAR_4 = VAR_3->i2c_msg->addr << 1;

 if (VAR_3->i2c_msg->flags & VAR_0)
  VAR_4 |= 1;

 VAR_3->i2c_state = VAR_1;
 FUNC_1(VAR_3, VAR_2, VAR_4);
 FUNC_0(VAR_3, 1);
}
