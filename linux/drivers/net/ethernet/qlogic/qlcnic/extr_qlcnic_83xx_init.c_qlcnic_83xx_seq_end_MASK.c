
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_3__ {int seq_end; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;



__attribute__((used)) static inline void FUNC_0(struct qlcnic_adapter *VAR_0)
{
 VAR_0->ahw->reset.seq_end = 1;
}
