
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {unsigned long l_flags; } ;


 int FUNC_0 (struct ocfs2_lock_res*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_lock_res *VAR_0,
    unsigned long VAR_1)
{
 FUNC_0(VAR_0, VAR_0->l_flags & ~VAR_1);
}
