
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static __be32 *FUNC_1(__be32 *VAR_1, const struct timespec *VAR_2)
{
 *VAR_1++ = FUNC_0(VAR_2->tv_sec);
 if (VAR_2->tv_nsec != 0)
  *VAR_1++ = FUNC_0(VAR_2->tv_nsec / VAR_0);
 else
  *VAR_1++ = FUNC_0(0);
 return VAR_1;
}
