
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {scalar_t__ addr; } ;
struct cx231xx_i2c {int nr; } ;
struct TYPE_2__ {int tuner_i2c_master; scalar_t__ tuner_addr; } ;
struct cx231xx {int tuner_type; TYPE_1__ board; } ;


 int FUNC_0 (struct cx231xx*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct cx231xx *VAR_0, struct cx231xx_i2c *VAR_1,
   const struct i2c_msg *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1->nr);

 if (VAR_4 != VAR_0->board.tuner_i2c_master)
  return 0;

 if (VAR_2->addr != VAR_0->board.tuner_addr)
  return 0;

 if (VAR_0->tuner_type != VAR_3)
  return 0;

 return 1;
}
