
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 __be32 *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_5 = FUNC_3(VAR_2, 8);
 if (FUNC_2(!VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_5++);
 VAR_7 = FUNC_0(VAR_5);
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
 return 0;
}
