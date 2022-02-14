
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int lock; int evt_free_q; } ;
struct csio_evt_msg {int list; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int FUNC_1 (struct csio_hw*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct csio_hw *VAR_2, struct csio_evt_msg *VAR_3)
{
 if (VAR_3) {
  FUNC_4(&VAR_2->lock);
  FUNC_3(&VAR_3->list);
  FUNC_2(&VAR_3->list, &VAR_2->evt_free_q);
  FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2, VAR_1);
  FUNC_5(&VAR_2->lock);
 }
}
