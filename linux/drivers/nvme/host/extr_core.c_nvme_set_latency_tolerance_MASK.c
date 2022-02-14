
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nvme_ctrl {scalar_t__ ps_max_latency_us; } ;
struct device {int dummy; } ;
typedef int s32 ;




 scalar_t__ VAR_0 ;
 struct nvme_ctrl* FUNC_0 (struct device*) ;
 int FUNC_1 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, s32 VAR_2)
{
 struct nvme_ctrl *VAR_3 = FUNC_0(VAR_1);
 u64 VAR_4;

 switch (VAR_2) {
 case 128:
 case 129:
  VAR_4 = VAR_0;
  break;

 default:
  VAR_4 = VAR_2;
 }

 if (VAR_3->ps_max_latency_us != VAR_4) {
  VAR_3->ps_max_latency_us = VAR_4;
  FUNC_1(VAR_3);
 }
}
