
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct nfs_fattr *VAR_3)
{
 if (((VAR_3->valid & VAR_0) == 0) ||
     (((VAR_3->valid & VAR_1) == 0) &&
      ((VAR_3->valid & VAR_2) == 0)))
  return 0;
 return 1;
}
