
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct cpsw_ale {TYPE_1__ timer; scalar_t__ ageout; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct cpsw_ale* VAR_1 ;
 int FUNC_1 (struct cpsw_ale*,int ,int ,int) ;
 struct cpsw_ale* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct cpsw_ale *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);

 FUNC_1(VAR_5, 0, VAR_0, 1);

 if (VAR_5->ageout) {
  VAR_5->timer.expires = VAR_2 + VAR_5->ageout;
  FUNC_0(&VAR_5->timer);
 }
}
