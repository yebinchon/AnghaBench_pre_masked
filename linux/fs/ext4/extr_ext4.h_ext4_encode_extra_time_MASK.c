
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
typedef int s32 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline __le32 FUNC_1(struct timespec64 *VAR_2)
{
 u32 VAR_3 =((VAR_2->tv_sec - (s32)VAR_2->tv_sec) >> 32) & VAR_1;
 return FUNC_0(VAR_3 | (VAR_2->tv_nsec << VAR_0));
}
