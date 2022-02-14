
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,unsigned int*,char**) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1, void *VAR_2)
{
 __be32 *VAR_3;
 unsigned int VAR_4;
 char *VAR_5;

 VAR_3 = FUNC_2(VAR_1, 12);
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 return FUNC_0(VAR_1, &VAR_4, &VAR_5);
}
