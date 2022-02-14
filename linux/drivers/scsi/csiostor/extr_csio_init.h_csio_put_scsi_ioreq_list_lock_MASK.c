
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct csio_scsim {int freelist_lock; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_scsim*,struct list_head*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct csio_hw *VAR_0, struct csio_scsim *VAR_1,
         struct list_head *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->freelist_lock, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->freelist_lock, VAR_4);
}
