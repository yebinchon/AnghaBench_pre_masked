
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int hw_queue_base; } ;







__attribute__((used)) static inline
int FUNC_0(struct wl12xx_vif *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->hw_queue_base;

 switch (VAR_1) {
 case 128:
  return VAR_2 + 0;
 case 129:
  return VAR_2 + 1;
 case 131:
  return VAR_2 + 2;
 case 130:
  return VAR_2 + 3;
 default:
  return VAR_2 + 2;
 }
}
