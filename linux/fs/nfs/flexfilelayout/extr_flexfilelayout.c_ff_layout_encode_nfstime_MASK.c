
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
typedef int ktime_t ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 struct timespec64 FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void
FUNC_4(struct xdr_stream *VAR_0,
    ktime_t VAR_1)
{
 struct timespec64 VAR_2;
 __be32 *VAR_3;

 VAR_3 = FUNC_3(VAR_0, 12);
 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_3, VAR_2.tv_sec);
 *VAR_3++ = FUNC_0(VAR_2.tv_nsec);
}
