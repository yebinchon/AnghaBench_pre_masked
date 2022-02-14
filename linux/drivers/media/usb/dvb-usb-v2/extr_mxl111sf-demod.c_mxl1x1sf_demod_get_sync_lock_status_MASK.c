
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_demod_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
int FUNC_2(struct mxl111sf_demod_state *VAR_2,
     int *VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;
 *VAR_3 = (VAR_4 & VAR_0) >> 4;
fail:
 return VAR_5;
}
