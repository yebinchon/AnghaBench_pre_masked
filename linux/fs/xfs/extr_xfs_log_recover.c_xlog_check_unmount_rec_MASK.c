
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_daddr_t ;
struct xlog_rec_header {int h_num_logops; int h_len; int h_version; int h_size; } ;
struct xlog_op_header {int oh_flags; } ;
struct xlog {int l_curr_cycle; int l_last_sync_lsn; int l_tail_lsn; TYPE_1__* l_mp; } ;
struct TYPE_2__ {int m_sb; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (struct xlog*,scalar_t__,int,char*,char**) ;
 scalar_t__ FUNC_5 (struct xlog*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(
 struct xlog *VAR_3,
 xfs_daddr_t *VAR_4,
 xfs_daddr_t *VAR_5,
 struct xlog_rec_header *VAR_6,
 xfs_daddr_t VAR_7,
 char *VAR_8,
 bool *VAR_9)
{
 struct xlog_op_header *VAR_10;
 xfs_daddr_t VAR_11;
 xfs_daddr_t VAR_12;
 int VAR_13;
 int VAR_14;
 char *VAR_15;

 *VAR_9 = 0;
 if (FUNC_2(&VAR_3->l_mp->m_sb)) {
  int VAR_16 = FUNC_1(VAR_6->h_size);
  int VAR_17 = FUNC_1(VAR_6->h_version);

  if ((VAR_17 & VAR_2) &&
      (VAR_16 > VAR_0)) {
   VAR_13 = VAR_16 / VAR_0;
   if (VAR_16 % VAR_0)
    VAR_13++;
  } else {
   VAR_13 = 1;
  }
 } else {
  VAR_13 = 1;
 }

 VAR_12 = FUNC_5(VAR_3,
   VAR_7 + VAR_13 + FUNC_0(FUNC_1(VAR_6->h_len)));

 if (*VAR_4 == VAR_12 &&
     FUNC_1(VAR_6->h_num_logops) == 1) {
  VAR_11 = FUNC_5(VAR_3, VAR_7 + VAR_13);
  VAR_14 = FUNC_4(VAR_3, VAR_11, 1, VAR_8, &VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_10 = (struct xlog_op_header *)VAR_15;
  if (VAR_10->oh_flags & VAR_1) {





   FUNC_3(&VAR_3->l_tail_lsn,
     VAR_3->l_curr_cycle, VAR_12);
   FUNC_3(&VAR_3->l_last_sync_lsn,
     VAR_3->l_curr_cycle, VAR_12);
   *VAR_5 = VAR_12;

   *VAR_9 = 1;
  }
 }

 return 0;
}
