
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_opaque; int si_generation; } ;
struct nfsd4_free_stateid {TYPE_1__ fr_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int stateid_t ;
typedef int stateid_opaque_t ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3,
     struct nfsd4_free_stateid *VAR_4)
{
 VAR_0;

 FUNC_1(sizeof(stateid_t));
 VAR_4->fr_stateid.si_generation = FUNC_2(VAR_2++);
 FUNC_0(&VAR_4->fr_stateid.si_opaque, sizeof(stateid_opaque_t));

 VAR_1;
}
