
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct xdr_netobj {scalar_t__ len; int data; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,void*,int ) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_2,
    struct xdr_netobj *VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, (void *)&VAR_3->data,
      VAR_1);
 if (FUNC_0(VAR_4 < 0))
  return -VAR_0;
 VAR_3->len = VAR_4;
 return 0;
}
