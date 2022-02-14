
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct arm_smccc_res VAR_4;


 FUNC_0(VAR_0, VAR_1,
        ((VAR_3->tm_year + 1900) << 16) | (VAR_3->tm_mon + 1),
        (VAR_3->tm_mday << 16) | VAR_3->tm_hour,
        (VAR_3->tm_min << 16) | VAR_3->tm_sec,
        0, 0, 0, &VAR_4);

 return VAR_4.a0;
}
