
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mxl111sf_demod_state {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mxl111sf_demod_state*,int ,int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mxl111sf_demod_state *VAR_2,
       u16 *VAR_3)
{
 u8 VAR_4, VAR_5;
 int VAR_6;

 *VAR_3 = 0;

 VAR_6 = FUNC_1(VAR_2, VAR_0, &VAR_4);
 if (FUNC_2(VAR_6))
  goto fail;
 VAR_6 = FUNC_1(VAR_2, VAR_1, &VAR_5);
 if (FUNC_2(VAR_6))
  goto fail;

 *VAR_3 = FUNC_0(VAR_4 | ((VAR_5 & 0x03) << 8));
fail:
 return VAR_6;
}
