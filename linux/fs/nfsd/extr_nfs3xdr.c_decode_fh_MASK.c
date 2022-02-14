
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fh_size; int fh_base; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct svc_fh*,unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static __be32 *
FUNC_4(__be32 *VAR_1, struct svc_fh *VAR_2)
{
 unsigned int VAR_3;
 FUNC_1(VAR_2, VAR_0);
 VAR_3 = FUNC_3(*VAR_1++);
 if (VAR_3 > VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_2->fh_handle.fh_base, VAR_1, VAR_3);
 VAR_2->fh_handle.fh_size = VAR_3;
 return VAR_1 + FUNC_0(VAR_3);
}
