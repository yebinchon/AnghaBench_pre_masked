
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_diropres* rq_resp; struct nfsd3_mknodargs* rq_argp; } ;
struct nfsd3_mknodargs {size_t ftype; scalar_t__ major; scalar_t__ minor; int attrs; int len; int name; int fh; } ;
struct nfsd3_diropres {int dirfh; int fh; } ;
typedef int dev_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int* VAR_6 ;
 int FUNC_9 (struct svc_rqst*,int *,int ,int ,int *,int,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static __be32
FUNC_10(struct svc_rqst *VAR_8)
{
 struct nfsd3_mknodargs *VAR_9 = VAR_8->rq_argp;
 struct nfsd3_diropres *VAR_10 = VAR_8->rq_resp;
 __be32 VAR_11;
 int VAR_12;
 dev_t VAR_13 = 0;

 FUNC_5("nfsd: MKNOD(3)    %s %.*s\n",
    FUNC_4(&VAR_9->fh),
    VAR_9->len,
    VAR_9->name);

 FUNC_6(&VAR_10->dirfh, &VAR_9->fh);
 FUNC_7(&VAR_10->fh, VAR_5);

 if (VAR_9->ftype == 0 || VAR_9->ftype >= VAR_0)
  FUNC_3(VAR_7);
 if (VAR_9->ftype == VAR_2 || VAR_9->ftype == VAR_1) {
  VAR_13 = FUNC_2(VAR_9->major, VAR_9->minor);
  if (FUNC_0(VAR_13) != VAR_9->major ||
      FUNC_1(VAR_13) != VAR_9->minor)
   FUNC_3(VAR_7);
 } else
  if (VAR_9->ftype != VAR_4 && VAR_9->ftype != VAR_3)
   FUNC_3(VAR_7);

 VAR_12 = VAR_6[VAR_9->ftype];
 VAR_11 = FUNC_9(VAR_8, &VAR_10->dirfh, VAR_9->name, VAR_9->len,
        &VAR_9->attrs, VAR_12, VAR_13, &VAR_10->fh);
 FUNC_8(&VAR_10->dirfh);
 FUNC_3(VAR_11);
}
