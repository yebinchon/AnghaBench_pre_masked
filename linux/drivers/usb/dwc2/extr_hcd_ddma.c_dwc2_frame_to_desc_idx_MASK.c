
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dwc2_qh {scalar_t__ dev_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct dwc2_qh *VAR_3, u16 VAR_4)
{
 if (VAR_3->dev_speed == VAR_2)

  return (VAR_4 & ((VAR_1 / 8) - 1)) * 8;
 else
  return VAR_4 & (VAR_0 - 1);
}
