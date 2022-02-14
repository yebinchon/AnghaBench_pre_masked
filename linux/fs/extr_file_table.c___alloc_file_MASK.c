
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int fu_rcuhead; } ;
struct file {int f_flags; int f_mode; int f_pos_lock; int f_lock; TYPE_2__ f_owner; int f_count; TYPE_1__ f_u; int f_cred; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct cred const*) ;
 struct file* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct file *FUNC_12(int VAR_3, const struct cred *VAR_4)
{
 struct file *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_2, VAR_1);
 if (FUNC_11(!VAR_5))
  return FUNC_0(-VAR_0);

 VAR_5->f_cred = FUNC_5(VAR_4);
 VAR_6 = FUNC_9(VAR_5);
 if (FUNC_11(VAR_6)) {
  FUNC_4(&VAR_5->f_u.fu_rcuhead);
  return FUNC_0(VAR_6);
 }

 FUNC_2(&VAR_5->f_count, 1);
 FUNC_8(&VAR_5->f_owner.lock);
 FUNC_10(&VAR_5->f_lock);
 FUNC_7(&VAR_5->f_pos_lock);
 FUNC_3(VAR_5);
 VAR_5->f_flags = VAR_3;
 VAR_5->f_mode = FUNC_1(VAR_3);


 return VAR_5;
}
