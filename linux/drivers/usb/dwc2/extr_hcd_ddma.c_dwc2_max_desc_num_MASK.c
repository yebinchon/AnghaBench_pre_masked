
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {scalar_t__ ep_type; scalar_t__ dev_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u16 FUNC_0(struct dwc2_qh *VAR_4)
{
 return (VAR_4->ep_type == VAR_2 &&
  VAR_4->dev_speed == VAR_3) ?
  VAR_1 : VAR_0;
}
