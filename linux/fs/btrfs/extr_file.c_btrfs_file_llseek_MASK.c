
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int s_maxbytes; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;




 int FUNC_0 (struct inode*,int*,int) ;
 int FUNC_1 (struct file*,int,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct file*,int,int ) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 int VAR_5;

 FUNC_3(VAR_4);
 switch (VAR_3) {
 case 129:
 case 131:
  VAR_2 = FUNC_1(VAR_1, VAR_2, VAR_3);
  goto out;
 case 130:
 case 128:
  if (VAR_2 >= FUNC_2(VAR_4)) {
   FUNC_4(VAR_4);
   return -VAR_0;
  }

  VAR_5 = FUNC_0(VAR_4, &VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_4(VAR_4);
   return VAR_5;
  }
 }

 VAR_2 = FUNC_5(VAR_1, VAR_2, VAR_4->i_sb->s_maxbytes);
out:
 FUNC_4(VAR_4);
 return VAR_2;
}
