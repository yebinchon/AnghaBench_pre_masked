
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_hdlc_buf_list {int spinlock; int count; int list; } ;
struct n_hdlc_buf {int list_item; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct n_hdlc_buf_list *VAR_0,
      struct n_hdlc_buf *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->spinlock, VAR_2);

 FUNC_0(&VAR_1->list_item, &VAR_0->list);
 VAR_0->count++;

 FUNC_2(&VAR_0->spinlock, VAR_2);
}
