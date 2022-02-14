
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct console {size_t index; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct console *VAR_3, char *VAR_4)
{
 if ((unsigned)VAR_3->index >= VAR_1)
  return -VAR_0;
 if (!VAR_2[VAR_3->index].base)
  return -VAR_0;
 return 0;
}
