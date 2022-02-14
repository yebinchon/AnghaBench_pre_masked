
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct afs_call {int state; int error; int state_lock; int abort_code; } ;
typedef enum afs_call_state { ____Placeholder_afs_call_state } afs_call_state ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct afs_call*) ;
 int FUNC_3 (struct afs_call*,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct afs_call *VAR_1,
      int VAR_2, u32 VAR_3)
{
 enum afs_call_state VAR_4;
 bool VAR_5 = 0;

 FUNC_0(&VAR_1->state_lock);
 VAR_4 = VAR_1->state;
 if (VAR_4 != VAR_0) {
  VAR_1->abort_code = VAR_3;
  VAR_1->error = VAR_2;
  VAR_1->state = VAR_0;
  FUNC_3(VAR_1, VAR_4, VAR_0,
         VAR_2, VAR_3);
  VAR_5 = 1;
 }
 FUNC_1(&VAR_1->state_lock);
 if (VAR_5)
  FUNC_2(VAR_1);
}
