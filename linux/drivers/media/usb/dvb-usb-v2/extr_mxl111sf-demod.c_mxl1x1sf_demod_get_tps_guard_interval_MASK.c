
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_demod_state {int dummy; } ;
typedef enum fe_guard_interval { ____Placeholder_fe_guard_interval } fe_guard_interval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
int FUNC_2(struct mxl111sf_demod_state *VAR_6,
       enum fe_guard_interval *VAR_7)
{
 u8 VAR_8;
 int VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_8);

 if (FUNC_1(VAR_9))
  goto fail;

 switch ((VAR_8 & VAR_5) >> 4) {
 case 0:
  *VAR_7 = VAR_1;
  break;
 case 1:
  *VAR_7 = VAR_0;
  break;
 case 2:
  *VAR_7 = VAR_3;
  break;
 case 3:
  *VAR_7 = VAR_2;
  break;
 }
fail:
 return VAR_9;
}
