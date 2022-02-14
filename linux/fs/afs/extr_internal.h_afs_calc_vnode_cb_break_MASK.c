
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {unsigned int cb_break; unsigned int cb_v_break; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct afs_vnode *VAR_0)
{
 return VAR_0->cb_break + VAR_0->cb_v_break;
}
