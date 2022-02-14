
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fh_dentry; } ;
typedef TYPE_1__ svc_fh ;
struct svc_rqst {struct nfsd_attrstat* rq_resp; struct nfsd3_setaclargs* rq_argp; } ;
struct nfsd_attrstat {int stat; int fh; } ;
struct nfsd3_setaclargs {int acl_default; int acl_access; int fh; } ;
struct inode {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct inode*,int ,int ) ;

__attribute__((used)) static __be32 FUNC_13(struct svc_rqst *VAR_3)
{
 struct nfsd3_setaclargs *VAR_4 = VAR_3->rq_argp;
 struct nfsd_attrstat *VAR_5 = VAR_3->rq_resp;
 struct inode *VAR_6;
 svc_fh *VAR_7;
 __be32 VAR_8 = 0;
 int VAR_9;

 FUNC_2("nfsd: SETACL(2acl)   %s\n", FUNC_0(&VAR_4->fh));

 VAR_7 = FUNC_3(&VAR_5->fh, &VAR_4->fh);
 VAR_8 = FUNC_8(VAR_3, &VAR_5->fh, 0, VAR_2);
 if (VAR_8)
  goto out;

 VAR_6 = FUNC_1(VAR_7->fh_dentry);

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  goto out_errno;

 FUNC_6(VAR_7);

 VAR_9 = FUNC_12(VAR_6, VAR_0, VAR_4->acl_access);
 if (VAR_9)
  goto out_drop_lock;
 VAR_9 = FUNC_12(VAR_6, VAR_1, VAR_4->acl_default);
 if (VAR_9)
  goto out_drop_lock;

 FUNC_7(VAR_7);

 FUNC_4(VAR_7);

 VAR_8 = FUNC_5(VAR_7, &VAR_5->stat);

out:


 FUNC_11(VAR_4->acl_access);
 FUNC_11(VAR_4->acl_default);
 return VAR_8;
out_drop_lock:
 FUNC_7(VAR_7);
 FUNC_4(VAR_7);
out_errno:
 VAR_8 = FUNC_10(VAR_9);
 goto out;
}
