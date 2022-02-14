
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_demod_state {int dummy; } ;
typedef enum fe_modulation { ____Placeholder_fe_modulation } fe_modulation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
int FUNC_2(struct mxl111sf_demod_state *VAR_5,
          enum fe_modulation *VAR_6)
{
 u8 VAR_7;
 int VAR_8 = FUNC_0(VAR_5, VAR_3, &VAR_7);

 if (FUNC_1(VAR_8))
  goto fail;

 switch ((VAR_7 & VAR_4) >> 4) {
 case 0:
  *VAR_6 = VAR_2;
  break;
 case 1:
  *VAR_6 = VAR_0;
  break;
 case 2:
  *VAR_6 = VAR_1;
  break;
 }
fail:
 return VAR_8;
}
