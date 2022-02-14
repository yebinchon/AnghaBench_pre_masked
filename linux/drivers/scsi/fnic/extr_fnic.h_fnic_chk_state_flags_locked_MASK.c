
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {unsigned long state_flags; } ;



__attribute__((used)) static inline int
FUNC_0(struct fnic *VAR_0, unsigned long VAR_1)
{
 return ((VAR_0->state_flags & VAR_1) == VAR_1);
}
