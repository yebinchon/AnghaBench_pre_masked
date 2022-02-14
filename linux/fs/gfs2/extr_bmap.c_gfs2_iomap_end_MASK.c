
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iomap {int flags; int type; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {struct inode* sd_rindex; } ;
struct gfs2_inode {TYPE_2__* i_gl; TYPE_1__* i_qadata; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int gl_flags; } ;
struct TYPE_3__ {scalar_t__ qa_qd_num; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct gfs2_inode*,int,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct inode*,int,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_5, loff_t VAR_6, loff_t VAR_7,
     ssize_t VAR_8, unsigned VAR_9, struct iomap *VAR_10)
{
 struct gfs2_inode *VAR_11 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_12 = FUNC_1(VAR_5);

 switch (VAR_9 & (129 | 128)) {
 case 129:
  if (VAR_9 & VAR_1)
   return 0;
  break;
 case 128:
   if (VAR_10->type == VAR_4)
    return 0;
   break;
 default:
   return 0;
 }

 if (!FUNC_5(VAR_11))
  FUNC_6(VAR_11);

 if (VAR_5 == VAR_12->sd_rindex)
  FUNC_2(VAR_5);

 FUNC_3(VAR_11);

 if (VAR_7 != VAR_8 && (VAR_10->flags & VAR_2)) {

  loff_t VAR_13 = FUNC_9(VAR_5) - 1;
  loff_t VAR_14 = (VAR_6 + VAR_7) & ~VAR_13;

  VAR_6 = (VAR_6 + VAR_8 + VAR_13) & ~VAR_13;
  if (VAR_6 < VAR_14) {
   FUNC_13(VAR_5, VAR_6, VAR_14 - 1);
   FUNC_11(VAR_11, VAR_6, VAR_14 - VAR_6);
  }
 }

 if (VAR_11->i_qadata && VAR_11->i_qadata->qa_qd_num)
  FUNC_7(VAR_11);

 if (FUNC_14(!VAR_8))
  goto out_unlock;

 if (VAR_10->flags & VAR_3)
  FUNC_10(VAR_5);
 FUNC_12(VAR_0, &VAR_11->i_gl->gl_flags);

out_unlock:
 if (FUNC_4(VAR_9))
  FUNC_8(VAR_5);
 return 0;
}
