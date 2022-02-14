
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct garmin_packet {int list; } ;
struct TYPE_2__ {scalar_t__ next; } ;
struct garmin_data {int lock; TYPE_1__ pktlist; } ;


 int FUNC_0 (struct garmin_packet*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct garmin_data *VAR_0)
{
 unsigned long VAR_1;
 struct garmin_packet *VAR_2 = ((void*)0);

 FUNC_3(&VAR_0->lock, VAR_1);
 while (!FUNC_2(&VAR_0->pktlist)) {
  VAR_2 = (struct garmin_packet *)VAR_0->pktlist.next;
  FUNC_1(&VAR_2->list);
  FUNC_0(VAR_2);
 }
 FUNC_4(&VAR_0->lock, VAR_1);
}
