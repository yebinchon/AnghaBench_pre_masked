
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {int ssp_type; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static void FUNC_0(const struct driver_data *VAR_3,
         u32 *VAR_4)
{
 u32 VAR_5;

 switch (VAR_3->ssp_type) {
 case 128:
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = VAR_2;
  break;
 }
 *VAR_4 &= ~VAR_5;
}
