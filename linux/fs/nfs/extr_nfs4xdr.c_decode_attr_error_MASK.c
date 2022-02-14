
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int int32_t ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_2, uint32_t *VAR_3, int32_t *VAR_4)
{
 __be32 *VAR_5;

 if (FUNC_2(VAR_3[0] & (VAR_1 - 1U)))
  return -VAR_0;
 if (FUNC_1(VAR_3[0] & VAR_1)) {
  VAR_5 = FUNC_3(VAR_2, 4);
  if (FUNC_2(!VAR_5))
   return -VAR_0;
  VAR_3[0] &= ~VAR_1;
  *VAR_4 = -FUNC_0(VAR_5);
 }
 return 0;
}
