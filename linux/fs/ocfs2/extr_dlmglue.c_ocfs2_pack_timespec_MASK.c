
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_1(struct timespec64 *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5 = FUNC_0(VAR_2, VAR_3->tv_sec, 0, 0x3ffffffffull);
 u32 VAR_6 = VAR_3->tv_nsec;

 VAR_4 = (VAR_5 << VAR_1) | (VAR_6 & VAR_0);

 return VAR_4;
}
