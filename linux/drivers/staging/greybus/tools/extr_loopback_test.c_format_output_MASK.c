
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct loopback_test {char* test_name; int size; int iteration_max; scalar_t__ use_async; scalar_t__ porcelain; } ;
struct loopback_results {int error; int request_min; int request_max; double request_avg; int request_jitter; int throughput_min; int throughput_max; double throughput_avg; int throughput_jitter; int latency_min; int latency_max; double latency_avg; int latency_jitter; int apbridge_unipro_latency_min; int apbridge_unipro_latency_max; double apbridge_unipro_latency_avg; int apbridge_unipro_latency_jitter; int gbphy_firmware_latency_min; int gbphy_firmware_latency_max; double gbphy_firmware_latency_avg; int gbphy_firmware_latency_jitter; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,...) ;

int FUNC_3(struct loopback_test *VAR_0,
    struct loopback_results *VAR_1,
    const char *VAR_2,
    char *VAR_3, int VAR_4,
    struct tm *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_3, 0x00, VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_4, "%u-%u-%u %u:%u:%u",
         VAR_5->tm_year + 1900, VAR_5->tm_mon + 1, VAR_5->tm_mday,
         VAR_5->tm_hour, VAR_5->tm_min, VAR_5->tm_sec);

 if (VAR_0->porcelain) {
  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   "\n test:\t\t\t%s\n path:\t\t\t%s\n size:\t\t\t%u\n iterations:\t\t%u\n errors:\t\t%u\n async:\t\t\t%s\n",
   VAR_0->test_name,
   VAR_2,
   VAR_0->size,
   VAR_0->iteration_max,
   VAR_1->error,
   VAR_0->use_async ? "Enabled" : "Disabled");

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   " requests per-sec:\tmin=%u, max=%u, average=%f, jitter=%u\n",
   VAR_1->request_min,
   VAR_1->request_max,
   VAR_1->request_avg,
   VAR_1->request_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   " ap-throughput B/s:\tmin=%u max=%u average=%f jitter=%u\n",
   VAR_1->throughput_min,
   VAR_1->throughput_max,
   VAR_1->throughput_avg,
   VAR_1->throughput_jitter);
  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   " ap-latency usec:\tmin=%u max=%u average=%f jitter=%u\n",
   VAR_1->latency_min,
   VAR_1->latency_max,
   VAR_1->latency_avg,
   VAR_1->latency_jitter);
  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   " apbridge-latency usec:\tmin=%u max=%u average=%f jitter=%u\n",
   VAR_1->apbridge_unipro_latency_min,
   VAR_1->apbridge_unipro_latency_max,
   VAR_1->apbridge_unipro_latency_avg,
   VAR_1->apbridge_unipro_latency_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6,
   " gbphy-latency usec:\tmin=%u max=%u average=%f jitter=%u\n",
   VAR_1->gbphy_firmware_latency_min,
   VAR_1->gbphy_firmware_latency_max,
   VAR_1->gbphy_firmware_latency_avg,
   VAR_1->gbphy_firmware_latency_jitter);

 } else {
  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%s,%s,%u,%u,%u",
   VAR_0->test_name, VAR_2, VAR_0->size, VAR_0->iteration_max,
   VAR_1->error);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%u,%u,%f,%u",
   VAR_1->request_min,
   VAR_1->request_max,
   VAR_1->request_avg,
   VAR_1->request_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%u,%u,%f,%u",
   VAR_1->latency_min,
   VAR_1->latency_max,
   VAR_1->latency_avg,
   VAR_1->latency_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%u,%u,%f,%u",
   VAR_1->throughput_min,
   VAR_1->throughput_max,
   VAR_1->throughput_avg,
   VAR_1->throughput_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%u,%u,%f,%u",
   VAR_1->apbridge_unipro_latency_min,
   VAR_1->apbridge_unipro_latency_max,
   VAR_1->apbridge_unipro_latency_avg,
   VAR_1->apbridge_unipro_latency_jitter);

  VAR_6 += FUNC_2(&VAR_3[VAR_6], VAR_4 - VAR_6, ",%u,%u,%f,%u",
   VAR_1->gbphy_firmware_latency_min,
   VAR_1->gbphy_firmware_latency_max,
   VAR_1->gbphy_firmware_latency_avg,
   VAR_1->gbphy_firmware_latency_jitter);
 }

 FUNC_1("\n%s\n", VAR_3);

 return VAR_6;
}
