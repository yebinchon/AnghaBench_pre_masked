
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov5675_reg_list {unsigned int num_of_regs; TYPE_1__* regs; } ;
struct ov5675 {int sd; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int address; int val; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct ov5675*,int ,int,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ov5675 *VAR_0,
     const struct ov5675_reg_list *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(&VAR_0->sd);
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_of_regs; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_1->regs[VAR_3].address, 1,
           VAR_1->regs[VAR_3].val);
  if (VAR_4) {
   FUNC_0(&VAR_2->dev,
        "failed to write reg 0x%4.4x. error = %d",
        VAR_1->regs[VAR_3].address, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
