
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_destroy_session {TYPE_1__ sessionid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_3,
        struct nfsd4_destroy_session *VAR_4)
{
 VAR_0;
 FUNC_1(VAR_2);
 FUNC_0(VAR_4->sessionid.data, VAR_2);

 VAR_1;
}
