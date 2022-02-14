
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,scalar_t__ const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct xdr_stream *VAR_0,
  const __u32 *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;


 while (VAR_2 > 0 && VAR_1[VAR_2-1] == 0)
  VAR_2--;
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3 < 0))
  return VAR_3;
 return VAR_2;
}
