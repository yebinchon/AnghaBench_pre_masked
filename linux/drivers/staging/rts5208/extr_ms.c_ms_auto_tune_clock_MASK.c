
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {int ms_clock; } ;
struct rtsx_chip {scalar_t__ asic_code; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*) ;

__attribute__((used)) static inline int FUNC_1(struct rtsx_chip *VAR_5)
{
 struct ms_info *VAR_6 = &VAR_5->ms_card;
 int VAR_7;

 if (VAR_5->asic_code) {
  if (VAR_6->ms_clock > 30)
   VAR_6->ms_clock -= 20;
 } else {
  if (VAR_6->ms_clock == VAR_2)
   VAR_6->ms_clock = VAR_1;
  else if (VAR_6->ms_clock == VAR_1)
   VAR_6->ms_clock = VAR_0;
 }

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 != VAR_4)
  return VAR_3;

 return VAR_4;
}
