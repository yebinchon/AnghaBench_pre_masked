
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vnode {unsigned int cb_break; TYPE_1__* volume; } ;
struct afs_cb_interest {int dummy; } ;
struct TYPE_2__ {unsigned int cb_v_break; } ;



__attribute__((used)) static inline bool FUNC_0(unsigned int VAR_0,
        const struct afs_vnode *VAR_1,
        const struct afs_cb_interest *VAR_2)
{
 return !VAR_2 || VAR_0 != (VAR_1->cb_break +
        VAR_1->volume->cb_v_break);
}
