
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_flags; } ;
struct request {int mq_hctx; int * end_io_data; int cmd_flags; } ;
struct gendisk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct request_queue*,struct gendisk*,struct request*,int,int ) ;
 int FUNC_3 (struct request_queue*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int ,struct request*) ;
 int FUNC_7 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct request_queue *VAR_4,
  struct gendisk *VAR_5, struct request *VAR_6, int VAR_7)
{
 FUNC_0(VAR_3);

 FUNC_1(!FUNC_7(VAR_0, &VAR_4->queue_flags));

 VAR_6->cmd_flags |= VAR_1;
 VAR_6->end_io_data = &VAR_3;
 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);

 while (!FUNC_4(&VAR_3)) {
  FUNC_3(VAR_4, FUNC_6(VAR_6->mq_hctx, VAR_6), 1);
  FUNC_5();
 }
}
