
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int time64_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct bnxt_coredump_record {int high_version; scalar_t__ ioctl_high_version; scalar_t__ ioctl_low_version; void* coredump_status; scalar_t__ asic_id2; void* asic_id1; void* end_utc_bias; void* end_second; void* end_minute; void* end_hour; void* end_day; void* end_month; void* end_year; int os_name; void* os_ver_minor; void* os_ver_major; void* total_segments; int commandline; void* utc_bias; void* second; void* minute; void* hour; void* day; void* month; void* year; int system_name; scalar_t__ asic_state; scalar_t__ low_version; scalar_t__ flags; int signature; } ;
struct TYPE_4__ {int chip_rev; int chip_metal; } ;
struct bnxt {int chip_num; TYPE_1__ ver_resp; } ;
typedef int s16 ;
struct TYPE_6__ {int tz_minuteswest; } ;
struct TYPE_5__ {int sysname; int release; int nodename; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct bnxt_coredump_record*,int ,int) ;
 int FUNC_5 (int ,char*,int*,int*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_8 (int ,int ,struct tm*) ;
 TYPE_2__* FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(struct bnxt *VAR_1, struct bnxt_coredump_record *VAR_2,
     time64_t VAR_3, s16 VAR_4, u16 VAR_5,
     int VAR_6)
{
 time64_t VAR_7 = FUNC_2();
 u32 VAR_8 = 0, VAR_9 = 0;
 struct tm VAR_10;

 FUNC_8(VAR_3, 0, &VAR_10);
 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 FUNC_3(VAR_2->signature, "cOrE", 4);
 VAR_2->flags = 0;
 VAR_2->low_version = 0;
 VAR_2->high_version = 1;
 VAR_2->asic_state = 0;
 FUNC_7(VAR_2->system_name, FUNC_9()->nodename,
  sizeof(VAR_2->system_name));
 VAR_2->year = FUNC_0(VAR_10.tm_year + 1900);
 VAR_2->month = FUNC_0(VAR_10.tm_mon + 1);
 VAR_2->day = FUNC_0(VAR_10.tm_mday);
 VAR_2->hour = FUNC_0(VAR_10.tm_hour);
 VAR_2->minute = FUNC_0(VAR_10.tm_min);
 VAR_2->second = FUNC_0(VAR_10.tm_sec);
 VAR_2->utc_bias = FUNC_0(VAR_4);
 FUNC_6(VAR_2->commandline, "ethtool -w");
 VAR_2->total_segments = FUNC_1(VAR_5);

 FUNC_5(FUNC_9()->release, "%u.%u", &VAR_8, &VAR_9);
 VAR_2->os_ver_major = FUNC_1(VAR_8);
 VAR_2->os_ver_minor = FUNC_1(VAR_9);

 FUNC_7(VAR_2->os_name, FUNC_9()->sysname, 32);
 FUNC_8(VAR_7, 0, &VAR_10);
 VAR_2->end_year = FUNC_0(VAR_10.tm_year + 1900);
 VAR_2->end_month = FUNC_0(VAR_10.tm_mon + 1);
 VAR_2->end_day = FUNC_0(VAR_10.tm_mday);
 VAR_2->end_hour = FUNC_0(VAR_10.tm_hour);
 VAR_2->end_minute = FUNC_0(VAR_10.tm_min);
 VAR_2->end_second = FUNC_0(VAR_10.tm_sec);
 VAR_2->end_utc_bias = FUNC_0(VAR_0.tz_minuteswest * 60);
 VAR_2->asic_id1 = FUNC_1(VAR_1->chip_num << 16 |
           VAR_1->ver_resp.chip_rev << 8 |
           VAR_1->ver_resp.chip_metal);
 VAR_2->asic_id2 = 0;
 VAR_2->coredump_status = FUNC_1(VAR_6);
 VAR_2->ioctl_low_version = 0;
 VAR_2->ioctl_high_version = 0;
}
