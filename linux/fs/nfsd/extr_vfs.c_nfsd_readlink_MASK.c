
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; TYPE_2__* fh_export; } ;
struct path {int dentry; int mnt; } ;
typedef int __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_6 (char*,char const*,int) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct path*) ;
 scalar_t__ FUNC_10 (int) ;
 char* FUNC_11 (int ,int *) ;

__be32
FUNC_12(struct svc_rqst *VAR_4, struct svc_fh *VAR_5, char *VAR_6, int *VAR_7)
{
 __be32 VAR_8;
 const char *VAR_9;
 struct path VAR_10;
 FUNC_0(VAR_2);
 int VAR_11;

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_1, VAR_0);
 if (FUNC_10(VAR_8))
  return VAR_8;

 VAR_10.mnt = VAR_5->fh_export->ex_path.mnt;
 VAR_10.dentry = VAR_5->fh_dentry;

 if (FUNC_10(!FUNC_3(VAR_10.dentry)))
  return VAR_3;

 FUNC_9(&VAR_10);

 VAR_9 = FUNC_11(VAR_10.dentry, &VAR_2);
 if (FUNC_1(VAR_9))
  return FUNC_7(FUNC_2(VAR_9));

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11 < *VAR_7)
  *VAR_7 = VAR_11;
 FUNC_6(VAR_6, VAR_9, *VAR_7);
 FUNC_4(&VAR_2);
 return 0;
}
