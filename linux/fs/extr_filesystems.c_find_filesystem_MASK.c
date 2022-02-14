
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_system_type {int * name; struct file_system_type* next; } ;


 struct file_system_type* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,unsigned int) ;

__attribute__((used)) static struct file_system_type **FUNC_1(const char *VAR_1, unsigned VAR_2)
{
 struct file_system_type **VAR_3;
 for (VAR_3 = &VAR_0; *VAR_3; VAR_3 = &(*VAR_3)->next)
  if (FUNC_0((*VAR_3)->name, VAR_1, VAR_2) == 0 &&
      !(*VAR_3)->name[VAR_2])
   break;
 return VAR_3;
}
