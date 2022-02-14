
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_sbd {int sd_log_flush_lock; } ;
struct gfs2_rgrpd {int rd_flags; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_rbm {int offset; int bii; struct gfs2_rgrpd* rgd; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_glock {int gl_delete; struct gfs2_inode* gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (struct gfs2_sbd*,scalar_t__,int *,int ,struct gfs2_glock**) ;
 int FUNC_3 (struct gfs2_glock*) ;
 int VAR_7 ;
 int FUNC_4 (struct gfs2_rbm*,int ,int *,int *,int) ;
 scalar_t__ FUNC_5 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct gfs2_rbm*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct gfs2_rgrpd *VAR_8, u64 *VAR_9, u64 VAR_10)
{
 u64 VAR_11;
 struct gfs2_sbd *VAR_12 = VAR_8->rd_sbd;
 struct gfs2_glock *VAR_13;
 struct gfs2_inode *VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 struct gfs2_rbm VAR_17 = { .rgd = VAR_8, .bii = 0, .offset = 0 };

 while (1) {
  FUNC_1(&VAR_12->sd_log_flush_lock);
  VAR_15 = FUNC_4(&VAR_17, VAR_2, ((void*)0), ((void*)0),
          1);
  FUNC_8(&VAR_12->sd_log_flush_lock);
  if (VAR_15 == -VAR_1)
   break;
  if (FUNC_0(VAR_15))
   break;

  VAR_11 = FUNC_6(&VAR_17);
  if (FUNC_5(&VAR_17, VAR_11 + 1))
   break;
  if (*VAR_9 != VAR_4 && VAR_11 <= *VAR_9)
   continue;
  if (VAR_11 == VAR_10)
   continue;
  *VAR_9 = VAR_11;

  VAR_15 = FUNC_2(VAR_12, VAR_11, &VAR_7, VAR_0, &VAR_13);
  if (VAR_15)
   continue;
  VAR_14 = VAR_13->gl_object;

  if (VAR_14 || FUNC_7(VAR_6, &VAR_13->gl_delete) == 0)
   FUNC_3(VAR_13);
  else
   VAR_16++;


  if (VAR_16 > VAR_5)
   return;
 }

 VAR_8->rd_flags &= ~VAR_3;
 return;
}
