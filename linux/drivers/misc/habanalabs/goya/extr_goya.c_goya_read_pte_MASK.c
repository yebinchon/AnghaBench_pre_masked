
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_device {scalar_t__* pcie_bar; scalar_t__ hard_reset_pending; struct goya_device* asic_specific; } ;
struct goya_device {scalar_t__ ddr_bar_cur_addr; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct hl_device *VAR_2, u64 VAR_3)
{
 struct goya_device *VAR_4 = VAR_2->asic_specific;

 if (VAR_2->hard_reset_pending)
  return VAR_1;

 return FUNC_0(VAR_2->pcie_bar[VAR_0] +
   (VAR_3 - VAR_4->ddr_bar_cur_addr));
}
