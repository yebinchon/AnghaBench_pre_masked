
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int offload_tc; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*) ;

__attribute__((used)) static u32 FUNC_1(struct qed_hwfn *VAR_1)
{
 if (FUNC_0(VAR_1))
  return VAR_1->hw_info.offload_tc;

 return VAR_0;
}
