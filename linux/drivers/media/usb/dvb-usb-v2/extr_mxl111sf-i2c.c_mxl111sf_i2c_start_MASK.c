
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct mxl111sf_state *VAR_4)
{
 int VAR_5;

 FUNC_2("()");

 VAR_5 = FUNC_0(VAR_4, VAR_0,
     0x10 | VAR_1 | VAR_2 | VAR_3);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
     0x10 | VAR_1 | VAR_2);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
     0x10 | VAR_1);
 FUNC_1(VAR_5);
fail:
 return VAR_5;
}
