
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scan_generation; } ;
struct TYPE_4__ {TYPE_1__ mgt_rsp; } ;
struct esas2r_request {scalar_t__ req_stat; TYPE_2__ func_rsp; scalar_t__ interrupt_cx; } ;
struct esas2r_disc_context {int flags; scalar_t__ raid_grp_ix; int state; int scan_gen; } ;
struct esas2r_adapter {int mem_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct esas2r_adapter *VAR_3,
       struct esas2r_request *VAR_4)
{
 struct esas2r_disc_context *VAR_5 =
  (struct esas2r_disc_context *)VAR_4->interrupt_cx;
 unsigned long VAR_6;

 FUNC_2();

 FUNC_4(&VAR_3->mem_lock, VAR_6);

 if (VAR_4->req_stat == VAR_2)
  VAR_5->scan_gen = VAR_4->func_rsp.mgt_rsp.scan_generation;

 VAR_5->state = VAR_1;
 VAR_5->raid_grp_ix = 0;

 FUNC_1(VAR_4, VAR_3);



 if (!(VAR_5->flags & VAR_0))
  FUNC_0(VAR_3, VAR_4);

 FUNC_5(&VAR_3->mem_lock, VAR_6);

 FUNC_3();
}
