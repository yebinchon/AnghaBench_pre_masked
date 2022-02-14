
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct timespec {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct timespec*) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct timespec *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1 << 2);
 if (FUNC_0(!VAR_4))
  return -VAR_0;
 FUNC_1(VAR_4, VAR_3);
 return 0;
}
