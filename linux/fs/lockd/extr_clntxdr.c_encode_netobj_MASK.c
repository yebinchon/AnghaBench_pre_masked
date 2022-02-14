
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int const*,unsigned int const) ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0,
     const u8 *VAR_1, const unsigned int VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_0, 4 + VAR_2);
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
