
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_priv {TYPE_1__* stations; int sta_lock; } ;
struct TYPE_4__ {int tfds_in_queue; } ;
struct TYPE_3__ {TYPE_2__* tid; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct il_priv *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 FUNC_1(&VAR_0->sta_lock);

 if (VAR_0->stations[VAR_1].tid[VAR_2].tfds_in_queue >= VAR_3)
  VAR_0->stations[VAR_1].tid[VAR_2].tfds_in_queue -= VAR_3;
 else {
  FUNC_0("free more than tfds_in_queue (%u:%d)\n",
       VAR_0->stations[VAR_1].tid[VAR_2].tfds_in_queue, VAR_3);
  VAR_0->stations[VAR_1].tid[VAR_2].tfds_in_queue = 0;
 }
}
