
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_results {void* gbphy_firmware_latency_min; void* gbphy_firmware_latency_max; void* gbphy_firmware_latency_jitter; void* apbridge_unipro_latency_min; void* apbridge_unipro_latency_max; void* apbridge_unipro_latency_jitter; void* throughput_min; void* throughput_max; void* throughput_jitter; void* latency_min; void* latency_max; void* latency_jitter; void* request_min; void* request_max; void* request_jitter; void* gbphy_firmware_latency_avg; void* apbridge_unipro_latency_avg; void* throughput_avg; void* latency_avg; void* request_avg; void* error; } ;
struct loopback_test {int device_count; struct loopback_results aggregate_results; scalar_t__ aggregate_output; struct loopback_device* devices; } ;
struct loopback_device {int sysfs_entry; struct loopback_results results; } ;


 int FUNC_0 (struct loopback_test*,int) ;
 void* FUNC_1 (struct loopback_test*) ;
 void* FUNC_2 (struct loopback_test*) ;
 void* FUNC_3 (struct loopback_test*) ;
 void* FUNC_4 (struct loopback_test*) ;
 void* FUNC_5 (struct loopback_test*) ;
 void* FUNC_6 (struct loopback_test*) ;
 void* FUNC_7 (struct loopback_test*) ;
 void* FUNC_8 (struct loopback_test*) ;
 void* FUNC_9 (struct loopback_test*) ;
 void* FUNC_10 (struct loopback_test*) ;
 void* FUNC_11 (struct loopback_test*) ;
 void* FUNC_12 (struct loopback_test*) ;
 void* FUNC_13 (struct loopback_test*) ;
 void* FUNC_14 (struct loopback_test*) ;
 void* FUNC_15 (struct loopback_test*) ;
 void* FUNC_16 (int ,char*) ;
 void* FUNC_17 (int ,char*) ;

__attribute__((used)) static int FUNC_18(struct loopback_test *VAR_0)
{
 struct loopback_device *VAR_1;
 struct loopback_results *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->device_count; VAR_3++) {
  if (!FUNC_0(VAR_0, VAR_3))
   continue;

  VAR_1 = &VAR_0->devices[VAR_3];
  VAR_2 = &VAR_1->results;

  VAR_2->error = FUNC_17(VAR_1->sysfs_entry, "error");
  VAR_2->request_min = FUNC_17(VAR_1->sysfs_entry, "requests_per_second_min");
  VAR_2->request_max = FUNC_17(VAR_1->sysfs_entry, "requests_per_second_max");
  VAR_2->request_avg = FUNC_16(VAR_1->sysfs_entry, "requests_per_second_avg");

  VAR_2->latency_min = FUNC_17(VAR_1->sysfs_entry, "latency_min");
  VAR_2->latency_max = FUNC_17(VAR_1->sysfs_entry, "latency_max");
  VAR_2->latency_avg = FUNC_16(VAR_1->sysfs_entry, "latency_avg");

  VAR_2->throughput_min = FUNC_17(VAR_1->sysfs_entry, "throughput_min");
  VAR_2->throughput_max = FUNC_17(VAR_1->sysfs_entry, "throughput_max");
  VAR_2->throughput_avg = FUNC_16(VAR_1->sysfs_entry, "throughput_avg");

  VAR_2->apbridge_unipro_latency_min =
   FUNC_17(VAR_1->sysfs_entry, "apbridge_unipro_latency_min");
  VAR_2->apbridge_unipro_latency_max =
   FUNC_17(VAR_1->sysfs_entry, "apbridge_unipro_latency_max");
  VAR_2->apbridge_unipro_latency_avg =
   FUNC_16(VAR_1->sysfs_entry, "apbridge_unipro_latency_avg");

  VAR_2->gbphy_firmware_latency_min =
   FUNC_17(VAR_1->sysfs_entry, "gbphy_firmware_latency_min");
  VAR_2->gbphy_firmware_latency_max =
   FUNC_17(VAR_1->sysfs_entry, "gbphy_firmware_latency_max");
  VAR_2->gbphy_firmware_latency_avg =
   FUNC_16(VAR_1->sysfs_entry, "gbphy_firmware_latency_avg");

  VAR_2->request_jitter = VAR_2->request_max - VAR_2->request_min;
  VAR_2->latency_jitter = VAR_2->latency_max - VAR_2->latency_min;
  VAR_2->throughput_jitter = VAR_2->throughput_max - VAR_2->throughput_min;
  VAR_2->apbridge_unipro_latency_jitter =
   VAR_2->apbridge_unipro_latency_max - VAR_2->apbridge_unipro_latency_min;
  VAR_2->gbphy_firmware_latency_jitter =
   VAR_2->gbphy_firmware_latency_max - VAR_2->gbphy_firmware_latency_min;

 }


 if (VAR_0->aggregate_output) {
  VAR_2 = &VAR_0->aggregate_results;

  VAR_2->request_min = FUNC_12(VAR_0);
  VAR_2->request_max = FUNC_11(VAR_0);
  VAR_2->request_avg = FUNC_10(VAR_0);

  VAR_2->latency_min = FUNC_9(VAR_0);
  VAR_2->latency_max = FUNC_8(VAR_0);
  VAR_2->latency_avg = FUNC_7(VAR_0);

  VAR_2->throughput_min = FUNC_15(VAR_0);
  VAR_2->throughput_max = FUNC_14(VAR_0);
  VAR_2->throughput_avg = FUNC_13(VAR_0);

  VAR_2->apbridge_unipro_latency_min =
   FUNC_3(VAR_0);
  VAR_2->apbridge_unipro_latency_max =
   FUNC_2(VAR_0);
  VAR_2->apbridge_unipro_latency_avg =
   FUNC_1(VAR_0);

  VAR_2->gbphy_firmware_latency_min =
   FUNC_6(VAR_0);
  VAR_2->gbphy_firmware_latency_max =
   FUNC_5(VAR_0);
  VAR_2->gbphy_firmware_latency_avg =
   FUNC_4(VAR_0);

  VAR_2->request_jitter = VAR_2->request_max - VAR_2->request_min;
  VAR_2->latency_jitter = VAR_2->latency_max - VAR_2->latency_min;
  VAR_2->throughput_jitter = VAR_2->throughput_max - VAR_2->throughput_min;
  VAR_2->apbridge_unipro_latency_jitter =
   VAR_2->apbridge_unipro_latency_max - VAR_2->apbridge_unipro_latency_min;
  VAR_2->gbphy_firmware_latency_jitter =
   VAR_2->gbphy_firmware_latency_max - VAR_2->gbphy_firmware_latency_min;

 }

 return 0;
}
