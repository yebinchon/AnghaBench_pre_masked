
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct si476x_core *VAR_2)
{
 return VAR_2->chip_id == VAR_0 ||
  VAR_2->chip_id == VAR_1;
}
