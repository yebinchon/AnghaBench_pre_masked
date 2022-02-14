
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knfsd_fh {int fh_size; int fh_base; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct knfsd_fh *VAR_0, struct knfsd_fh *VAR_1)
{
 VAR_0->fh_size = VAR_1->fh_size;
 FUNC_0(&VAR_0->fh_base, &VAR_1->fh_base, VAR_1->fh_size);
}
