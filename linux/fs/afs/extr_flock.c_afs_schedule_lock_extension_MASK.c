
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct afs_vnode {int lock_work; int locked_at; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct afs_vnode *VAR_2)
{
 ktime_t VAR_3, VAR_4, VAR_5;
 u64 VAR_6;

 VAR_3 = FUNC_0(VAR_2->locked_at, VAR_0 * 1000 / 2);
 VAR_4 = FUNC_1();
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 <= 0)
  VAR_6 = 0;
 else
  VAR_6 = FUNC_4(FUNC_3(VAR_5));

 FUNC_5(VAR_1, &VAR_2->lock_work, VAR_6);
}
