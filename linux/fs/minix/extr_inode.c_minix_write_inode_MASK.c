
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 struct buffer_head* FUNC_1 (struct inode*) ;
 struct buffer_head* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, struct writeback_control *VAR_4)
{
 int VAR_5 = 0;
 struct buffer_head *VAR_6;

 if (FUNC_0(VAR_3) == VAR_1)
  VAR_6 = FUNC_1(VAR_3);
 else
  VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return -VAR_0;
 if (VAR_4->sync_mode == VAR_2 && FUNC_4(VAR_6)) {
  FUNC_8(VAR_6);
  if (FUNC_5(VAR_6) && !FUNC_6(VAR_6)) {
   FUNC_7("IO error syncing minix inode [%s:%08lx]\n",
    VAR_3->i_sb->s_id, VAR_3->i_ino);
   VAR_5 = -VAR_0;
  }
 }
 FUNC_3 (VAR_6);
 return VAR_5;
}
