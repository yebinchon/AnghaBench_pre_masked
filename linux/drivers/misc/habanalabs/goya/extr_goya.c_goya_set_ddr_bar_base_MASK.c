
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {scalar_t__ ddr_bar_cur_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hl_device*,int,int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct hl_device *VAR_1, u64 VAR_2)
{
 struct goya_device *VAR_3 = VAR_1->asic_specific;
 u64 VAR_4 = VAR_2;
 int VAR_5;

 if ((VAR_3) && (VAR_3->ddr_bar_cur_addr == VAR_2))
  return VAR_4;


 VAR_5 = FUNC_0(VAR_1, 1, 4, VAR_2);
 if (VAR_5)
  return VAR_0;

 if (VAR_3) {
  VAR_4 = VAR_3->ddr_bar_cur_addr;
  VAR_3->ddr_bar_cur_addr = VAR_2;
 }

 return VAR_4;
}
