
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hisi_pmu {int counter_bits; int on_cpu; int check_event; int * dev; int * ops; int num_counters; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct hisi_pmu*) ;
 int FUNC_1 (struct hisi_pmu*,struct platform_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2,
      struct hisi_pmu *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->num_counters = VAR_0;
 VAR_3->counter_bits = 48;
 VAR_3->ops = &VAR_1;
 VAR_3->dev = &VAR_2->dev;
 VAR_3->on_cpu = -1;
 VAR_3->check_event = 0x65;

 return 0;
}
