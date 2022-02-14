
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_stackflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ocfs2_super*) ;

__attribute__((used)) static inline int FUNC_1(struct ocfs2_super *VAR_1)
{
 return FUNC_0(VAR_1) &&
  (VAR_1->osb_stackflags & VAR_0);
}
