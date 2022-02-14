
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct garmin_data {scalar_t__ mode; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct garmin_data* FUNC_0 (int ,struct timer_list*,int ) ;
 struct garmin_data* VAR_2 ;
 int FUNC_1 (struct garmin_data*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_4)
{
 struct garmin_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);


 if (VAR_5->mode == VAR_1)
  if (VAR_5->flags & VAR_0)
   FUNC_1(VAR_5);
}
