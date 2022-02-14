
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_export; struct dentry* fh_dentry; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct svc_export {TYPE_1__ ex_path; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct svc_fh*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*,int ,unsigned int,char const*) ;
 int FUNC_7 (struct dentry*) ;
 struct svc_export* FUNC_8 (int ) ;
 int FUNC_9 (struct svc_export*) ;
 int FUNC_10 (struct svc_fh*,int ) ;
 int FUNC_11 (struct svc_fh*) ;
 scalar_t__ FUNC_12 (char const*,unsigned int) ;
 struct dentry* FUNC_13 (char const*,struct dentry*,unsigned int) ;
 int FUNC_14 (struct svc_rqst*,struct dentry**,struct svc_export**) ;
 int FUNC_15 (struct svc_rqst*,struct dentry*,struct svc_export**,struct dentry**) ;
 scalar_t__ FUNC_16 (struct dentry*,struct svc_export*) ;
 int FUNC_17 (struct svc_rqst*) ;
 int FUNC_18 (int) ;

__be32
FUNC_19(struct svc_rqst *VAR_1, struct svc_fh *VAR_2,
     const char *VAR_3, unsigned int VAR_4,
     struct svc_export **VAR_5, struct dentry **VAR_6)
{
 struct svc_export *VAR_7;
 struct dentry *VAR_8;
 struct dentry *VAR_9;
 int VAR_10;

 FUNC_6("nfsd: nfsd_lookup(fh %s, %.*s)\n", FUNC_3(VAR_2), VAR_4,VAR_3);

 VAR_8 = VAR_2->fh_dentry;
 VAR_7 = FUNC_8(VAR_2->fh_export);


 if (FUNC_12(VAR_3, VAR_4)) {
  if (VAR_4==1)
   VAR_9 = FUNC_4(VAR_8);
  else if (VAR_8 != VAR_7->ex_path.dentry)
   VAR_9 = FUNC_5(VAR_8);
  else if (!FUNC_0(VAR_7) && !FUNC_17(VAR_1))
   VAR_9 = FUNC_4(VAR_8);
  else {

   VAR_10 = FUNC_15(VAR_1, VAR_8, &VAR_7, &VAR_9);
   if (VAR_10)
    goto out_nfserr;
  }
 } else {





  FUNC_10(VAR_2, VAR_0);
  VAR_9 = FUNC_13(VAR_3, VAR_8, VAR_4);
  VAR_10 = FUNC_2(VAR_9);
  if (FUNC_1(VAR_9))
   goto out_nfserr;
  if (FUNC_16(VAR_9, VAR_7)) {
   FUNC_11(VAR_2);
   if ((VAR_10 = FUNC_14(VAR_1, &VAR_9, &VAR_7))) {
    FUNC_7(VAR_9);
    goto out_nfserr;
   }
  }
 }
 *VAR_6 = VAR_9;
 *VAR_5 = VAR_7;
 return 0;

out_nfserr:
 FUNC_9(VAR_7);
 return FUNC_18(VAR_10);
}
