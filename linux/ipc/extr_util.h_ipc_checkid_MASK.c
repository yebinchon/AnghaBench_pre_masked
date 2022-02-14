
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {scalar_t__ seq; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct kern_ipc_perm *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_1) != VAR_0->seq;
}
