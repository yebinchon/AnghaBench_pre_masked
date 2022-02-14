
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_dat; int ns_sufile; int ns_cpfile; } ;
struct nilfs_root {int ifile; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct the_nilfs *VAR_0,
         struct nilfs_root *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1->ifile))
  VAR_2++;
 if (FUNC_1(VAR_0->ns_cpfile))
  VAR_2++;
 if (FUNC_1(VAR_0->ns_sufile))
  VAR_2++;
 if ((VAR_2 || FUNC_0()) && FUNC_1(VAR_0->ns_dat))
  VAR_2++;
 return VAR_2;
}
