
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {scalar_t__ interp; scalar_t__ filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

int FUNC_2(const char *VAR_2, struct linux_binprm *VAR_3)
{

 if (VAR_3->interp != VAR_3->filename)
  FUNC_0(VAR_3->interp);
 VAR_3->interp = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->interp)
  return -VAR_0;
 return 0;
}
