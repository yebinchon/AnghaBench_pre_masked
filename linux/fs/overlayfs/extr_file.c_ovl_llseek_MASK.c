
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {scalar_t__ f_pos; } ;
struct fd {TYPE_1__* file; } ;
struct cred {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ f_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fd) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct cred* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct file*,struct fd*) ;
 int FUNC_6 (struct cred const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct file*,int ,int ) ;

__attribute__((used)) static loff_t FUNC_9(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_2);
 struct fd VAR_6;
 const struct cred *VAR_7;
 ssize_t VAR_8;





 if (VAR_3 == 0) {
  if (VAR_4 == VAR_0)
   return VAR_2->f_pos;

  if (VAR_4 == VAR_1)
   return FUNC_8(VAR_2, 0, 0);
 }

 VAR_8 = FUNC_5(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_2(VAR_5);
 VAR_6.file->f_pos = VAR_2->f_pos;

 VAR_7 = FUNC_4(VAR_5->i_sb);
 VAR_8 = FUNC_7(VAR_6.file, VAR_3, VAR_4);
 FUNC_6(VAR_7);

 VAR_2->f_pos = VAR_6.file->f_pos;
 FUNC_3(VAR_5);

 FUNC_0(VAR_6);

 return VAR_8;
}
