
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 void** FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0, u32 VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 8);
 *VAR_2++ = FUNC_0(VAR_1);
 *VAR_2 = FUNC_0(0);
}
