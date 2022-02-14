
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct xfs_trans_res {scalar_t__ tr_logres; scalar_t__ tr_logcount; int tr_logflags; } ;
struct xfs_trans {int t_flags; scalar_t__ t_blk_res; scalar_t__ t_log_res; scalar_t__ t_log_count; int t_pflags; int t_mountp; int * t_ticket; int t_rtx_res; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int **,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(
 struct xfs_trans *VAR_5,
 struct xfs_trans_res *VAR_6,
 uint VAR_7,
 uint VAR_8)
{
 int VAR_9 = 0;
 bool VAR_10 = (VAR_5->t_flags & VAR_4) != 0;


 FUNC_2(&VAR_5->t_pflags, VAR_1);






 if (VAR_7 > 0) {
  VAR_9 = FUNC_6(VAR_5->t_mountp, -((int64_t)VAR_7), VAR_10);
  if (VAR_9 != 0) {
   FUNC_1(&VAR_5->t_pflags, VAR_1);
   return -VAR_0;
  }
  VAR_5->t_blk_res += VAR_7;
 }




 if (VAR_6->tr_logres > 0) {
  bool VAR_11 = 0;

  FUNC_0(VAR_5->t_log_res == 0 ||
         VAR_5->t_log_res == VAR_6->tr_logres);
  FUNC_0(VAR_5->t_log_count == 0 ||
         VAR_5->t_log_count == VAR_6->tr_logcount);

  if (VAR_6->tr_logflags & VAR_3) {
   VAR_5->t_flags |= VAR_3;
   VAR_11 = 1;
  } else {
   FUNC_0(VAR_5->t_ticket == ((void*)0));
   FUNC_0(!(VAR_5->t_flags & VAR_3));
  }

  if (VAR_5->t_ticket != ((void*)0)) {
   FUNC_0(VAR_6->tr_logflags & VAR_3);
   VAR_9 = FUNC_4(VAR_5->t_mountp, VAR_5->t_ticket);
  } else {
   VAR_9 = FUNC_5(VAR_5->t_mountp,
      VAR_6->tr_logres,
      VAR_6->tr_logcount,
      &VAR_5->t_ticket, VAR_2,
      VAR_11);
  }

  if (VAR_9)
   goto undo_blocks;

  VAR_5->t_log_res = VAR_6->tr_logres;
  VAR_5->t_log_count = VAR_6->tr_logcount;
 }






 if (VAR_8 > 0) {
  VAR_9 = FUNC_7(VAR_5->t_mountp, -((int64_t)VAR_8));
  if (VAR_9) {
   VAR_9 = -VAR_0;
   goto undo_log;
  }
  VAR_5->t_rtx_res += VAR_8;
 }

 return 0;





undo_log:
 if (VAR_6->tr_logres > 0) {
  FUNC_3(VAR_5->t_mountp, VAR_5->t_ticket, ((void*)0), 0);
  VAR_5->t_ticket = ((void*)0);
  VAR_5->t_log_res = 0;
  VAR_5->t_flags &= ~VAR_3;
 }

undo_blocks:
 if (VAR_7 > 0) {
  FUNC_6(VAR_5->t_mountp, (int64_t)VAR_7, VAR_10);
  VAR_5->t_blk_res = 0;
 }

 FUNC_1(&VAR_5->t_pflags, VAR_1);

 return VAR_9;
}
