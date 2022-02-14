
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct tm {int tm_year; unsigned int tm_hour; unsigned int tm_min; unsigned int tm_sec; unsigned int tm_mon; unsigned int tm_mday; } ;
struct pqi_ctrl_info {int dummy; } ;
struct bmic_host_wellness_time {char* start_tag; char* time_tag; char* dont_write_tag; char* end_tag; void** time; int time_length; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct bmic_host_wellness_time*) ;
 struct bmic_host_wellness_time* FUNC_2 (size_t,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pqi_ctrl_info*,struct bmic_host_wellness_time*,size_t) ;
 int FUNC_5 (int,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int ,int,struct tm*) ;

__attribute__((used)) static int FUNC_7(
 struct pqi_ctrl_info *VAR_3)
{
 int VAR_4;
 struct bmic_host_wellness_time *VAR_5;
 size_t VAR_6;
 time64_t VAR_7;
 unsigned int VAR_8;
 struct tm VAR_9;

 VAR_6 = sizeof(*VAR_5);

 VAR_5 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->start_tag[0] = '<';
 VAR_5->start_tag[1] = 'H';
 VAR_5->start_tag[2] = 'W';
 VAR_5->start_tag[3] = '>';
 VAR_5->time_tag[0] = 'T';
 VAR_5->time_tag[1] = 'D';
 FUNC_5(sizeof(VAR_5->time),
  &VAR_5->time_length);

 VAR_7 = FUNC_3();
 FUNC_6(VAR_7, -VAR_2.tz_minuteswest * 60, &VAR_9);
 VAR_8 = VAR_9.tm_year + 1900;

 VAR_5->time[0] = FUNC_0(VAR_9.tm_hour);
 VAR_5->time[1] = FUNC_0(VAR_9.tm_min);
 VAR_5->time[2] = FUNC_0(VAR_9.tm_sec);
 VAR_5->time[3] = 0;
 VAR_5->time[4] = FUNC_0(VAR_9.tm_mon + 1);
 VAR_5->time[5] = FUNC_0(VAR_9.tm_mday);
 VAR_5->time[6] = FUNC_0(VAR_8 / 100);
 VAR_5->time[7] = FUNC_0(VAR_8 % 100);

 VAR_5->dont_write_tag[0] = 'D';
 VAR_5->dont_write_tag[1] = 'W';
 VAR_5->end_tag[0] = 'Z';
 VAR_5->end_tag[1] = 'Z';

 VAR_4 = FUNC_4(VAR_3, VAR_5, VAR_6);

 FUNC_1(VAR_5);

 return VAR_4;
}
