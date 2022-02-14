
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_ol_stateid {TYPE_2__* st_stateowner; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ so_is_open_owner; } ;
struct TYPE_3__ {int oo_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static __be32 FUNC_1(struct nfs4_ol_stateid *VAR_3)
{
 if (VAR_3->st_stateowner->so_is_open_owner &&
     !(FUNC_0(VAR_3->st_stateowner)->oo_flags & VAR_0))
  return VAR_2;
 return VAR_1;
}
