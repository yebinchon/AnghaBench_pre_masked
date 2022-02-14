
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entry_list; int buf_count; } ;
struct TYPE_4__ {int entry_list; int buf_count; } ;
struct TYPE_6__ {int no_in_queues; TYPE_2__ init_pool; TYPE_1__ in_buf_pool; int in_buf_size; int default_out_queue; int do_prio_queueing; int state; } ;
struct qeth_card {TYPE_3__ qdio; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_6)
{
 FUNC_2(VAR_6, 4, "intqdinf");
 FUNC_3(&VAR_6->qdio.state, VAR_5);
 VAR_6->qdio.do_prio_queueing = VAR_4;
 VAR_6->qdio.default_out_queue = VAR_0;


 VAR_6->qdio.no_in_queues = 1;
 VAR_6->qdio.in_buf_size = VAR_3;
 if (FUNC_1(VAR_6))
  VAR_6->qdio.init_pool.buf_count = VAR_2;
 else
  VAR_6->qdio.init_pool.buf_count = VAR_1;
 VAR_6->qdio.in_buf_pool.buf_count = VAR_6->qdio.init_pool.buf_count;
 FUNC_0(&VAR_6->qdio.in_buf_pool.entry_list);
 FUNC_0(&VAR_6->qdio.init_pool.entry_list);
}
