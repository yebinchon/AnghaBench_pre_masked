
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {int ssp_type; } ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct driver_data *VAR_0,
       u32 *VAR_1, u32 VAR_2)
{
 switch (VAR_0->ssp_type) {
 case 128:
  *VAR_1 |= FUNC_1(VAR_2);
  break;
 case 129:
  *VAR_1 |= FUNC_0(VAR_2);
  break;
 default:
  *VAR_1 |= FUNC_2(VAR_2);
  break;
 }
}
