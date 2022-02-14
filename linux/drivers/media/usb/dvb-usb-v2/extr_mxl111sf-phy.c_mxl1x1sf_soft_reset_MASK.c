
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;


 int FUNC_0 (struct mxl111sf_state*,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct mxl111sf_state *VAR_0)
{
 int VAR_1;
 FUNC_1("()");

 VAR_1 = FUNC_0(VAR_0, 0xff, 0x00);
 if (FUNC_2(VAR_1))
  goto fail;
 VAR_1 = FUNC_0(VAR_0, 0x02, 0x01);
 FUNC_2(VAR_1);
fail:
 return VAR_1;
}
