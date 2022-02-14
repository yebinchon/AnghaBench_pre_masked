
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*,scalar_t__ const) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0, const char *VAR_1)
{
 const u32 VAR_2 = FUNC_0(VAR_1);
 __be32 *VAR_3;

 VAR_3 = FUNC_2(VAR_0, 4 + VAR_2);
 FUNC_1(VAR_3, VAR_1, VAR_2);
}
