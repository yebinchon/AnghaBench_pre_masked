
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_flags; int osb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_super *VAR_2,
         int VAR_3)
{
 FUNC_0(&VAR_2->osb_lock);
 VAR_2->osb_flags &= ~(VAR_1|VAR_0);
 if (VAR_3)
  VAR_2->osb_flags |= VAR_0;
 else
  VAR_2->osb_flags |= VAR_1;
 FUNC_1(&VAR_2->osb_lock);
}
