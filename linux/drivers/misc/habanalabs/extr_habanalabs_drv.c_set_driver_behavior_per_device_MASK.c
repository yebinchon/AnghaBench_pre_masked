
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int mmu_enable; int cpu_enable; int fw_loading; int cpu_queues_enable; int heartbeat; scalar_t__ reset_pcilink; } ;



__attribute__((used)) static void FUNC_0(struct hl_device *VAR_0)
{
 VAR_0->mmu_enable = 1;
 VAR_0->cpu_enable = 1;
 VAR_0->fw_loading = 1;
 VAR_0->cpu_queues_enable = 1;
 VAR_0->heartbeat = 1;

 VAR_0->reset_pcilink = 0;
}
