
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_alloc_reservation {unsigned int r_flags; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

void FUNC_1(struct ocfs2_alloc_reservation *VAR_1,
    unsigned int VAR_2)
{
 FUNC_0(VAR_2 & ~VAR_0);

 VAR_1->r_flags |= VAR_2;
}
