
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int pinned_vm; } ;
struct TYPE_3__ {int this_device; } ;
struct TYPE_4__ {TYPE_1__ mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_5(struct mm_struct *VAR_6,
          int VAR_7)
{
 unsigned long VAR_8, VAR_9;

 if (!VAR_6 || !VAR_7 || !VAR_5)
  return 0;

 VAR_9 = FUNC_4(VAR_3) >> VAR_2;
 VAR_8 = FUNC_0(VAR_7, &VAR_6->pinned_vm);

 if ((VAR_8 > VAR_9) && !FUNC_2(VAR_0)) {
  FUNC_1(VAR_7, &VAR_6->pinned_vm);
  FUNC_3(VAR_4.mdev.this_device,
   "locked(%lu) > lock_limit(%lu)\n",
   VAR_8, VAR_9);
  return -VAR_1;
 }
 return 0;
}
