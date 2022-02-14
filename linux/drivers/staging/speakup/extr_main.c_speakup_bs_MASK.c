
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {size_t vc_num; } ;
struct TYPE_2__ {int spinlock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int * VAR_2 ;
 int FUNC_1 (struct vc_data*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_8)
{
 unsigned long VAR_9;

 if (!VAR_2[VAR_8->vc_num])
  return;
 if (!FUNC_2(&VAR_3.spinlock, VAR_9))

  return;
 if (!VAR_5)
  FUNC_1(VAR_8);
 if (VAR_6 || !VAR_7) {
  FUNC_3(&VAR_3.spinlock, VAR_9);
  return;
 }
 if (VAR_8->vc_num == VAR_0 && VAR_4) {
  VAR_4 = 0;
  if (!VAR_1)
   FUNC_0(VAR_8);
 }
 FUNC_3(&VAR_3.spinlock, VAR_9);
}
