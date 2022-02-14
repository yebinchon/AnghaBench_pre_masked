
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {void* tm_hour; void* tm_min; void* tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(u32 VAR_3, struct rtc_time *VAR_4)
{
 VAR_4->tm_sec = FUNC_1(FUNC_0(VAR_2, VAR_3));
 VAR_4->tm_min = FUNC_1(FUNC_0(VAR_1, VAR_3));
 VAR_4->tm_hour = FUNC_1(FUNC_0(VAR_0, VAR_3));
}
