
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct file {int f_pos; TYPE_2__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {struct inode* host; } ;
struct TYPE_3__ {int s_maxbytes; } ;


 int VAR_0 ;





 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int *,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct file*,int*,int) ;
 int FUNC_7 (struct file*,int,int ) ;

__attribute__((used)) static loff_t FUNC_8(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 int VAR_5 = 0;

 FUNC_1(VAR_4);

 switch (VAR_3) {
 case 128:
  break;
 case 130:



  VAR_5 = FUNC_4(VAR_4, ((void*)0), 0);
  if (VAR_5 < 0) {
   FUNC_3(VAR_5);
   goto out;
  }
  VAR_2 += FUNC_0(VAR_4);
  FUNC_5(VAR_4, 0);
  break;
 case 132:
  if (VAR_2 == 0) {
   VAR_2 = VAR_1->f_pos;
   goto out;
  }
  VAR_2 += VAR_1->f_pos;
  break;
 case 131:
 case 129:
  VAR_5 = FUNC_6(VAR_1, &VAR_2, VAR_3);
  if (VAR_5)
   goto out;
  break;
 default:
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_2 = FUNC_7(VAR_1, VAR_2, VAR_4->i_sb->s_maxbytes);

out:
 FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;
 return VAR_2;
}
