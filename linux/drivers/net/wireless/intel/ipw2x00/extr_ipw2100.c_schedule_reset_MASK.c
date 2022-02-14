
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time64_t ;
struct ipw2100_priv {int reset_backoff; int last_reset; int status; TYPE_1__* net_dev; int wait_command_queue; int reset_work; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipw2100_priv *VAR_3)
{
 time64_t VAR_4 = FUNC_1();




 if (VAR_3->reset_backoff &&
     (VAR_4 - VAR_3->last_reset > VAR_3->reset_backoff))
  VAR_3->reset_backoff = 0;

 VAR_3->last_reset = VAR_4;

 if (!(VAR_3->status & VAR_2)) {
  FUNC_0("%s: Scheduling firmware restart (%llds).\n",
          VAR_3->net_dev->name, VAR_3->reset_backoff);
  FUNC_2(VAR_3->net_dev);
  FUNC_3(VAR_3->net_dev);
  VAR_3->status |= VAR_2;
  if (VAR_3->reset_backoff)
   FUNC_4(&VAR_3->reset_work,
           VAR_3->reset_backoff * VAR_0);
  else
   FUNC_4(&VAR_3->reset_work, 0);

  if (VAR_3->reset_backoff < VAR_1)
   VAR_3->reset_backoff++;

  FUNC_5(&VAR_3->wait_command_queue);
 } else
  FUNC_0("%s: Firmware restart already in progress.\n",
          VAR_3->net_dev->name);

}
