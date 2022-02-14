
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_file {int * fi_access; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static __be32 FUNC_1(struct nfs4_file *VAR_8, u32 VAR_9)
{

 if (VAR_9) {

  if (VAR_9 & ~VAR_0)
   return VAR_6;

  if ((VAR_9 & VAR_1) &&
      FUNC_0(&VAR_8->fi_access[VAR_3]))
   return VAR_7;

  if ((VAR_9 & VAR_2) &&
      FUNC_0(&VAR_8->fi_access[VAR_4]))
   return VAR_7;
 }
 return VAR_5;
}
