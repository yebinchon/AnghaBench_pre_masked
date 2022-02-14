
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {scalar_t__ gl_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct gfs2_glock *VAR_1)
{
 return VAR_1->gl_state == VAR_0;
}
