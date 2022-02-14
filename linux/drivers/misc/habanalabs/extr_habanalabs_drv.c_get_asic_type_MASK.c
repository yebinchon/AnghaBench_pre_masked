
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum hl_asic_type { ____Placeholder_hl_asic_type } hl_asic_type ;


 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static enum hl_asic_type FUNC_0(u16 VAR_2)
{
 enum hl_asic_type VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = VAR_0;
  break;
 default:
  VAR_3 = VAR_1;
  break;
 }

 return VAR_3;
}
