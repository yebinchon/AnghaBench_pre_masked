
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct antsel_info {scalar_t__ antsel_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct antsel_info *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = VAR_2;

 if (VAR_3->antsel_type == VAR_1) {

  VAR_5 = (((VAR_4 & 0x2) << 3) | ((VAR_4 & 0x1) + 2));
  return VAR_5;

 } else if (VAR_3->antsel_type == VAR_0) {

  VAR_5 = (((VAR_4 & 0x02) << 4) | ((VAR_4 & 0x1) + 1));
  return VAR_5;
 }

 return VAR_5;
}
