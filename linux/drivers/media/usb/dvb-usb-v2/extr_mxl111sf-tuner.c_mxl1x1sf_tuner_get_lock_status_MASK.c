
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_tuner_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_tuner_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mxl111sf_tuner_state *VAR_1,
       int *VAR_2,
       int *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 *VAR_2 = 0;
 *VAR_3 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (FUNC_1(VAR_4))
  goto fail;

 *VAR_3 = ((VAR_5 & 0x03) == 0x03) ? 1 : 0;
 *VAR_2 = ((VAR_5 & 0x0c) == 0x0c) ? 1 : 0;
fail:
 return VAR_4;
}
