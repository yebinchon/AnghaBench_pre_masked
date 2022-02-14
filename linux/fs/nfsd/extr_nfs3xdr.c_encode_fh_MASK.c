
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fh_size; int fh_base; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__*,int *,unsigned int) ;

__attribute__((used)) static __be32 *
FUNC_3(__be32 *VAR_0, struct svc_fh *VAR_1)
{
 unsigned int VAR_2 = VAR_1->fh_handle.fh_size;
 *VAR_0++ = FUNC_1(VAR_2);
 if (VAR_2) VAR_0[FUNC_0(VAR_2)-1]=0;
 FUNC_2(VAR_0, &VAR_1->fh_handle.fh_base, VAR_2);
 return VAR_0 + FUNC_0(VAR_2);
}
