
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {int ssp_type; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct driver_data *VAR_3)
{
 switch (VAR_3->ssp_type) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_0;
 default:
  return VAR_2;
 }
}
