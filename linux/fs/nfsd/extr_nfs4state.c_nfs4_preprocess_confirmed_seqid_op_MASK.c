
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfsd_net {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_openowner {int oo_flags; } ;
struct nfs4_ol_stateid {int st_stid; int st_mutex; int st_stateowner; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nfsd4_compound_state*,int ,int *,int ,struct nfs4_ol_stateid**,struct nfsd_net*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nfs4_openowner* FUNC_3 (int ) ;

__attribute__((used)) static __be32 FUNC_4(struct nfsd4_compound_state *VAR_4, u32 VAR_5,
       stateid_t *VAR_6, struct nfs4_ol_stateid **VAR_7, struct nfsd_net *VAR_8)
{
 __be32 VAR_9;
 struct nfs4_openowner *VAR_10;
 struct nfs4_ol_stateid *VAR_11;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6,
      VAR_1, &VAR_11, VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_10 = FUNC_3(VAR_11->st_stateowner);
 if (!(VAR_10->oo_flags & VAR_0)) {
  FUNC_0(&VAR_11->st_mutex);
  FUNC_2(&VAR_11->st_stid);
  return VAR_3;
 }
 *VAR_7 = VAR_11;
 return VAR_2;
}
