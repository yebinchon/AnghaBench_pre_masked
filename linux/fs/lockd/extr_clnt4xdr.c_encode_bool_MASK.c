
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (struct xdr_stream*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_2, const int VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_0(VAR_2, 4);
 *VAR_4 = VAR_3 ? VAR_0 : VAR_1;
}
