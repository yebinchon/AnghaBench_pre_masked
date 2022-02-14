
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (struct xdr_stream*,int *,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct xdr_stream *VAR_2, uint32_t *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5 >= 0))
  return VAR_5;
 if (VAR_5 != -VAR_1)
  return -VAR_0;
 return VAR_4;
}
