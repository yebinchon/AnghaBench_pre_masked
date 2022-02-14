
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int type; int flags; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct nfs_delegation *VAR_2,
  fmode_t VAR_3)
{
 if (VAR_2 != ((void*)0) && (VAR_2->type & VAR_3) == VAR_3 &&
     !FUNC_0(VAR_1, &VAR_2->flags) &&
     !FUNC_0(VAR_0, &VAR_2->flags))
  return 1;
 return 0;
}
