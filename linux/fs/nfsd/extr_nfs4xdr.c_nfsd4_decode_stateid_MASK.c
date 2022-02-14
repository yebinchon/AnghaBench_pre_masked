
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_compoundargs {int dummy; } ;
struct TYPE_3__ {int si_opaque; int si_generation; } ;
typedef TYPE_1__ stateid_t ;
typedef int stateid_opaque_t ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3, stateid_t *VAR_4)
{
 VAR_0;

 FUNC_1(sizeof(stateid_t));
 VAR_4->si_generation = FUNC_2(VAR_2++);
 FUNC_0(&VAR_4->si_opaque, sizeof(stateid_opaque_t));

 VAR_1;
}
