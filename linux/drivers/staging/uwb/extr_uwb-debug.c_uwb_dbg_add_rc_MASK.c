
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct uwb_rc {TYPE_4__* dbg; TYPE_1__ uwb_dev; } ;
struct uwb_dbg {int dummy; } ;
struct TYPE_6__ {int new_rsv; int channel_changed; struct uwb_rc* rc; } ;
struct TYPE_7__ {int root_d; void* drp_avail_f; int accept; int accept_f; void* reservations_f; void* command_f; TYPE_2__ pal; int list_lock; int rsvs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 void* FUNC_3 (char*,int,int ,struct uwb_rc*,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_5 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(struct uwb_rc *VAR_7)
{
 VAR_7->dbg = FUNC_5(sizeof(struct uwb_dbg), VAR_0);
 if (VAR_7->dbg == ((void*)0))
  return;

 FUNC_0(&VAR_7->dbg->rsvs);
 FUNC_6(&(VAR_7->dbg)->list_lock);

 FUNC_7(&VAR_7->dbg->pal);
 VAR_7->dbg->pal.rc = VAR_7;
 VAR_7->dbg->pal.channel_changed = VAR_5;
 VAR_7->dbg->pal.new_rsv = VAR_6;
 FUNC_8(&VAR_7->dbg->pal);

 if (VAR_4) {
  VAR_7->dbg->root_d = FUNC_2(FUNC_4(&VAR_7->uwb_dev.dev),
           VAR_4);
  VAR_7->dbg->command_f = FUNC_3("command", 0200,
        VAR_7->dbg->root_d, VAR_7,
        &VAR_1);
  VAR_7->dbg->reservations_f = FUNC_3("reservations", 0444,
             VAR_7->dbg->root_d, VAR_7,
             &VAR_3);
  VAR_7->dbg->accept_f = FUNC_1("accept", 0644,
       VAR_7->dbg->root_d,
       &VAR_7->dbg->accept);
  VAR_7->dbg->drp_avail_f = FUNC_3("drp_avail", 0444,
          VAR_7->dbg->root_d, VAR_7,
          &VAR_2);
 }
}
