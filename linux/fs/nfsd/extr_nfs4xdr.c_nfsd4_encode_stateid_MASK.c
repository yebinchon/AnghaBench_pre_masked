
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int si_opaque; int si_generation; } ;
typedef TYPE_1__ stateid_t ;
typedef int stateid_opaque_t ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_3(struct xdr_stream *VAR_1, stateid_t *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_2(VAR_1, sizeof(stateid_t));
 if (!VAR_3)
  return VAR_0;
 *VAR_3++ = FUNC_0(VAR_2->si_generation);
 VAR_3 = FUNC_1(VAR_3, &VAR_2->si_opaque,
     sizeof(stateid_opaque_t));
 return 0;
}
