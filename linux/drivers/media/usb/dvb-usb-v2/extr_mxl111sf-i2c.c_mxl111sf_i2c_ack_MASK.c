
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int *) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct mxl111sf_state *VAR_5)
{
 int VAR_6;
 u8 VAR_7 = 0;

 FUNC_3("()");

 VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_7);
 if (FUNC_2(VAR_6))
  goto fail;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
     0x10 | VAR_2);
 if (FUNC_2(VAR_6))
  goto fail;


 VAR_6 = FUNC_1(VAR_5, VAR_0,
     0x10 | VAR_2 | VAR_3);
 if (FUNC_2(VAR_6))
  goto fail;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
     0x10 | VAR_2 | VAR_4);
 FUNC_2(VAR_6);
fail:
 return VAR_6;
}
