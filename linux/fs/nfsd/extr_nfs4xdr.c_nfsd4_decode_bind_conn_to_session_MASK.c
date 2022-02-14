
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compoundargs {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_bind_conn_to_session {int dir; TYPE_1__ sessionid; } ;
typedef int __be32 ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static __be32 FUNC_3(struct nfsd4_compoundargs *VAR_4, struct nfsd4_bind_conn_to_session *VAR_5)
{
 VAR_0;

 FUNC_1(VAR_2 + 8);
 FUNC_0(VAR_5->sessionid.data, VAR_2);
 VAR_5->dir = FUNC_2(VAR_3++);


 VAR_1;
}
