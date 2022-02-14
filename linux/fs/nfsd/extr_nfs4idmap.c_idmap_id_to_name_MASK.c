
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int idtoname_cache; } ;
struct ent {int type; int h; int name; int authname; int id; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct xdr_stream*,int ) ;
 int FUNC_4 (struct svc_rqst*,int ,struct ent*,int ,struct ent**) ;
 int VAR_2 ;
 struct nfsd_net* FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct svc_rqst*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int ,int) ;
 int * FUNC_11 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_12(struct xdr_stream *VAR_5,
          struct svc_rqst *VAR_6, int VAR_7, u32 VAR_8)
{
 struct ent *VAR_9, VAR_10 = {
  .id = VAR_8,
  .type = VAR_7,
 };
 __be32 *VAR_11;
 int VAR_12;
 struct nfsd_net *VAR_13 = FUNC_5(FUNC_0(VAR_6), VAR_3);

 FUNC_8(VAR_10.authname, FUNC_7(VAR_6), sizeof(VAR_10.authname));
 VAR_12 = FUNC_4(VAR_6, VAR_2, &VAR_10, VAR_13->idtoname_cache, &VAR_9);
 if (VAR_12 == -VAR_0)
  return FUNC_3(VAR_5, VAR_8);
 if (VAR_12)
  return FUNC_6(VAR_12);
 VAR_12 = FUNC_9(VAR_9->name);
 FUNC_1(VAR_12 > VAR_1);
 VAR_11 = FUNC_11(VAR_5, VAR_12 + 4);
 if (!VAR_11)
  return VAR_4;
 VAR_11 = FUNC_10(VAR_11, VAR_9->name, VAR_12);
 FUNC_2(&VAR_9->h, VAR_13->idtoname_cache);
 return 0;
}
