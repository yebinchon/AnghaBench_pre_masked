
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * prev; } ;
struct sclp_req {int queue_timeout; TYPE_4__ list; int sccb; scalar_t__ queue_expires; scalar_t__ start_count; int status; } ;
struct TYPE_6__ {int expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sclp_req*) ;
 int FUNC_1 (struct sclp_req*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(struct sclp_req *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;

 FUNC_5(&VAR_5, VAR_11);
 if (!FUNC_0(VAR_10)) {
  FUNC_6(&VAR_5, VAR_11);
  return -VAR_0;
 }
 VAR_10->status = VAR_3;
 VAR_10->start_count = 0;
 FUNC_2(&VAR_10->list, &VAR_7);
 VAR_12 = 0;
 if (VAR_10->queue_timeout) {
  VAR_10->queue_expires = VAR_4 + VAR_10->queue_timeout * VAR_2;
  if (!FUNC_8(&VAR_6) ||
      FUNC_7(VAR_6.expires, VAR_10->queue_expires))
   FUNC_4(&VAR_6, VAR_10->queue_expires);
 } else
  VAR_10->queue_expires = 0;

 if (VAR_8 == VAR_9 &&
     VAR_10->list.prev == &VAR_7) {
  if (!VAR_10->sccb) {
   FUNC_3(&VAR_10->list);
   VAR_12 = -VAR_1;
   goto out;
  }
  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12)
   FUNC_3(&VAR_10->list);
 }
out:
 FUNC_6(&VAR_5, VAR_11);
 return VAR_12;
}
