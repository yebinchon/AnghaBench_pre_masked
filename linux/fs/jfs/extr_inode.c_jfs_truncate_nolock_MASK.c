
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct inode {int i_ctime; int i_mtime; int i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int commit_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,struct inode**,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,struct inode*,scalar_t__,int) ;

void FUNC_11(struct inode *VAR_4, loff_t VAR_5)
{
 loff_t VAR_6;
 tid_t VAR_7;

 FUNC_0(VAR_5 >= 0);

 if (FUNC_6(VAR_0, VAR_4)) {
  FUNC_10(0, VAR_4, VAR_5, VAR_3);
  return;
 }

 do {
  VAR_7 = FUNC_7(VAR_4->i_sb, 0);







  FUNC_4(&FUNC_1(VAR_4)->commit_mutex);

  VAR_6 = FUNC_10(VAR_7, VAR_4, VAR_5,
         VAR_2 | VAR_1);
  if (VAR_6 < 0) {
   FUNC_9(VAR_7);
   FUNC_5(&FUNC_1(VAR_4)->commit_mutex);
   break;
  }

  VAR_4->i_mtime = VAR_4->i_ctime = FUNC_2(VAR_4);
  FUNC_3(VAR_4);

  FUNC_8(VAR_7, 1, &VAR_4, 0);
  FUNC_9(VAR_7);
  FUNC_5(&FUNC_1(VAR_4)->commit_mutex);
 } while (VAR_6 > VAR_5);
}
