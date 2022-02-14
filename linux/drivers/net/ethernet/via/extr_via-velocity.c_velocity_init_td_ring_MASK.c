
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct velocity_td_info {int dummy; } ;
struct TYPE_4__ {int numq; scalar_t__* used; scalar_t__* curr; scalar_t__* tail; int * infos; } ;
struct TYPE_3__ {int numtx; } ;
struct velocity_info {TYPE_2__ tx; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct velocity_info *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->tx.numq; VAR_3++) {

  VAR_2->tx.infos[VAR_3] = FUNC_0(VAR_2->options.numtx,
         sizeof(struct velocity_td_info),
         VAR_1);
  if (!VAR_2->tx.infos[VAR_3]) {
   while (--VAR_3 >= 0)
    FUNC_1(VAR_2->tx.infos[VAR_3]);
   return -VAR_0;
  }

  VAR_2->tx.tail[VAR_3] = VAR_2->tx.curr[VAR_3] = VAR_2->tx.used[VAR_3] = 0;
 }
 return 0;
}
