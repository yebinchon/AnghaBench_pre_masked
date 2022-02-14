
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kp2000_device {int ssid; TYPE_1__* pdev; scalar_t__ sysinfo_regs_base; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kp2000_device *VAR_3)
{
 u64 VAR_4 = FUNC_2(VAR_3->sysinfo_regs_base + VAR_1);
 unsigned long VAR_5;

 if (VAR_4 & 0x8000000000000000UL) {
  VAR_3->ssid = VAR_4;
  return;
 }

 VAR_5 = VAR_2 + (VAR_0 * 2);
 do {
  VAR_4 = FUNC_2(VAR_3->sysinfo_regs_base + VAR_1);
  if (VAR_4 & 0x8000000000000000UL) {
   VAR_3->ssid = VAR_4;
   return;
  }
  FUNC_0();

 } while (FUNC_3(VAR_2, VAR_5));

 FUNC_1(&VAR_3->pdev->dev, "SSID didn't show up!\n");



 VAR_3->ssid = 0;
}
