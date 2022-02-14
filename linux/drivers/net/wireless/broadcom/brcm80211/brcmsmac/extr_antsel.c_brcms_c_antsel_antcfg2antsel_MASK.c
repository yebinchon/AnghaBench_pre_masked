
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct antsel_info {scalar_t__ antsel_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static u16 FUNC_2(struct antsel_info *VAR_4, u8 VAR_5)
{
 u8 VAR_6 = FUNC_0(FUNC_1(VAR_5));
 u16 VAR_7 = 0;

 if (VAR_4->antsel_type == VAR_1) {

  VAR_7 = (VAR_3[VAR_6] & 0xf);
  return VAR_7;

 } else if (VAR_4->antsel_type == VAR_0) {

  VAR_7 = (VAR_2[VAR_6] & 0xf);
  return VAR_7;
 }

 return VAR_7;
}
