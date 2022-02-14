
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt3_i2cbuf {scalar_t__ num_cmds; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt3_i2cbuf*,int) ;
 int FUNC_1 (struct pt3_i2cbuf*,int) ;
 int FUNC_2 (struct pt3_i2cbuf*) ;
 int FUNC_3 (struct pt3_i2cbuf*) ;
 int FUNC_4 (struct pt3_i2cbuf*) ;

__attribute__((used)) static void FUNC_5(struct pt3_i2cbuf *VAR_1, struct i2c_msg *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6;

 VAR_1->num_cmds = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = !!(VAR_2[VAR_4].flags & VAR_0);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1, VAR_2[VAR_4].addr << 1 | VAR_6);
  if (VAR_6)
   FUNC_0(VAR_1, VAR_2[VAR_4].len);
  else
   for (VAR_5 = 0; VAR_5 < VAR_2[VAR_4].len; VAR_5++)
    FUNC_1(VAR_1, VAR_2[VAR_4].buf[VAR_5]);
 }
 if (VAR_3 > 0) {
  FUNC_4(VAR_1);
  FUNC_2(VAR_1);
 }
}
