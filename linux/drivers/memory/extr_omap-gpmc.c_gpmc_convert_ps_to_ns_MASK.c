
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int cs_on; int cs_rd_off; int cs_wr_off; int adv_on; int adv_rd_off; int adv_wr_off; int we_on; int we_off; int oe_on; int oe_off; int page_burst_access; int access; int rd_cycle; int wr_cycle; int bus_turnaround; int cycle2cycle_delay; int wait_monitoring; int clk_activation; int wr_access; int wr_data_mux_bus; } ;



__attribute__((used)) static void FUNC_0(struct gpmc_timings *VAR_0)
{
 VAR_0->cs_on /= 1000;
 VAR_0->cs_rd_off /= 1000;
 VAR_0->cs_wr_off /= 1000;
 VAR_0->adv_on /= 1000;
 VAR_0->adv_rd_off /= 1000;
 VAR_0->adv_wr_off /= 1000;
 VAR_0->we_on /= 1000;
 VAR_0->we_off /= 1000;
 VAR_0->oe_on /= 1000;
 VAR_0->oe_off /= 1000;
 VAR_0->page_burst_access /= 1000;
 VAR_0->access /= 1000;
 VAR_0->rd_cycle /= 1000;
 VAR_0->wr_cycle /= 1000;
 VAR_0->bus_turnaround /= 1000;
 VAR_0->cycle2cycle_delay /= 1000;
 VAR_0->wait_monitoring /= 1000;
 VAR_0->clk_activation /= 1000;
 VAR_0->wr_access /= 1000;
 VAR_0->wr_data_mux_bus /= 1000;
}
