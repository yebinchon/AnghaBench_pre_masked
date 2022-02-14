
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_blocking; int l_level; int l_name; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_lock_res *VAR_2,
         int VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_2->l_lock);

 if (VAR_3 > VAR_2->l_blocking) {




  if (FUNC_3(VAR_3) <
      FUNC_3(VAR_2->l_blocking))
   VAR_4 = 1;

  VAR_2->l_blocking = VAR_3;
 }

 FUNC_2(VAR_0, "lockres %s, block %d, level %d, l_block %d, dwn %d\n",
      VAR_2->l_name, VAR_3, VAR_2->l_level, VAR_2->l_blocking,
      VAR_4);

 if (VAR_4)
  FUNC_1(VAR_2, VAR_1);
 FUNC_2(0, "needs_downconvert = %d\n", VAR_4);
 return VAR_4;
}
