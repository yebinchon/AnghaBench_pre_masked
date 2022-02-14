
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int deleted; } ;



__attribute__((used)) static inline bool FUNC_0(struct kern_ipc_perm *VAR_0)
{
 return !VAR_0->deleted;
}
