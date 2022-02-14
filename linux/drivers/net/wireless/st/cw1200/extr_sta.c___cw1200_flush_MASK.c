
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait_link_id_empty; } ;
struct cw1200_common {TYPE_1__ tx_queue_stats; int * tx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;

 for (;;) {



  if (VAR_3) {
   for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
    FUNC_0(&VAR_2->tx_queue[VAR_4]);
  } else {
   VAR_5 = FUNC_2(
    VAR_2->tx_queue_stats.wait_link_id_empty,
    FUNC_1(
     &VAR_2->tx_queue_stats, -1),
    2 * VAR_1);
  }

  if (!VAR_3 && VAR_5 <= 0) {
   VAR_5 = -VAR_0;
   break;
  } else {
   VAR_5 = 0;
  }

  FUNC_3(VAR_2);
  if (!FUNC_1(&VAR_2->tx_queue_stats, -1)) {

   FUNC_4(VAR_2);
   continue;
  }
  break;
 }
 return VAR_5;
}
