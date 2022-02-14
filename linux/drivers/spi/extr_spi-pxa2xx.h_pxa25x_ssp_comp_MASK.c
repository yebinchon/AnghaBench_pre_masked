
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int ssp_type; } ;






__attribute__((used)) static inline int FUNC_0(struct driver_data *VAR_0)
{
 switch (VAR_0->ssp_type) {
 case 129:
 case 130:
 case 128:
  return 1;
 default:
  return 0;
 }
}
