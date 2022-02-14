
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int dev_t ;
typedef void* __be32 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 void* FUNC_2 (int ) ;
 void** FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_0, const dev_t VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_3(VAR_0, 8);
 *VAR_2++ = FUNC_2(FUNC_0(VAR_1));
 *VAR_2 = FUNC_2(FUNC_1(VAR_1));
}
