
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int i_mode; } ;
struct gfs2_inode {scalar_t__ i_no_addr; scalar_t__ i_no_formal_ino; TYPE_2__ i_inode; } ;
struct TYPE_3__ {int no_formal_ino; int no_addr; } ;
struct gfs2_dirent {int de_type; TYPE_1__ de_inum; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;
 int FUNC_3 (struct gfs2_dirent*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 struct gfs2_dirent* FUNC_8 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct inode *VAR_3, const struct qstr *VAR_4,
     const struct gfs2_inode *VAR_5)
{
 struct buffer_head *VAR_6;
 struct gfs2_dirent *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_2, &VAR_6);
 if (VAR_7) {
  if (FUNC_2(VAR_7))
   return FUNC_3(VAR_7);
  if (VAR_5) {
   if (FUNC_5(VAR_7->de_inum.no_addr) != VAR_5->i_no_addr)
    goto out;
   if (FUNC_5(VAR_7->de_inum.no_formal_ino) !=
       VAR_5->i_no_formal_ino)
    goto out;
   if (FUNC_9(FUNC_1(VAR_5->i_inode.i_mode) !=
       FUNC_4(VAR_7->de_type))) {
    FUNC_7(FUNC_0(VAR_3));
    VAR_8 = -VAR_0;
    goto out;
   }
  }
  VAR_8 = 0;
out:
  FUNC_6(VAR_6);
 }
 return VAR_8;
}
