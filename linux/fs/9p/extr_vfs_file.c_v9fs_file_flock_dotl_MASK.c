
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; int i_mapping; } ;
struct file_lock {scalar_t__ fl_type; int fl_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,char*,struct file*,int,struct file_lock*,struct file*) ;
 int FUNC_7 (struct file*,int,struct file_lock*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, int VAR_7,
 struct file_lock *VAR_8)
{
 struct inode *VAR_9 = FUNC_3(VAR_6);
 int VAR_10 = -VAR_1;

 FUNC_6(VAR_5, "filp: %p cmd:%d lock: %p name: %pD\n",
   VAR_6, VAR_7, VAR_8, VAR_6);


 if (FUNC_2(VAR_9) && VAR_8->fl_type != VAR_4)
  goto out_err;

 if (!(VAR_8->fl_flags & VAR_2))
  goto out_err;

 if ((FUNC_0(VAR_7) || FUNC_1(VAR_7)) && VAR_8->fl_type != VAR_4) {
  FUNC_4(VAR_9->i_mapping);
  FUNC_5(&VAR_9->i_data, 0, -1);
 }

 VAR_8->fl_flags |= VAR_3;
 VAR_8->fl_flags ^= VAR_2;

 if (FUNC_0(VAR_7) | FUNC_1(VAR_7))
  VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8);
 else
  VAR_10 = -VAR_0;
out_err:
 return VAR_10;
}
