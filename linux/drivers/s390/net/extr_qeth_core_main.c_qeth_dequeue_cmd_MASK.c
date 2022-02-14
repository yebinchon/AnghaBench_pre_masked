
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int list; } ;
struct qeth_card {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_0,
        struct qeth_cmd_buffer *VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0->lock);
}
