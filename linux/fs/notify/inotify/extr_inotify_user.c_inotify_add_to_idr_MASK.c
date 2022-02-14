
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_inode_mark {int wd; int fsn_mark; } ;
struct idr {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct idr*,struct inotify_inode_mark*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct idr *VAR_2, spinlock_t *VAR_3,
         struct inotify_inode_mark *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_0);
 FUNC_4(VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_4, 1, 0, VAR_1);
 if (VAR_5 >= 0) {

  VAR_4->wd = VAR_5;
  FUNC_0(&VAR_4->fsn_mark);
 }

 FUNC_5(VAR_3);
 FUNC_3();
 return VAR_5 < 0 ? VAR_5 : 0;
}
