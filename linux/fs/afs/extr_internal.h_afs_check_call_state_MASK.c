
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call {int state; } ;
typedef enum afs_call_state { ____Placeholder_afs_call_state } afs_call_state ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct afs_call *VAR_0,
     enum afs_call_state VAR_1)
{
 return FUNC_0(VAR_0->state) == VAR_1;
}
