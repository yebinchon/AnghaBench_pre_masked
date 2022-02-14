
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct frad_state {struct net_device* dev; } ;
typedef int hdlc_device ;
struct TYPE_6__ {void* expires; } ;
struct TYPE_4__ {int t392; int n393; int n392; int t391; scalar_t__ dce; } ;
struct TYPE_5__ {int request; int last_errors; int reliable; scalar_t__ n391cnt; TYPE_3__ timer; TYPE_1__ settings; void* last_poll; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (int,struct net_device*) ;
 struct frad_state* FUNC_4 (int ,struct timer_list*,int ) ;
 void* VAR_1 ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct frad_state* VAR_2 ;
 TYPE_2__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (void*,void*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 struct frad_state *VAR_5 = FUNC_4(VAR_5, VAR_4, VAR_3);
 struct net_device *VAR_6 = VAR_5->dev;
 hdlc_device *VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9 = 0, VAR_10;
 u32 VAR_11;

 if (FUNC_6(VAR_7)->settings.dce) {
  VAR_10 = FUNC_6(VAR_7)->request &&
   FUNC_7(VAR_1, FUNC_6(VAR_7)->last_poll +
        FUNC_6(VAR_7)->settings.t392 * VAR_0);
  FUNC_6(VAR_7)->request = 0;
 } else {
  FUNC_6(VAR_7)->last_errors <<= 1;
  if (FUNC_6(VAR_7)->request) {
   if (FUNC_6(VAR_7)->reliable)
    FUNC_5(VAR_6, "No LMI status reply received\n");
   FUNC_6(VAR_7)->last_errors |= 1;
  }

  VAR_11 = FUNC_6(VAR_7)->last_errors;
  for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_7)->settings.n393; VAR_8++, VAR_11 >>= 1)
   VAR_9 += (VAR_11 & 1);

  VAR_10 = (VAR_9 < FUNC_6(VAR_7)->settings.n392);
 }

 if (FUNC_6(VAR_7)->reliable != VAR_10) {
  FUNC_5(VAR_6, "Link %sreliable\n", VAR_10 ? "" : "un");
  FUNC_3(VAR_10, VAR_6);
 }

 if (FUNC_6(VAR_7)->settings.dce)
  FUNC_6(VAR_7)->timer.expires = VAR_1 +
   FUNC_6(VAR_7)->settings.t392 * VAR_0;
 else {
  if (FUNC_6(VAR_7)->n391cnt)
   FUNC_6(VAR_7)->n391cnt--;

  FUNC_2(VAR_6, FUNC_6(VAR_7)->n391cnt == 0);

  FUNC_6(VAR_7)->last_poll = VAR_1;
  FUNC_6(VAR_7)->request = 1;
  FUNC_6(VAR_7)->timer.expires = VAR_1 +
   FUNC_6(VAR_7)->settings.t391 * VAR_0;
 }

 FUNC_0(&FUNC_6(VAR_7)->timer);
}
