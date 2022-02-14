
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call {int state; int state_lock; } ;
typedef enum afs_call_state { ____Placeholder_afs_call_state } afs_call_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct afs_call*,int,int,int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct afs_call *VAR_0,
          enum afs_call_state VAR_1,
          enum afs_call_state VAR_2)
{
 bool VAR_3 = 0;

 FUNC_0(&VAR_0->state_lock);
 if (VAR_0->state == VAR_1) {
  VAR_0->state = VAR_2;
  FUNC_2(VAR_0, VAR_1, VAR_2, 0, 0);
  VAR_3 = 1;
 }
 FUNC_1(&VAR_0->state_lock);
 return VAR_3;
}
