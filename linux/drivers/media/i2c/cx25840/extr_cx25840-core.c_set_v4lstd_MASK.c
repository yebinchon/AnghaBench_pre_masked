
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;
 int VAR_9 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 int FUNC_6 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_7 (int ) ;
 int FUNC_8 (int,int ,struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_10)
{
 struct cx25840_state *VAR_11 = FUNC_7(FUNC_3(VAR_10));
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;


 if (VAR_11->std == VAR_2) {
  VAR_12 = 0x2;
 } else if (VAR_11->std == VAR_1) {
  VAR_12 = 0x3;
 } else if (VAR_11->std == VAR_5) {
  VAR_13 = 1;
  VAR_12 = 0x5;
 } else if (VAR_11->std == VAR_6) {
  VAR_12 = 0x6;
 } else if (VAR_11->std == VAR_7) {
  VAR_12 = 0x7;
 } else if (VAR_11->std == VAR_4) {
  VAR_12 = 0x8;
 } else {

  if (VAR_11->std & VAR_0)
   VAR_12 = 0x1;
  else if (VAR_11->std & VAR_3)
   VAR_12 = 0x4;
  else if (VAR_11->std & VAR_8)
   VAR_12 = 0xc;
 }

 FUNC_8(1, VAR_9, VAR_10,
  "changing video std to fmt %i\n", VAR_12);






 if (VAR_12 >= 4 && VAR_12 < 8) {

  FUNC_1(VAR_10, 0x400, ~0xf, 1);

  FUNC_1(VAR_10, 0x47b, ~6, 0);
 }
 FUNC_1(VAR_10, 0x400, ~0xf, VAR_12);
 FUNC_1(VAR_10, 0x403, ~0x3, VAR_13);
 if (FUNC_5(VAR_11))
  FUNC_0(VAR_10);
 else
  FUNC_2(VAR_10);
 if (!FUNC_6(VAR_11))
  FUNC_4(VAR_10);
 return 0;
}
