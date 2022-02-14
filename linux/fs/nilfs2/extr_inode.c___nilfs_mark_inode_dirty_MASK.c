
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i_root; } ;
struct TYPE_3__ {int ifile; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*,struct buffer_head**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,int ,int) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct inode *VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_3);
 if (FUNC_7(VAR_4)) {
  FUNC_5(VAR_1->i_sb, VAR_0,
     "cannot mark inode dirty (ino=%lu): error %d loading inode block",
     VAR_1->i_ino, VAR_4);
  return VAR_4;
 }
 FUNC_6(VAR_1, VAR_3, VAR_2);
 FUNC_2(VAR_3);
 FUNC_4(FUNC_0(VAR_1)->i_root->ifile);
 FUNC_1(VAR_3);
 return 0;
}
