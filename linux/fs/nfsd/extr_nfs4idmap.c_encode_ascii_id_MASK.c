
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int * FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_3(struct xdr_stream *VAR_1, u32 VAR_2)
{
 char VAR_3[11];
 int VAR_4;
 __be32 *VAR_5;

 VAR_4 = FUNC_0(VAR_3, "%u", VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_4 + 4);
 if (!VAR_5)
  return VAR_0;
 VAR_5 = FUNC_1(VAR_5, VAR_3, VAR_4);
 return 0;
}
