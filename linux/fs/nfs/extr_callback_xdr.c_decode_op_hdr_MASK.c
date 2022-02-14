
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_1, unsigned int *VAR_2)
{
 __be32 *VAR_3;
 VAR_3 = FUNC_3(VAR_1, 4);
 if (FUNC_2(VAR_3 == ((void*)0)))
  return FUNC_0(VAR_0);
 *VAR_2 = FUNC_1(*VAR_3);
 return 0;
}
