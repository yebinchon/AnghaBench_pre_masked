
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fh_dentry; } ;
typedef TYPE_1__ svc_fh ;
struct svc_rqst {struct nfsd3_getaclres* rq_resp; struct nfsd3_getaclargs* rq_argp; } ;
struct posix_acl {int dummy; } ;
struct nfsd3_getaclres {int mask; struct posix_acl* acl_default; struct posix_acl* acl_access; int fh; } ;
struct nfsd3_getaclargs {int mask; int fh; } ;
struct inode {int i_mode; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (scalar_t__) ;
 struct inode* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,int *,int ,int ) ;
 struct posix_acl* FUNC_6 (struct inode*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 struct posix_acl* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct posix_acl*) ;

__attribute__((used)) static __be32 FUNC_10(struct svc_rqst *VAR_10)
{
 struct nfsd3_getaclargs *VAR_11 = VAR_10->rq_argp;
 struct nfsd3_getaclres *VAR_12 = VAR_10->rq_resp;
 struct posix_acl *VAR_13;
 struct inode *VAR_14;
 svc_fh *VAR_15;
 __be32 VAR_16 = 0;

 VAR_15 = FUNC_4(&VAR_12->fh, &VAR_11->fh);
 VAR_16 = FUNC_5(VAR_10, &VAR_12->fh, 0, VAR_3);
 if (VAR_16)
  FUNC_2(VAR_16);

 VAR_14 = FUNC_3(VAR_15->fh_dentry);

 if (VAR_11->mask & ~VAR_6)
  FUNC_2(VAR_9);
 VAR_12->mask = VAR_11->mask;

 if (VAR_12->mask & (VAR_4|VAR_5)) {
  VAR_13 = FUNC_6(VAR_14, VAR_0);
  if (VAR_13 == ((void*)0)) {

   VAR_13 = FUNC_8(VAR_14->i_mode, VAR_2);
  }
  if (FUNC_0(VAR_13)) {
   VAR_16 = FUNC_7(FUNC_1(VAR_13));
   goto fail;
  }
  VAR_12->acl_access = VAR_13;
 }
 if (VAR_12->mask & (VAR_7|VAR_8)) {


  VAR_13 = FUNC_6(VAR_14, VAR_1);
  if (FUNC_0(VAR_13)) {
   VAR_16 = FUNC_7(FUNC_1(VAR_13));
   goto fail;
  }
  VAR_12->acl_default = VAR_13;
 }


 FUNC_2(0);

fail:
 FUNC_9(VAR_12->acl_access);
 FUNC_9(VAR_12->acl_default);
 FUNC_2(VAR_16);
}
