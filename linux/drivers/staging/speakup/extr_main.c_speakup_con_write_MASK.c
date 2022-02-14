
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {scalar_t__ vc_num; int vc_x; scalar_t__ vc_y; } ;
struct TYPE_2__ {int spinlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,int) ;
 int VAR_9 ;
 int FUNC_4 (struct vc_data*,int *,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_15, u16 *VAR_16, int VAR_17)
{
 unsigned long VAR_18;

 if ((VAR_15->vc_num != VAR_2) || VAR_8 || !VAR_9)
  return;
 if (!FUNC_1(&VAR_5.spinlock, VAR_18))

  return;
 if (VAR_6 && VAR_7 && (VAR_15->vc_x == VAR_6 - 1))
  FUNC_0(3);
 if ((VAR_3) || (VAR_1 == VAR_4)) {
  if (VAR_1 == VAR_0)
   FUNC_4(VAR_15, VAR_16, VAR_17);
  FUNC_2(&VAR_5.spinlock, VAR_18);
  return;
 }
 if (VAR_11) {
  if (VAR_15->vc_x >= VAR_12 && VAR_15->vc_x <= VAR_13 &&
      VAR_15->vc_y >= VAR_14 && VAR_15->vc_y <= VAR_10) {
   FUNC_2(&VAR_5.spinlock, VAR_18);
   return;
  }
 }

 FUNC_3(VAR_16, VAR_17);
 FUNC_2(&VAR_5.spinlock, VAR_18);
}
