
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int *,int,int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(struct mxl111sf_state *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[] = { VAR_2, VAR_3 };
 int VAR_5;

 FUNC_2("W: (0x%02x, 0x%02x)\n", VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_4, 2, ((void*)0), 0);
 if (FUNC_1(VAR_5))
  FUNC_3("error writing reg: 0x%02x, val: 0x%02x", VAR_2, VAR_3);
 return VAR_5;
}
