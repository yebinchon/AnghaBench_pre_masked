
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct IR_i2c {int c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int FUNC_0 (struct IR_i2c*,int*,int *,int *,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_1, enum rc_proto *VAR_2,
       u32 *VAR_3, u8 *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[1] = { 0 };







 VAR_5 = FUNC_1(VAR_1->c, VAR_6, 1);
 if (VAR_5 != 1)
  return (VAR_5 < 0) ? VAR_5 : -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 6);
}
