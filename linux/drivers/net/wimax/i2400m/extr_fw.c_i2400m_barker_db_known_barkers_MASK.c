
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static
int FUNC_1(void)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  goto error_add;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  goto error_add;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  goto error_add;
error_add:
       return VAR_3;
}
