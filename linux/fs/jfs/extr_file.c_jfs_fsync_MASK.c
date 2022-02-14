
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_state; int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int log; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct file *VAR_3, loff_t VAR_4, loff_t VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_3->f_mapping->host;
 int VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7);
 if (!(VAR_7->i_state & VAR_1) ||
     (VAR_6 && !(VAR_7->i_state & VAR_2))) {

  FUNC_5(FUNC_0(VAR_7->i_sb)->log, 1);
  FUNC_3(VAR_7);
  return VAR_8;
 }

 VAR_8 |= FUNC_4(VAR_7, 1);
 FUNC_3(VAR_7);

 return VAR_8 ? -VAR_0 : 0;
}
