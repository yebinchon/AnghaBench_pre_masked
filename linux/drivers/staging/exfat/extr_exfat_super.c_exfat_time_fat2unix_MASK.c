
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct date_time_t {int MilliSecond; int Second; int Minute; int Hour; int Day; scalar_t__ Month; scalar_t__ Year; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct timespec64 *VAR_1, struct date_time_t *VAR_2)
{
 VAR_1->tv_sec = FUNC_0(VAR_2->Year + 1980, VAR_2->Month + 1, VAR_2->Day,
         VAR_2->Hour, VAR_2->Minute, VAR_2->Second);

 VAR_1->tv_nsec = VAR_2->MilliSecond * VAR_0;
}
