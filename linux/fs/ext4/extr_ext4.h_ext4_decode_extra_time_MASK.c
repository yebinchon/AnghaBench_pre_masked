
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct timespec64 *VAR_3,
       __le32 VAR_4)
{
 if (FUNC_2(VAR_4 & FUNC_0(VAR_1)))
  VAR_3->tv_sec += (u64)(FUNC_1(VAR_4) & VAR_1) << 32;
 VAR_3->tv_nsec = (FUNC_1(VAR_4) & VAR_2) >> VAR_0;
}
