
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {size_t index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct console *VAR_3, char *VAR_4)
{
 if (VAR_3->index < 0 || VAR_3->index >= VAR_1)
  return -VAR_0;

 if (VAR_2[VAR_3->index] == -1)
  return -VAR_0;

 return 0;
}
