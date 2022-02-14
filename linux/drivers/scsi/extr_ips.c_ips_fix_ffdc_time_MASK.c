
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time64_t ;
struct tm {int tm_year; int tm_mday; scalar_t__ tm_mon; int tm_sec; int tm_min; int tm_hour; } ;
struct TYPE_5__ {int yearH; int yearL; int day; scalar_t__ month; int second; int minute; int hour; } ;
struct TYPE_6__ {TYPE_1__ ffdc; } ;
struct TYPE_7__ {TYPE_2__ cmd; } ;
typedef TYPE_3__ ips_scb_t ;
typedef int ips_ha_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,struct tm*) ;

__attribute__((used)) static void
FUNC_2(ips_ha_t * VAR_0, ips_scb_t * VAR_1, time64_t VAR_2)
{
 struct tm VAR_3;

 FUNC_0("ips_fix_ffdc_time", 1);

 FUNC_1(VAR_2, 0, &VAR_3);

 VAR_1->cmd.ffdc.hour = VAR_3.tm_hour;
 VAR_1->cmd.ffdc.minute = VAR_3.tm_min;
 VAR_1->cmd.ffdc.second = VAR_3.tm_sec;
 VAR_1->cmd.ffdc.yearH = (VAR_3.tm_year + 1900) / 100;
 VAR_1->cmd.ffdc.yearL = VAR_3.tm_year % 100;
 VAR_1->cmd.ffdc.month = VAR_3.tm_mon + 1;
 VAR_1->cmd.ffdc.day = VAR_3.tm_mday;
}
