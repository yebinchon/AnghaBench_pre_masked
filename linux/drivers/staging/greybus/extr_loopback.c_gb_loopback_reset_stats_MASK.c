
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_loopback_stats {int min; } ;
struct gb_loopback {int ts; scalar_t__ gbphy_latency_ts; scalar_t__ apbridge_latency_ts; int gbphy_firmware_latency; int apbridge_unipro_latency; int requests_per_second; int throughput; int latency; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct gb_loopback_stats*,int) ;

__attribute__((used)) static void FUNC_2(struct gb_loopback *VAR_1)
{
 struct gb_loopback_stats VAR_2 = {
  .min = VAR_0,
 };


 FUNC_1(&VAR_1->latency, &VAR_2,
        sizeof(struct gb_loopback_stats));
 FUNC_1(&VAR_1->throughput, &VAR_2,
        sizeof(struct gb_loopback_stats));
 FUNC_1(&VAR_1->requests_per_second, &VAR_2,
        sizeof(struct gb_loopback_stats));
 FUNC_1(&VAR_1->apbridge_unipro_latency, &VAR_2,
        sizeof(struct gb_loopback_stats));
 FUNC_1(&VAR_1->gbphy_firmware_latency, &VAR_2,
        sizeof(struct gb_loopback_stats));


 VAR_1->apbridge_latency_ts = 0;
 VAR_1->gbphy_latency_ts = 0;
 VAR_1->ts = FUNC_0(0, 0);
}
