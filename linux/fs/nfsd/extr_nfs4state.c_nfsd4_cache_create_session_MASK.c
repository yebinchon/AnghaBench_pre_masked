
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_create_session {int dummy; } ;
struct nfsd4_clid_slot {int sl_cr_ses; int sl_status; } ;
typedef int __be32 ;


 int FUNC_0 (int *,struct nfsd4_create_session*,int) ;

__attribute__((used)) static void
FUNC_1(struct nfsd4_create_session *VAR_0,
      struct nfsd4_clid_slot *VAR_1, __be32 VAR_2)
{
 VAR_1->sl_status = VAR_2;
 FUNC_0(&VAR_1->sl_cr_ses, VAR_0, sizeof(*VAR_0));
}
