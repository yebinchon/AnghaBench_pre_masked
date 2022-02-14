
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_1, void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4 < 0))
  return -VAR_0;
 return 0;
}
