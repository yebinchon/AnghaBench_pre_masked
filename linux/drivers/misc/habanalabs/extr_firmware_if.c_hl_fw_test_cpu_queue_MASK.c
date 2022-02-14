
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int test_pkt ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct armcp_packet {int value; int ctl; } ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,long*) ;} ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hl_device*,int *,int,int ,long*) ;

int FUNC_5(struct hl_device *VAR_4)
{
 struct armcp_packet VAR_5 = {};
 long VAR_6;
 int VAR_7;

 VAR_5.ctl = FUNC_0(VAR_1 <<
     VAR_2);
 VAR_5.value = FUNC_1(VAR_0);

 VAR_7 = VAR_4->asic_funcs->send_cpu_message(VAR_4, (u32 *) &VAR_5,
   sizeof(VAR_5), VAR_3, &VAR_6);

 if (!VAR_7) {
  if (VAR_6 == VAR_0)
   FUNC_3(VAR_4->dev,
    "queue test on CPU queue succeeded\n");
  else
   FUNC_2(VAR_4->dev,
    "CPU queue test failed (0x%08lX)\n", VAR_6);
 } else {
  FUNC_2(VAR_4->dev, "CPU queue test failed, error %d\n", VAR_7);
 }

 return VAR_7;
}
