
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_mapping; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4,
     int VAR_5)
{
 struct inode *VAR_6 = VAR_2->f_mapping->host;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_6);
 VAR_8 = FUNC_5(VAR_6->i_mapping);
 if (!(VAR_6->i_state & VAR_0))
  goto out;
 if (VAR_5 && !(VAR_6->i_state & VAR_1))
  goto out;

 VAR_7 = FUNC_4(VAR_6, 1);
 if (VAR_8 == 0)
  VAR_8 = VAR_7;

out:
 FUNC_3(VAR_6);

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_8 == 0)
  VAR_8 = VAR_7;
 return VAR_8;
}
