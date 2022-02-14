
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_addr_cursor {unsigned long tried; int index; int responded; TYPE_1__* alist; int nr_iterations; } ;
struct TYPE_2__ {unsigned long responded; unsigned long failed; int preferred; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_3 (int,unsigned long*) ;
 scalar_t__ FUNC_4 (int,unsigned long*) ;

bool FUNC_5(struct afs_addr_cursor *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 int VAR_3;

 if (!VAR_0->alist)
  return 0;

 VAR_1 = VAR_0->alist->responded;
 VAR_2 = VAR_0->alist->failed;
 FUNC_2("%lx-%lx-%lx,%d", VAR_1, VAR_2, VAR_0->tried, VAR_0->index);

 VAR_0->nr_iterations++;

 VAR_1 &= ~(VAR_2 | VAR_0->tried);

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_0->alist->preferred);
 if (FUNC_4(VAR_3, &VAR_1))
  goto selected;

 VAR_3 = FUNC_1(VAR_1);

selected:
 VAR_0->index = VAR_3;
 FUNC_3(VAR_3, &VAR_0->tried);
 VAR_0->responded = 0;
 return 1;
}
