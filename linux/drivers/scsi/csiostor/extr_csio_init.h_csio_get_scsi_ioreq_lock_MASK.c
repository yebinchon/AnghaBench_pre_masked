
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsim {int freelist_lock; } ;
struct csio_ioreq {int dummy; } ;
struct csio_hw {int dummy; } ;


 struct csio_ioreq* FUNC_0 (struct csio_scsim*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline struct csio_ioreq *
FUNC_3(struct csio_hw *VAR_0, struct csio_scsim *VAR_1)
{
 struct csio_ioreq *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->freelist_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->freelist_lock, VAR_3);

 return VAR_2;
}
