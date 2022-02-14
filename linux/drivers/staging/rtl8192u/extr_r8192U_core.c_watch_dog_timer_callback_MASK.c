
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct r8192_priv {int watch_dog_timer; int watch_dog_wq; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct r8192_priv* VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 FUNC_3(&VAR_5->watch_dog_wq, 0);
 FUNC_1(&VAR_5->watch_dog_timer,
    VAR_1 + FUNC_2(VAR_0));
}
