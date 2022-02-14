
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_2, const uint32_t *VAR_3, uint64_t VAR_4)
{
 __be32 *VAR_5;

 if (!(VAR_3[0] & VAR_0))
  return 0;
 VAR_5 = FUNC_3(VAR_2, 8);
 if (FUNC_1(!VAR_5))
  return FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_5, VAR_4);
 return 0;
}
