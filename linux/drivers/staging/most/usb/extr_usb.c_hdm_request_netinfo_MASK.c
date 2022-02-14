
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct most_interface {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct most_dev {void (* on_netinfo ) (struct most_interface*,unsigned char,unsigned char*) ;TYPE_1__ link_stat_timer; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 struct most_dev* FUNC_2 (struct most_interface*) ;

__attribute__((used)) static void FUNC_3(struct most_interface *VAR_2, int VAR_3,
    void (*VAR_4)(struct most_interface *,
         unsigned char,
         unsigned char *))
{
 struct most_dev *VAR_5;

 FUNC_0(!VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 VAR_5->on_netinfo = VAR_4;
 if (!VAR_4)
  return;

 VAR_5->link_stat_timer.expires = VAR_1 + VAR_0;
 FUNC_1(&VAR_5->link_stat_timer, VAR_5->link_stat_timer.expires);
}
