
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_x; scalar_t__ vc_y; int vc_cols; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int spinlock; } ;
struct TYPE_3__ {struct vc_data* d; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 size_t VAR_5 ;
 int FUNC_1 (struct vc_data*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct vc_data*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct vc_data*) ;
 int FUNC_5 (struct vc_data*) ;
 TYPE_2__ VAR_9 ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_17)
{
 struct vc_data *VAR_18 = VAR_11[VAR_2].d;
 unsigned long VAR_19;

 FUNC_0(&VAR_3);
 FUNC_7(&VAR_9.spinlock, VAR_19);
 if (VAR_2 != VAR_5) {
  VAR_6 = 0;
  goto out;
 }
 FUNC_5(VAR_18);
 if (VAR_13) {
  if (VAR_18->vc_x >= VAR_14 && VAR_18->vc_x <= VAR_15 &&
      VAR_18->vc_y >= VAR_16 && VAR_18->vc_y <= VAR_12) {
   VAR_10 = 0;
   VAR_6 = 0;
   goto out;
  }
 }
 if (VAR_4 == VAR_8) {
  FUNC_1(VAR_18, VAR_7);
  goto out;
 }
 if (VAR_4 == VAR_0) {
  if (FUNC_4(VAR_18)) {
   VAR_10 = 0;
   VAR_6 = 0;
   goto out;
  }
 }
 if (VAR_4 == VAR_1)
  FUNC_6(VAR_18);
 else if (VAR_6 == 1 || VAR_6 == 4)
  FUNC_3(VAR_18, 0, VAR_18->vc_cols, 0);
 else
  FUNC_2(VAR_18);
 VAR_10 = 0;
 VAR_6 = 0;
out:
 FUNC_8(&VAR_9.spinlock, VAR_19);
}
