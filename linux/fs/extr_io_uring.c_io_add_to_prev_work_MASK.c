
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_kiocb {int flags; int list; } ;
struct async_list {int lock; int cnt; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct async_list *VAR_1, struct io_kiocb *VAR_2)
{
 bool VAR_3;

 if (!VAR_1)
  return 0;
 if (!(VAR_2->flags & VAR_0))
  return 0;
 if (!FUNC_0(&VAR_1->cnt))
  return 0;

 VAR_3 = 1;
 FUNC_4(&VAR_1->lock);
 FUNC_1(&VAR_2->list, &VAR_1->list);



 FUNC_3();
 if (!FUNC_0(&VAR_1->cnt)) {
  FUNC_2(&VAR_2->list);
  VAR_3 = 0;
 }
 FUNC_5(&VAR_1->lock);
 return VAR_3;
}
