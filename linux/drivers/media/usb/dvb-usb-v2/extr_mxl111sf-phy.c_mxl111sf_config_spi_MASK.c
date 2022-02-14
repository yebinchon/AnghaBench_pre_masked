
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,int,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_1, int VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 FUNC_2("(%d)", VAR_2);

 VAR_4 = FUNC_1(VAR_1, 0x00, 0x02);
 if (FUNC_3(VAR_4))
  goto fail;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (FUNC_3(VAR_4))
  goto fail;

 if (VAR_2)
  VAR_3 |= 0x04;
 else
  VAR_3 &= ~0x04;

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_3);
 if (FUNC_3(VAR_4))
  goto fail;

 VAR_4 = FUNC_1(VAR_1, 0x00, 0x00);
 FUNC_3(VAR_4);
fail:
 return VAR_4;
}
