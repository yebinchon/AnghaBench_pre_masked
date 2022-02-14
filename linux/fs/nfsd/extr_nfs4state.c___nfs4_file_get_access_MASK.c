
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_file {int * fi_access; int fi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfs4_file *VAR_4, u32 VAR_5)
{
 FUNC_1(&VAR_4->fi_lock);

 if (VAR_5 & VAR_1)
  FUNC_0(&VAR_4->fi_access[VAR_3]);
 if (VAR_5 & VAR_0)
  FUNC_0(&VAR_4->fi_access[VAR_2]);
}
