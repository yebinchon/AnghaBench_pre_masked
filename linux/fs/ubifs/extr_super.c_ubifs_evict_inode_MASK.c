
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {scalar_t__ dirty; scalar_t__ ui_size; scalar_t__ xattr; } ;
struct TYPE_4__ {scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct ubifs_info {TYPE_2__ bi; } ;
struct inode {int i_ino; scalar_t__ i_size; scalar_t__ i_nlink; int i_data; int i_count; scalar_t__ i_mode; TYPE_1__* i_sb; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ubifs_info*,int) ;
 int FUNC_8 (struct ubifs_info*,char*,int ,int) ;
 struct ubifs_inode* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ubifs_info*,struct inode*) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_inode*) ;

__attribute__((used)) static void FUNC_12(struct inode *VAR_0)
{
 int VAR_1;
 struct ubifs_info *VAR_2 = VAR_0->i_sb->s_fs_info;
 struct ubifs_inode *VAR_3 = FUNC_9(VAR_0);

 if (VAR_3->xattr)





  goto out;

 FUNC_2("inode %lu, mode %#x", VAR_0->i_ino, (int)VAR_0->i_mode);
 FUNC_7(VAR_2, !FUNC_0(&VAR_0->i_count));

 FUNC_6(&VAR_0->i_data);

 if (VAR_0->i_nlink)
  goto done;

 if (FUNC_4(VAR_0))
  goto out;

 VAR_3->ui_size = VAR_0->i_size = 0;
 VAR_1 = FUNC_10(VAR_2, VAR_0);
 if (VAR_1)




  FUNC_8(VAR_2, "can't delete inode %lu, error %d",
     VAR_0->i_ino, VAR_1);

out:
 if (VAR_3->dirty)
  FUNC_11(VAR_2, VAR_3);
 else {

  VAR_2->bi.nospace = VAR_2->bi.nospace_rp = 0;
  FUNC_5();
 }
done:
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
