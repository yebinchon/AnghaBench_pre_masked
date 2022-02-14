
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct dlm_lkb {int lkb_flags; int lkb_last_bast_time; int lkb_timestamp; int lkb_lvbseq; int lkb_wait_type; TYPE_2__ lkb_last_bast; int lkb_rqmode; int lkb_grmode; int lkb_status; int lkb_exflags; int lkb_ownpid; int lkb_remid; int lkb_nodeid; int lkb_id; TYPE_1__* lkb_ua; } ;
struct TYPE_3__ {scalar_t__ xid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,unsigned long long,int ,int,int ,int ,int ,int ,int,int ,int ,unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, struct dlm_lkb *VAR_2,
         int VAR_3)
{
 u64 VAR_4 = 0;

 if (VAR_2->lkb_flags & VAR_0) {
  if (VAR_2->lkb_ua)
   VAR_4 = VAR_2->lkb_ua->xid;
 }

 FUNC_1(VAR_1, "lkb %x %d %x %u %llu %x %x %d %d %d %d %d %d %u %llu %llu\n",
     VAR_2->lkb_id,
     VAR_2->lkb_nodeid,
     VAR_2->lkb_remid,
     VAR_2->lkb_ownpid,
     (unsigned long long)VAR_4,
     VAR_2->lkb_exflags,
     VAR_2->lkb_flags,
     VAR_2->lkb_status,
     VAR_2->lkb_grmode,
     VAR_2->lkb_rqmode,
     VAR_2->lkb_last_bast.mode,
     VAR_3,
     VAR_2->lkb_wait_type,
     VAR_2->lkb_lvbseq,
     (unsigned long long)FUNC_0(VAR_2->lkb_timestamp),
     (unsigned long long)FUNC_0(VAR_2->lkb_last_bast_time));
}
