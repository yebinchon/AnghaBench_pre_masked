
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int reported_mode; } ;
typedef enum bq2415x_mode { ____Placeholder_bq2415x_mode } bq2415x_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct bq2415x_device *VAR_4, int VAR_5)
{
 enum bq2415x_mode VAR_6;

 if (VAR_5 == 0)
  VAR_6 = VAR_3;
 else if (VAR_5 < 500)
  VAR_6 = VAR_2;
 else if (VAR_5 < 1800)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 if (VAR_4->reported_mode == VAR_6)
  return 0;

 VAR_4->reported_mode = VAR_6;
 return 1;
}
