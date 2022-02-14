
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ nfs4_verifier ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(nfs4_verifier *VAR_1, struct net *VAR_2)
{
 __be32 *VAR_3 = (__be32 *)VAR_1->data;

 FUNC_0(2*sizeof(*VAR_3) != sizeof(VAR_1->data));

 FUNC_2(VAR_3, FUNC_1(VAR_2, VAR_0));
}
