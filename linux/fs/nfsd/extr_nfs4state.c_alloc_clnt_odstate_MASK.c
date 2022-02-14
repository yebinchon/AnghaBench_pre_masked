
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_clnt_odstate {int co_odcount; struct nfs4_client* co_client; } ;
struct nfs4_client {int dummy; } ;


 int VAR_0 ;
 struct nfs4_clnt_odstate* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static struct nfs4_clnt_odstate *
FUNC_2(struct nfs4_client *VAR_2)
{
 struct nfs4_clnt_odstate *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3) {
  VAR_3->co_client = VAR_2;
  FUNC_1(&VAR_3->co_odcount, 1);
 }
 return VAR_3;
}
