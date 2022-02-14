
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;
struct mxl111sf_reg_ctrl_info {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (struct mxl111sf_state*,struct mxl111sf_reg_ctrl_info*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct mxl111sf_state *VAR_0)
{
 static struct mxl111sf_reg_ctrl_info VAR_1[] = {
  {0x15, 0x40, 0x00},
  {0, 0, 0}
 };

 FUNC_1("()");

 return FUNC_0(VAR_0, VAR_1);
}
