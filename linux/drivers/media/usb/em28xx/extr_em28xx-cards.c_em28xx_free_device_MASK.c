
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kref {int dummy; } ;
struct em28xx {scalar_t__ ts; struct em28xx* alt_max_pkt_size_isoc; int disconnected; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*) ;
 struct em28xx* FUNC_3 (struct kref*) ;

void FUNC_4(struct kref *VAR_1)
{
 struct em28xx *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->intf->dev, "Freeing device\n");

 if (!VAR_2->disconnected)
  FUNC_1(VAR_2);

 if (VAR_2->ts == VAR_0)
  FUNC_2(VAR_2->alt_max_pkt_size_isoc);

 FUNC_2(VAR_2);
}
