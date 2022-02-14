
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct hwrm_fw_set_time_input {int second; int minute; int hour; int day; scalar_t__ month; int year; int member_0; } ;
struct bnxt {int hwrm_spec_code; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*,struct hwrm_fw_set_time_input*,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bnxt*,struct hwrm_fw_set_time_input*,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,struct tm*) ;

int FUNC_6(struct bnxt *VAR_3)
{
 struct hwrm_fw_set_time_input VAR_4 = {0};
 struct tm VAR_5;
 time64_t VAR_6 = FUNC_4();

 if ((FUNC_0(VAR_3) && VAR_3->hwrm_spec_code < 0x10901) ||
     VAR_3->hwrm_spec_code < 0x10400)
  return -VAR_0;

 FUNC_5(VAR_6, 0, &VAR_5);
 FUNC_1(VAR_3, &VAR_4, VAR_2, -1, -1);
 VAR_4.year = FUNC_2(1900 + VAR_5.tm_year);
 VAR_4.month = 1 + VAR_5.tm_mon;
 VAR_4.day = VAR_5.tm_mday;
 VAR_4.hour = VAR_5.tm_hour;
 VAR_4.minute = VAR_5.tm_min;
 VAR_4.second = VAR_5.tm_sec;
 return FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4), VAR_1);
}
