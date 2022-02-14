
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {scalar_t__ fh_export; int fh_dentry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct svc_fh*) ;

__attribute__((used)) static inline void
FUNC_3(struct svc_fh *VAR_0, struct svc_fh *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_1->fh_dentry);
 if (VAR_1->fh_export)
  FUNC_1(VAR_1->fh_export);
 *VAR_0 = *VAR_1;
}
