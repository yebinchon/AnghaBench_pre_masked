
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ene_device {int hw_lock; } ;


 struct ene_device* VAR_0 ;
 int FUNC_0 (struct ene_device*) ;
 struct ene_device* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct ene_device *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->hw_lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->hw_lock, VAR_4);
}
