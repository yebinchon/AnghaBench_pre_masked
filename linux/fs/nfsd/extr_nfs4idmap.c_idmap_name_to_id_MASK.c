
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int nametoid_cache; } ;
struct ent {int type; char* name; int id; int h; int authname; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct svc_rqst*,int ,struct ent*,int ,struct ent**) ;
 int FUNC_3 (char*,char const*,int) ;
 int VAR_1 ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct svc_rqst*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static __be32
FUNC_8(struct svc_rqst *VAR_4, int VAR_5, const char *VAR_6, u32 VAR_7,
  u32 *VAR_8)
{
 struct ent *VAR_9, VAR_10 = {
  .type = VAR_5,
 };
 int VAR_11;
 struct nfsd_net *VAR_12 = FUNC_4(FUNC_0(VAR_4), VAR_2);

 if (VAR_7 + 1 > sizeof(VAR_10.name))
  return VAR_3;
 FUNC_3(VAR_10.name, VAR_6, VAR_7);
 VAR_10.name[VAR_7] = '\0';
 FUNC_7(VAR_10.authname, FUNC_6(VAR_4), sizeof(VAR_10.authname));
 VAR_11 = FUNC_2(VAR_4, VAR_1, &VAR_10, VAR_12->nametoid_cache, &VAR_9);
 if (VAR_11 == -VAR_0)
  return VAR_3;
 if (VAR_11)
  return FUNC_5(VAR_11);
 *VAR_8 = VAR_9->id;
 FUNC_1(&VAR_9->h, VAR_12->nametoid_cache);
 return 0;
}
