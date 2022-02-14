
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int xattr_sem; } ;
struct TYPE_3__ {int s_journal; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,struct inode*,struct buffer_head*,size_t,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 struct buffer_head* FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct inode *VAR_0, size_t VAR_1,
      bool VAR_2, int *VAR_3)
{
 struct buffer_head *VAR_4;
 int VAR_5;

 *VAR_3 = 0;

 if (!FUNC_1(VAR_0->i_sb)->s_journal)
  return 0;

 FUNC_6(&FUNC_0(VAR_0)->xattr_sem);

 VAR_4 = FUNC_7(VAR_0);
 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
 } else {
  *VAR_3 = FUNC_4(VAR_0->i_sb, VAR_0, VAR_4,
          VAR_1, VAR_2);
  FUNC_5(VAR_4);
  VAR_5 = 0;
 }

 FUNC_8(&FUNC_0(VAR_0)->xattr_sem);
 return VAR_5;
}
