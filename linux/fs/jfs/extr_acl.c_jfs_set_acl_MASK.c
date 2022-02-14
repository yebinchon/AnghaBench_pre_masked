
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
typedef int tid_t ;
struct posix_acl {int dummy; } ;
struct inode {scalar_t__ i_mode; int i_ctime; int i_sb; } ;
struct TYPE_2__ {int commit_mutex; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,int,struct posix_acl*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,scalar_t__*,struct posix_acl**) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,struct inode**,int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 int VAR_4;
 tid_t VAR_5;
 int VAR_6 = 0;
 umode_t VAR_7 = VAR_1->i_mode;

 VAR_5 = FUNC_7(VAR_1->i_sb, 0);
 FUNC_4(&FUNC_0(VAR_1)->commit_mutex);
 if (VAR_3 == VAR_0 && VAR_2) {
  VAR_4 = FUNC_6(VAR_1, &VAR_7, &VAR_2);
  if (VAR_4)
   goto end_tx;
  if (VAR_7 != VAR_1->i_mode)
   VAR_6 = 1;
 }
 VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_3, VAR_2);
 if (!VAR_4) {
  if (VAR_6) {
   VAR_1->i_mode = VAR_7;
   VAR_1->i_ctime = FUNC_2(VAR_1);
   FUNC_3(VAR_1);
  }
  VAR_4 = FUNC_8(VAR_5, 1, &VAR_1, 0);
 }
end_tx:
 FUNC_9(VAR_5);
 FUNC_5(&FUNC_0(VAR_1)->commit_mutex);
 return VAR_4;
}
