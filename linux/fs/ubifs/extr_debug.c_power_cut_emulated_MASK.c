
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int log_last; int lpt_first; int lpt_last; int orph_first; int orph_last; int ihead_lnum; scalar_t__ cmt_state; int buds; TYPE_2__* jheads; struct ubifs_debug_info* dbg; } ;
struct ubifs_debug_info {int pc_delay; unsigned long pc_cnt_max; int pc_happened; scalar_t__ pc_cnt; int pc_timeout; } ;
struct TYPE_3__ {int lnum; } ;
struct TYPE_4__ {TYPE_1__ wbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 () ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ubifs_info*,int ) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_info*,char*,...) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_7, int VAR_8, int VAR_9)
{
 struct ubifs_debug_info *VAR_10 = VAR_7->dbg;

 FUNC_7(VAR_7, FUNC_2(VAR_7));

 if (!VAR_10->pc_cnt) {

  if (FUNC_1(1, 2)) {
   unsigned long VAR_11;

   if (FUNC_1(1, 2)) {
    VAR_10->pc_delay = 1;

    VAR_11 = FUNC_5() % 60000;
    VAR_10->pc_timeout = VAR_6;
    VAR_10->pc_timeout += FUNC_4(VAR_11);
    FUNC_9(VAR_7, "failing after %lums", VAR_11);
   } else {
    VAR_10->pc_delay = 2;
    VAR_11 = FUNC_5() % 10000;

    VAR_10->pc_cnt_max = VAR_11;
    FUNC_9(VAR_7, "failing after %lu calls", VAR_11);
   }
  }

  VAR_10->pc_cnt += 1;
 }


 if (VAR_10->pc_delay == 1 && FUNC_6(VAR_6, VAR_10->pc_timeout))
   return 0;
 if (VAR_10->pc_delay == 2 && VAR_10->pc_cnt++ < VAR_10->pc_cnt_max)
   return 0;

 if (VAR_8 == VAR_5) {
  if (VAR_9 && FUNC_1(1, 2))
   return 0;
  if (FUNC_1(19, 20))
   return 0;
  FUNC_9(VAR_7, "failing in super block LEB %d", VAR_8);
 } else if (VAR_8 == VAR_4 || VAR_8 == VAR_4 + 1) {
  if (FUNC_1(19, 20))
   return 0;
  FUNC_9(VAR_7, "failing in master LEB %d", VAR_8);
 } else if (VAR_8 >= VAR_3 && VAR_8 <= VAR_7->log_last) {
  if (VAR_9 && FUNC_1(99, 100))
   return 0;
  if (FUNC_1(399, 400))
   return 0;
  FUNC_9(VAR_7, "failing in log LEB %d", VAR_8);
 } else if (VAR_8 >= VAR_7->lpt_first && VAR_8 <= VAR_7->lpt_last) {
  if (VAR_9 && FUNC_1(7, 8))
   return 0;
  if (FUNC_1(19, 20))
   return 0;
  FUNC_9(VAR_7, "failing in LPT LEB %d", VAR_8);
 } else if (VAR_8 >= VAR_7->orph_first && VAR_8 <= VAR_7->orph_last) {
  if (VAR_9 && FUNC_1(1, 2))
   return 0;
  if (FUNC_1(9, 10))
   return 0;
  FUNC_9(VAR_7, "failing in orphan LEB %d", VAR_8);
 } else if (VAR_8 == VAR_7->ihead_lnum) {
  if (FUNC_1(99, 100))
   return 0;
  FUNC_9(VAR_7, "failing in index head LEB %d", VAR_8);
 } else if (VAR_7->jheads && VAR_8 == VAR_7->jheads[VAR_2].wbuf.lnum) {
  if (FUNC_1(9, 10))
   return 0;
  FUNC_9(VAR_7, "failing in GC head LEB %d", VAR_8);
 } else if (VAR_9 && !FUNC_0(&VAR_7->buds) &&
     !FUNC_8(VAR_7, VAR_8)) {
  if (FUNC_1(19, 20))
   return 0;
  FUNC_9(VAR_7, "failing in non-bud LEB %d", VAR_8);
 } else if (VAR_7->cmt_state == VAR_0 ||
     VAR_7->cmt_state == VAR_1) {
  if (FUNC_1(999, 1000))
   return 0;
  FUNC_9(VAR_7, "failing in bud LEB %d commit running", VAR_8);
 } else {
  if (FUNC_1(9999, 10000))
   return 0;
  FUNC_9(VAR_7, "failing in bud LEB %d commit not running", VAR_8);
 }

 VAR_10->pc_happened = 1;
 FUNC_9(VAR_7, "========== Power cut emulated ==========");
 FUNC_3();
 return 1;
}
