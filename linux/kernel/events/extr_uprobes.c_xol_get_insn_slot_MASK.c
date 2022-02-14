
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xol_area {int * pages; } ;
struct TYPE_2__ {int ixol; } ;
struct uprobe {TYPE_1__ arch; } ;


 int FUNC_0 (int ,unsigned long,int *,int) ;
 struct xol_area* FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (struct xol_area*) ;

__attribute__((used)) static unsigned long FUNC_4(struct uprobe *VAR_0)
{
 struct xol_area *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_1();
 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_2(!VAR_2))
  return 0;

 FUNC_0(VAR_1->pages[0], VAR_2,
         &VAR_0->arch.ixol, sizeof(VAR_0->arch.ixol));

 return VAR_2;
}
