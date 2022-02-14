
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_export; struct dentry* fh_dentry; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct svc_fh*,int ,struct dentry*,struct svc_fh*) ;
 int FUNC_6 (struct svc_fh*) ;
 int FUNC_7 (struct svc_fh*) ;
 int FUNC_8 (struct svc_fh*) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_10 (struct svc_fh*) ;
 scalar_t__ FUNC_11 (char*,int) ;
 struct dentry* FUNC_12 (char*,struct dentry*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,struct dentry*,char*) ;

__be32
FUNC_15(struct svc_rqst *VAR_4, struct svc_fh *VAR_5,
    char *VAR_6, int VAR_7,
    char *VAR_8,
    struct svc_fh *VAR_9)
{
 struct dentry *VAR_10, *VAR_11;
 __be32 VAR_12, VAR_13;
 int VAR_14;

 VAR_12 = VAR_3;
 if (!VAR_7 || VAR_8[0] == '\0')
  goto out;
 VAR_12 = VAR_2;
 if (FUNC_11(VAR_6, VAR_7))
  goto out;

 VAR_12 = FUNC_9(VAR_4, VAR_5, VAR_1, VAR_0);
 if (VAR_12)
  goto out;

 VAR_14 = FUNC_10(VAR_5);
 if (VAR_14)
  goto out_nfserr;

 FUNC_7(VAR_5);
 VAR_10 = VAR_5->fh_dentry;
 VAR_11 = FUNC_12(VAR_6, VAR_10, VAR_7);
 VAR_14 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11))
  goto out_nfserr;

 VAR_14 = FUNC_14(FUNC_3(VAR_10), VAR_11, VAR_8);
 VAR_12 = FUNC_13(VAR_14);
 if (!VAR_12)
  VAR_12 = FUNC_13(FUNC_2(VAR_5));
 FUNC_8(VAR_5);

 FUNC_6(VAR_5);

 VAR_13 = FUNC_5(VAR_9, VAR_5->fh_export, VAR_11, VAR_5);
 FUNC_4(VAR_11);
 if (VAR_12==0) VAR_12 = VAR_13;
out:
 return VAR_12;

out_nfserr:
 VAR_12 = FUNC_13(VAR_14);
 goto out;
}
