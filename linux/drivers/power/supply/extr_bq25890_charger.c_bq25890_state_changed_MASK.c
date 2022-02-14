
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq25890_state {scalar_t__ chrg_status; scalar_t__ chrg_fault; scalar_t__ online; scalar_t__ bat_fault; scalar_t__ boost_fault; scalar_t__ vsys_status; } ;
struct bq25890_device {int lock; struct bq25890_state state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct bq25890_device *VAR_0,
      struct bq25890_state *VAR_1)
{
 struct bq25890_state VAR_2;

 FUNC_0(&VAR_0->lock);
 VAR_2 = VAR_0->state;
 FUNC_1(&VAR_0->lock);

 return (VAR_2.chrg_status != VAR_1->chrg_status ||
  VAR_2.chrg_fault != VAR_1->chrg_fault ||
  VAR_2.online != VAR_1->online ||
  VAR_2.bat_fault != VAR_1->bat_fault ||
  VAR_2.boost_fault != VAR_1->boost_fault ||
  VAR_2.vsys_status != VAR_1->vsys_status);
}
