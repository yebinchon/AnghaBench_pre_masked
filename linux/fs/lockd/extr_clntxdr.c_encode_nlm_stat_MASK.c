
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_1,
       const __be32 VAR_2)
{
 __be32 *VAR_3;

 FUNC_0(FUNC_1(VAR_2) > VAR_0);
 VAR_3 = FUNC_2(VAR_1, 4);
 *VAR_3 = VAR_2;
}
