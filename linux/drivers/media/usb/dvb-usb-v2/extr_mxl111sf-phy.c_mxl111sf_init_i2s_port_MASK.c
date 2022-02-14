
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;
struct mxl111sf_reg_ctrl_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,struct mxl111sf_reg_ctrl_info*) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_1, u8 VAR_2)
{
 static struct mxl111sf_reg_ctrl_info VAR_3[] = {
  {0x1b, 0xff, 0x1e},
  {0x15, 0x60, 0x60},
  {0x17, 0xe0, 0x20},





  {0x00, 0xff, 0x02},
  {0x26, 0x0d, 0x0d},
  {0x00, 0xff, 0x00},
  {0, 0, 0}
 };
 int VAR_4;

 FUNC_2("(0x%02x)", VAR_2);

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (FUNC_3(VAR_4))
  goto fail;

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2);
 FUNC_3(VAR_4);
fail:
 return VAR_4;
}
