
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct niu {TYPE_1__ timer; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct niu* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct niu*,int*) ;
 int FUNC_4 (struct niu*,int) ;
 struct niu* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct niu *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_5, &VAR_8);
 if (!VAR_7)
  FUNC_4(VAR_5, VAR_8);

 if (FUNC_2(VAR_5->dev))
  VAR_6 = 5 * VAR_0;
 else
  VAR_6 = 1 * VAR_0;
 VAR_5->timer.expires = VAR_1 + VAR_6;

 FUNC_0(&VAR_5->timer);
}
