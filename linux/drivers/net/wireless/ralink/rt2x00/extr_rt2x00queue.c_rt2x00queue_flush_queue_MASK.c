
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct data_queue {scalar_t__ qid; TYPE_3__* rt2x00dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* flush_queue ) (struct data_queue*,int) ;int (* kick_queue ) (struct data_queue*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int (*) (struct data_queue*,int)) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct data_queue*) ;
 int FUNC_3 (struct data_queue*) ;
 int FUNC_4 (struct data_queue*,int) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct data_queue *VAR_4, bool VAR_5)
{
 bool VAR_6 =
  (VAR_4->qid == VAR_3) ||
  (VAR_4->qid == VAR_2) ||
  (VAR_4->qid == VAR_0) ||
  (VAR_4->qid == VAR_1);

 if (FUNC_2(VAR_4))
  return;







 if (!VAR_5 && VAR_6)
  VAR_4->rt2x00dev->ops->lib->kick_queue(VAR_4);






 if (FUNC_0(VAR_4->rt2x00dev->ops->lib->flush_queue))
  VAR_4->rt2x00dev->ops->lib->flush_queue(VAR_4, VAR_5);




 if (FUNC_5(!FUNC_2(VAR_4)))
  FUNC_1(VAR_4->rt2x00dev, "Queue %d failed to flush\n",
       VAR_4->qid);
}
