
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_2,
   u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 FUNC_2("(0x%02x, 0x%02x)", VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6);
 if (FUNC_3(VAR_5))
  goto fail;

 VAR_6 &= 0xe0;
 VAR_6 |= VAR_3;
 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_6);
 if (FUNC_3(VAR_5))
  goto fail;

 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_6);
 if (FUNC_3(VAR_5))
  goto fail;

 VAR_6 &= 0xe0;
 VAR_6 |= VAR_4;
 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_3(VAR_5);
fail:
 return VAR_5;
}
