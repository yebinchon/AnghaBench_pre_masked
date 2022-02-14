
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {scalar_t__ l_unlock_action; scalar_t__ l_action; int l_flags; int l_name; int l_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_5,
            struct ocfs2_lock_res *VAR_6)
{
 FUNC_1(&VAR_6->l_lock);

 if (VAR_6->l_unlock_action == VAR_4) {



  FUNC_2(VAR_0, "lockres %s, skip convert\n", VAR_6->l_name);
  return 0;
 }


 FUNC_0(VAR_6->l_action != VAR_1 &&
        VAR_6->l_action != VAR_2);


 VAR_6->l_unlock_action = VAR_4;

 FUNC_3(!(VAR_6->l_flags & VAR_3),
   "lock %s, invalid flags: 0x%lx\n",
   VAR_6->l_name, VAR_6->l_flags);

 FUNC_2(VAR_0, "lockres %s\n", VAR_6->l_name);

 return 1;
}
