
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int len; int addr; int flags; } ;
struct gb_i2c_transfer_op {void* size; void* flags; void* addr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct gb_i2c_transfer_op *VAR_0, struct i2c_msg *VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_1->flags);

 VAR_0->addr = FUNC_0(VAR_1->addr);
 VAR_0->flags = FUNC_0(VAR_2);
 VAR_0->size = FUNC_0(VAR_1->len);
}
