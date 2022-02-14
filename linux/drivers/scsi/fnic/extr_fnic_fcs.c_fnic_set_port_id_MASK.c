
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int * ctl_src_addr; } ;
struct fnic {scalar_t__ state; int fnic_lock; TYPE_1__* lport; TYPE_3__ ctlr; } ;
struct fc_lport {int host; } ;
struct fc_frame {int dummy; } ;
struct TYPE_5__ {int * granted_mac; } ;
struct TYPE_4__ {int host; } ;


 int FUNC_0 (int ,int ,char*,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,struct fc_lport*,struct fc_frame*) ;
 int FUNC_2 (struct fnic*,int ) ;
 int FUNC_3 (struct fnic*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct fc_lport*,int *) ;
 TYPE_2__* FUNC_6 (struct fc_frame*) ;
 scalar_t__ FUNC_7 (int *) ;
 struct fnic* FUNC_8 (struct fc_lport*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct fc_lport *VAR_4, u32 VAR_5, struct fc_frame *VAR_6)
{
 struct fnic *VAR_7 = FUNC_8(VAR_4);
 u8 *VAR_8;
 int VAR_9;

 FUNC_0(VAR_3, VAR_4->host, "set port_id %x fp %p\n",
       VAR_5, VAR_6);





 if (!VAR_5) {
  FUNC_5(VAR_4, VAR_7->ctlr.ctl_src_addr);
  FUNC_3(VAR_7);
  return;
 }

 if (VAR_6) {
  VAR_8 = FUNC_6(VAR_6)->granted_mac;
  if (FUNC_7(VAR_8)) {

   FUNC_1(&VAR_7->ctlr, VAR_4, VAR_6);
  }
  FUNC_5(VAR_4, VAR_8);
 }


 FUNC_9(&VAR_7->fnic_lock);
 if (VAR_7->state == VAR_0 || VAR_7->state == VAR_2)
  VAR_7->state = VAR_1;
 else {
  FUNC_0(VAR_3, VAR_7->lport->host,
        "Unexpected fnic state %s while"
        " processing flogi resp\n",
        FUNC_4(VAR_7->state));
  FUNC_10(&VAR_7->fnic_lock);
  return;
 }
 FUNC_10(&VAR_7->fnic_lock);





 VAR_9 = FUNC_2(VAR_7, VAR_5);

 if (VAR_9 < 0) {
  FUNC_9(&VAR_7->fnic_lock);
  if (VAR_7->state == VAR_1)
   VAR_7->state = VAR_0;
  FUNC_10(&VAR_7->fnic_lock);
 }
}
