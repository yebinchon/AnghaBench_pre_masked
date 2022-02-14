
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_id; } ;
struct tb_switch {TYPE_1__ config; } ;





__attribute__((used)) static inline bool FUNC_0(const struct tb_switch *VAR_0)
{
 switch (VAR_0->config.device_id) {
 case 129:
 case 128:
  return 1;
 default:
  return 0;
 }
}
