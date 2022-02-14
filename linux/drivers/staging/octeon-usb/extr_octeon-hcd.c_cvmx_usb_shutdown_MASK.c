
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int por; int hclk_rst; scalar_t__ hrst; scalar_t__ prst; } ;
union cvmx_usbnx_clk_ctl {int u64; TYPE_1__ s; } ;
struct octeon_hcd {int index; int * active_pipes; int idle_pipes; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct octeon_hcd *VAR_5)
{
 union cvmx_usbnx_clk_ctl VAR_6;


 if (!FUNC_3(&VAR_5->idle_pipes) ||
     !FUNC_3(&VAR_5->active_pipes[VAR_3]) ||
     !FUNC_3(&VAR_5->active_pipes[VAR_2]) ||
     !FUNC_3(&VAR_5->active_pipes[VAR_1]) ||
     !FUNC_3(&VAR_5->active_pipes[VAR_0]))
  return -VAR_4;


 VAR_6.u64 = FUNC_1(FUNC_0(VAR_5->index));
 VAR_6.s.enable = 1;
 VAR_6.s.por = 1;
 VAR_6.s.hclk_rst = 1;
 VAR_6.s.prst = 0;
 VAR_6.s.hrst = 0;
 FUNC_2(FUNC_0(VAR_5->index), VAR_6.u64);
 return 0;
}
