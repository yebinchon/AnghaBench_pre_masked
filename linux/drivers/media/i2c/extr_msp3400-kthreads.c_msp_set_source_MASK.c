
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct msp_state {scalar_t__ has_scart2_out; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_1, u16 VAR_2)
{
 struct msp_state *VAR_3 = FUNC_2(FUNC_0(VAR_1));

 if (VAR_0) {
  FUNC_1(VAR_1, 0x0008, 0x0520);
  FUNC_1(VAR_1, 0x0009, 0x0620);
 } else {
  FUNC_1(VAR_1, 0x0008, VAR_2);
  FUNC_1(VAR_1, 0x0009, VAR_2);
 }
 FUNC_1(VAR_1, 0x000a, VAR_2);
 FUNC_1(VAR_1, 0x000b, VAR_2);
 FUNC_1(VAR_1, 0x000c, VAR_2);
 if (VAR_3->has_scart2_out)
  FUNC_1(VAR_1, 0x0041, VAR_2);
}
