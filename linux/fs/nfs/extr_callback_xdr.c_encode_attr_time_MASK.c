
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_1, const struct timespec *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_3(VAR_1, 12);
 if (FUNC_1(!VAR_3))
  return FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_3, VAR_2->tv_sec);
 *VAR_3 = FUNC_0(VAR_2->tv_nsec);
 return 0;
}
