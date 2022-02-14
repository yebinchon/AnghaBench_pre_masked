
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;
struct mxl111sf_reg_ctrl_info {int addr; int mask; int data; } ;


 int FUNC_0 (struct mxl111sf_state*,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;

int FUNC_3(struct mxl111sf_state *VAR_0,
          struct mxl111sf_reg_ctrl_info *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_1[VAR_2].addr |
       VAR_1[VAR_2].mask |
       VAR_1[VAR_2].data; VAR_2++) {

  VAR_3 = FUNC_0(VAR_0,
           VAR_1[VAR_2].addr,
           VAR_1[VAR_2].mask,
           VAR_1[VAR_2].data);
  if (FUNC_1(VAR_3)) {
   FUNC_2("failed on reg #%d (0x%02x)", VAR_2,
       VAR_1[VAR_2].addr);
   break;
  }
 }
 return VAR_3;
}
