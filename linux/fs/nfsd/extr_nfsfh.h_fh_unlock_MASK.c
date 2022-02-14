
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int fh_locked; int fh_dentry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_fh*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct svc_fh *VAR_0)
{
 if (VAR_0->fh_locked) {
  FUNC_1(VAR_0);
  FUNC_2(FUNC_0(VAR_0->fh_dentry));
  VAR_0->fh_locked = 0;
 }
}
