
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {struct htc_packet* htc_packet_pool; } ;
struct htc_target {int rx_lock; TYPE_2__ pipe; } ;
struct TYPE_3__ {struct list_head* next; } ;
struct htc_packet {TYPE_1__ list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_0,
          struct htc_packet *VAR_1)
{
 struct list_head *VAR_2;

 FUNC_0(&VAR_0->rx_lock);

 if (VAR_0->pipe.htc_packet_pool == ((void*)0)) {
  VAR_0->pipe.htc_packet_pool = VAR_1;
  VAR_1->list.next = ((void*)0);
 } else {
  VAR_2 = (struct list_head *) VAR_0->pipe.htc_packet_pool;
  VAR_1->list.next = VAR_2;
  VAR_0->pipe.htc_packet_pool = VAR_1;
 }

 FUNC_1(&VAR_0->rx_lock);
}
