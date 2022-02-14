
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {int sqs_count; TYPE_1__* qs; struct nicvf** snicvf; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rq_cnt; int sq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7, int VAR_8)
{
 struct nicvf *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;
 int VAR_11;

 if (VAR_8 != VAR_3)
  return -VAR_2;

 VAR_10 = VAR_6 *
         (VAR_9->qs->rq_cnt + VAR_9->qs->sq_cnt);
 for (VAR_11 = 0; VAR_11 < VAR_9->sqs_count; VAR_11++) {
  struct nicvf *VAR_12;

  VAR_12 = VAR_9->snicvf[VAR_11];
  if (!VAR_12)
   continue;
  VAR_10 += VAR_6 *
    (VAR_12->qs->rq_cnt + VAR_12->qs->sq_cnt);
 }

 return VAR_5 + VAR_4 +
  VAR_10 +
  VAR_0 + VAR_1;
}
