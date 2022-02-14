
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_alloc_reservation {scalar_t__ r_len; } ;



__attribute__((used)) static inline int FUNC_0(struct ocfs2_alloc_reservation *VAR_0)
{
 return !!(VAR_0->r_len == 0);
}
