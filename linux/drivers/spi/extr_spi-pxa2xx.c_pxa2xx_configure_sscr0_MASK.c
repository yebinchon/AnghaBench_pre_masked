
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct driver_data {int ssp_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_2(const struct driver_data *VAR_4,
      u32 VAR_5, u8 VAR_6)
{
 switch (VAR_4->ssp_type) {
 case 128:
  return VAR_5
   | VAR_0
   | FUNC_0(VAR_6 > 32 ? 8 : VAR_6)
   | VAR_3;
 default:
  return VAR_5
   | VAR_2
   | FUNC_1(VAR_6 > 16 ? VAR_6 - 16 : VAR_6)
   | VAR_3
   | (VAR_6 > 16 ? VAR_1 : 0);
 }
}
