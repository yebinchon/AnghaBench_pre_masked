
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_demod_state {int dummy; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
int FUNC_2(struct mxl111sf_demod_state *VAR_7,
         enum fe_code_rate *VAR_8)
{
 u8 VAR_9;
 int VAR_10 = FUNC_0(VAR_7, VAR_6, &VAR_9);

 if (FUNC_1(VAR_10))
  goto fail;

 switch (VAR_9 & VAR_5) {
 case 0:
  *VAR_8 = VAR_0;
  break;
 case 1:
  *VAR_8 = VAR_1;
  break;
 case 2:
  *VAR_8 = VAR_2;
  break;
 case 3:
  *VAR_8 = VAR_3;
  break;
 case 4:
  *VAR_8 = VAR_4;
  break;
 }
fail:
 return VAR_10;
}
