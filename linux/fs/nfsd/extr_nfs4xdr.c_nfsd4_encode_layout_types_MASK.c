
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static inline __be32
FUNC_3(struct xdr_stream *VAR_3, u32 VAR_4)
{
 __be32 *VAR_5;
 unsigned long VAR_6 = FUNC_1(VAR_4);

 VAR_5 = FUNC_2(VAR_3, 4 + 4 * VAR_6);
 if (!VAR_5)
  return VAR_2;

 *VAR_5++ = FUNC_0(VAR_6);

 for (VAR_6 = VAR_0; VAR_6 < VAR_1; ++VAR_6)
  if (VAR_4 & (1 << VAR_6))
   *VAR_5++ = FUNC_0(VAR_6);

 return 0;
}
