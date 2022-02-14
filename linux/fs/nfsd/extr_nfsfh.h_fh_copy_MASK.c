
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {scalar_t__ fh_locked; scalar_t__ fh_dentry; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline__ struct svc_fh *
FUNC_1(struct svc_fh *VAR_0, struct svc_fh *VAR_1)
{
 FUNC_0(VAR_1->fh_dentry || VAR_1->fh_locked);

 *VAR_0 = *VAR_1;
 return VAR_0;
}
