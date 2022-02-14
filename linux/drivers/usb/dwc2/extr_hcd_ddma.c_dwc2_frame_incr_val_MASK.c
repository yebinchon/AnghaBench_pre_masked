
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {scalar_t__ dev_speed; int host_interval; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct dwc2_qh *VAR_1)
{
 return VAR_1->dev_speed == VAR_0 ?
        (VAR_1->host_interval + 8 - 1) / 8 : VAR_1->host_interval;
}
