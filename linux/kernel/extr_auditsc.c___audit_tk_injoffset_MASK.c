
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,long long,int ) ;

void FUNC_2(struct timespec64 VAR_2)
{
 FUNC_1(FUNC_0(), VAR_1, VAR_0,
    "sec=%lli nsec=%li",
    (long long)VAR_2.tv_sec, VAR_2.tv_nsec);
}
