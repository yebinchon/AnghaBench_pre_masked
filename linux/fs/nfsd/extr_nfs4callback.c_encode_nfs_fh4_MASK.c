
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct knfsd_fh {scalar_t__ fh_size; int fh_base; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_1, const struct knfsd_fh *VAR_2)
{
 u32 VAR_3 = VAR_2->fh_size;
 __be32 *VAR_4;

 FUNC_0(VAR_3 > VAR_0);
 VAR_4 = FUNC_2(VAR_1, 4 + VAR_3);
 FUNC_1(VAR_4, &VAR_2->fh_base, VAR_3);
}
