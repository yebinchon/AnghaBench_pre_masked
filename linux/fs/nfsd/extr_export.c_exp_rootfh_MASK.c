
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_fh {int fh_handle; } ;
struct svc_export {int dummy; } ;
struct path {int dentry; } ;
struct nfsd_net {struct cache_detail* svc_export_cache; } ;
struct net {int dummy; } ;
struct knfsd_fh {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int name; } ;
struct TYPE_2__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,int ,int ,int ) ;
 struct svc_export* FUNC_4 (struct cache_detail*,struct auth_domain*,struct path*) ;
 int FUNC_5 (struct svc_export*) ;
 scalar_t__ FUNC_6 (struct svc_fh*,struct svc_export*,int ,int *) ;
 int FUNC_7 (struct svc_fh*,int) ;
 int FUNC_8 (struct svc_fh*) ;
 scalar_t__ FUNC_9 (char*,int ,struct path*) ;
 int FUNC_10 (struct knfsd_fh*,int *,int) ;
 struct nfsd_net* FUNC_11 (struct net*,int ) ;
 int VAR_2 ;
 int FUNC_12 (struct path*) ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(struct net *VAR_3, struct auth_domain *VAR_4, char *VAR_5,
    struct knfsd_fh *VAR_6, int VAR_7)
{
 struct svc_export *VAR_8;
 struct path VAR_9;
 struct inode *VAR_10;
 struct svc_fh VAR_11;
 int VAR_12;
 struct nfsd_net *VAR_13 = FUNC_11(VAR_3, VAR_2);
 struct cache_detail *VAR_14 = VAR_13->svc_export_cache;

 VAR_12 = -VAR_1;

 if (FUNC_9(VAR_5, 0, &VAR_9)) {
  FUNC_13("nfsd: exp_rootfh path not found %s", VAR_5);
  return VAR_12;
 }
 VAR_10 = FUNC_2(VAR_9.dentry);

 FUNC_3("nfsd: exp_rootfh(%s [%p] %s:%s/%ld)\n",
   VAR_5, VAR_9.dentry, VAR_4->name,
   VAR_10->i_sb->s_id, VAR_10->i_ino);
 VAR_8 = FUNC_4(VAR_14, VAR_4, &VAR_9);
 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_1(VAR_8);
  goto out;
 }




 FUNC_7(&VAR_11, VAR_7);
 if (FUNC_6(&VAR_11, VAR_8, VAR_9.dentry, ((void*)0)))
  VAR_12 = -VAR_0;
 else
  VAR_12 = 0;
 FUNC_10(VAR_6, &VAR_11.fh_handle, sizeof(struct knfsd_fh));
 FUNC_8(&VAR_11);
 FUNC_5(VAR_8);
out:
 FUNC_12(&VAR_9);
 return VAR_12;
}
