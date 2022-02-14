
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {size_t vc_num; scalar_t__ vc_mode; } ;
struct TYPE_2__ {int spinlock; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_3 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_6)
{
 unsigned long VAR_7;

 if (!VAR_1[VAR_6->vc_num] || VAR_3)
  return;
 if (!FUNC_1(&VAR_2.spinlock, VAR_7))

  return;
 FUNC_0(VAR_6);
 if (VAR_6->vc_mode == VAR_0 && !VAR_4 && VAR_5[0]) {
  FUNC_3("%s", VAR_5);
  VAR_4 = 1;
 }
 FUNC_2(&VAR_2.spinlock, VAR_7);
}
