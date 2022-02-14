
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int const*,size_t) ;

__attribute__((used)) static __be32 FUNC_2(struct xdr_stream *VAR_1, const uint32_t *VAR_2, size_t VAR_3)
{
 if (FUNC_1(VAR_1, VAR_2, VAR_3) < 0)
  return FUNC_0(VAR_0);
 return 0;
}
