
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {scalar_t__ proc_handler; int maxlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,struct ctl_table*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct ctl_table *VAR_3)
{
 int VAR_4 = 0;

 if ((VAR_3->proc_handler == VAR_0) ||
     (VAR_3->proc_handler == VAR_1)) {
  if (VAR_3->maxlen != sizeof(unsigned int))
   VAR_4 |= FUNC_0(VAR_2, VAR_3, "array not allowed");
 }

 return VAR_4;
}
