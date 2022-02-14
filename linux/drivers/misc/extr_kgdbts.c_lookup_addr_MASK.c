
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static unsigned long FUNC_2(char *VAR_4)
{
 unsigned long VAR_5 = 0;

 if (!FUNC_1(VAR_4, "kgdbts_break_test"))
  VAR_5 = (unsigned long)VAR_3;
 else if (!FUNC_1(VAR_4, "sys_open"))
  VAR_5 = (unsigned long)VAR_1;
 else if (!FUNC_1(VAR_4, "do_fork"))
  VAR_5 = (unsigned long)VAR_0;
 else if (!FUNC_1(VAR_4, "hw_break_val"))
  VAR_5 = (unsigned long)&VAR_2;
 VAR_5 = (unsigned long) FUNC_0((void *)VAR_5);
 return VAR_5;
}
