
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_loopback {int gbphy_latency_ts; int gbphy_firmware_latency; int apbridge_latency_ts; int apbridge_unipro_latency; int kfifo_lat; int latency; int elapsed_nsecs; } ;
typedef int lat ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(struct gb_loopback *VAR_0)
{
 u32 VAR_1;


 VAR_1 = FUNC_0(VAR_0->elapsed_nsecs);


 FUNC_1(&VAR_0->latency, VAR_1);


 FUNC_2(&VAR_0->kfifo_lat, (unsigned char *)&VAR_1, sizeof(VAR_1));


 FUNC_1(&VAR_0->apbridge_unipro_latency,
     VAR_0->apbridge_latency_ts);
 FUNC_1(&VAR_0->gbphy_firmware_latency,
     VAR_0->gbphy_latency_ts);
}
