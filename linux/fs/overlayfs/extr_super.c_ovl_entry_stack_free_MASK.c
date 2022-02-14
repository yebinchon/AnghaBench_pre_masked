
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_entry {unsigned int numlower; TYPE_1__* lowerstack; } ;
struct TYPE_2__ {int dentry; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ovl_entry *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->numlower; VAR_1++)
  FUNC_0(VAR_0->lowerstack[VAR_1].dentry);
}
