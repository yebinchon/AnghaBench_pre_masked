
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int total_vfs; } ;
struct TYPE_3__ {int dglort_map; } ;
struct fm10k_hw {TYPE_2__ iov; TYPE_1__ mac; } ;
struct fm10k_intfc {int glort; int glort_count; struct fm10k_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fm10k_intfc *VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_2->hw;
 u16 VAR_4 = (~VAR_3->mac.dglort_map) >> VAR_0;


 VAR_2->glort = VAR_3->mac.dglort_map & VAR_1;
 VAR_2->glort_count = 0;


 if (VAR_3->mac.dglort_map == VAR_1)
  return;






 if (VAR_4 <= VAR_3->iov.total_vfs) {
  VAR_2->glort_count = 1;
  VAR_2->glort += VAR_4;
 } else if (VAR_4 < 64) {
  VAR_2->glort_count = (VAR_4 + 1) / 2;
  VAR_2->glort += VAR_2->glort_count;
 } else {
  VAR_2->glort_count = VAR_4 - 63;
  VAR_2->glort += 64;
 }
}
