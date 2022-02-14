
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
 int VAR_1 ;





 int FUNC_0 (struct file*,int ,int) ;
 int FUNC_1 (struct file*,int ,int,int ,int ) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_mapping->host;
 loff_t VAR_6 = VAR_5->i_sb->s_maxbytes;

 switch (VAR_4) {
 case 128:
 case 132:
 case 130:
  return FUNC_1(VAR_2, VAR_3, VAR_4,
      VAR_6, FUNC_2(VAR_5));
 case 131:
 case 129:
  if (VAR_3 < 0)
   return -VAR_1;
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 }

 return -VAR_0;
}
