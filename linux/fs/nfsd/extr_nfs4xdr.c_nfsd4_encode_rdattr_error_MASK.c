
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 *
FUNC_2(struct xdr_stream *VAR_1, __be32 VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 20);
 if (!VAR_3)
  return ((void*)0);
 *VAR_3++ = FUNC_0(2);
 *VAR_3++ = FUNC_0(VAR_0);
 *VAR_3++ = FUNC_0(0);

 *VAR_3++ = FUNC_0(4);
 *VAR_3++ = VAR_2;
 return VAR_3;
}
