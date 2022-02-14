
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct wilc {int txq_spinlock; TYPE_1__ txq_head; } ;
struct txq_entry_t {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct txq_entry_t* FUNC_1 (struct txq_entry_t*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct txq_entry_t *FUNC_4(struct wilc *VAR_1,
        struct txq_entry_t *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1->txq_spinlock, VAR_3);

 if (!FUNC_0(&VAR_2->list, &VAR_1->txq_head.list))
  VAR_2 = FUNC_1(VAR_2, VAR_0);
 else
  VAR_2 = ((void*)0);
 FUNC_3(&VAR_1->txq_spinlock, VAR_3);

 return VAR_2;
}
