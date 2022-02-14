
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct csio_mbm {struct csio_hw* hw; } ;
struct csio_mb {int (* mb_cbfn ) (struct csio_hw*,struct csio_mb*) ;} ;
struct csio_hw {int lock; } ;


 struct csio_mb* FUNC_0 (struct csio_hw*) ;
 struct csio_mbm* FUNC_1 (int ,struct timer_list*,int ) ;
 struct csio_mbm* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct timer_list *VAR_2)
{
 struct csio_mbm *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct csio_hw *VAR_4 = VAR_3->hw;
 struct csio_mb *VAR_5 = ((void*)0);

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_4);
 FUNC_3(&VAR_4->lock);


 if (VAR_5)
  VAR_5->mb_cbfn(VAR_4, VAR_5);

}
