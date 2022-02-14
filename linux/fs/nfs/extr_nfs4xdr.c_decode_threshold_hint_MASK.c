
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1,
      uint32_t *VAR_2,
      uint64_t *VAR_3,
      uint32_t VAR_4)
{
 __be32 *VAR_5;

 *VAR_3 = 0;
 if (FUNC_0(VAR_2[0] & VAR_4)) {
  VAR_5 = FUNC_3(VAR_1, 8);
  if (FUNC_1(!VAR_5))
   return -VAR_0;
  FUNC_2(VAR_5, VAR_3);
 }
 return 0;
}
