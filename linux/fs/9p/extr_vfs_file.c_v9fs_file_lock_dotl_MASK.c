
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; int i_mapping; } ;
struct file_lock {scalar_t__ fl_type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,char*,struct file*,int,struct file_lock*,struct file*) ;
 int FUNC_8 (struct file*,int,struct file_lock*) ;
 int FUNC_9 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, int VAR_5, struct file_lock *VAR_6)
{
 struct inode *VAR_7 = FUNC_4(VAR_4);
 int VAR_8 = -VAR_1;

 FUNC_7(VAR_3, "filp: %p cmd:%d lock: %p name: %pD\n",
   VAR_4, VAR_5, VAR_6, VAR_4);


 if (FUNC_3(VAR_7) && VAR_6->fl_type != VAR_2)
  goto out_err;

 if ((FUNC_1(VAR_5) || FUNC_2(VAR_5)) && VAR_6->fl_type != VAR_2) {
  FUNC_5(VAR_7->i_mapping);
  FUNC_6(&VAR_7->i_data, 0, -1);
 }

 if (FUNC_1(VAR_5) || FUNC_2(VAR_5))
  VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_6);
 else if (FUNC_0(VAR_5))
  VAR_8 = FUNC_9(VAR_4, VAR_6);
 else
  VAR_8 = -VAR_0;
out_err:
 return VAR_8;
}
