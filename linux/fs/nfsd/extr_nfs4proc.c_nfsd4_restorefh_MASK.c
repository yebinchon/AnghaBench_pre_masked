
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nfsd4_op_u {int dummy; } nfsd4_op_u ;
struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int fh_dentry; } ;
struct nfsd4_compound_state {int save_stateid; int current_stateid; TYPE_1__ save_fh; int current_fh; } ;
typedef int stateid_t ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd4_compound_state*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nfsd4_compound_state*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
  union nfsd4_op_u *VAR_6)
{
 if (!VAR_5->save_fh.fh_dentry)
  return VAR_3;

 FUNC_2(&VAR_5->current_fh, &VAR_5->save_fh);
 if (FUNC_0(VAR_5, VAR_1)) {
  FUNC_3(&VAR_5->current_stateid, &VAR_5->save_stateid, sizeof(stateid_t));
  FUNC_1(VAR_5, VAR_0);
 }
 return VAR_2;
}
