
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_args {int flags; void* astparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_5, void *VAR_6, struct dlm_args *VAR_7)
{
 if (VAR_5 & ~(VAR_0 | VAR_3 | VAR_2 |
         VAR_1))
  return -VAR_4;

 if (VAR_5 & VAR_0 && VAR_5 & VAR_1)
  return -VAR_4;

 VAR_7->flags = VAR_5;
 VAR_7->astparam = VAR_6;
 return 0;
}
