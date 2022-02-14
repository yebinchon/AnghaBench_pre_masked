
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (struct svc_rqst*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline __be32 FUNC_4(struct svc_rqst *VAR_3,
 struct dentry *VAR_4, struct svc_export *VAR_5)
{
 if (!(VAR_5->ex_flags & VAR_0))
  return VAR_1;






 if (!FUNC_2(VAR_3))
  return VAR_2;




 if (FUNC_3(!FUNC_0(VAR_4) &&
       !FUNC_1(VAR_4)))
  return VAR_2;





 if (FUNC_3(VAR_4 != VAR_5->ex_path.dentry))
  return VAR_2;
 return VAR_1;
}
