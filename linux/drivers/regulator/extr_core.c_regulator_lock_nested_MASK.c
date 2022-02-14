
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct regulator_dev {scalar_t__ mutex_owner; int ref_cnt; int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct ww_acquire_ctx*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct regulator_dev *VAR_3,
     struct ww_acquire_ctx *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_0(&VAR_2);

 if (VAR_4 || !FUNC_3(&VAR_3->mutex)) {
  if (VAR_3->mutex_owner == VAR_1)
   VAR_3->ref_cnt++;
  else
   VAR_5 = 1;

  if (VAR_5) {
   FUNC_1(&VAR_2);
   VAR_6 = FUNC_2(&VAR_3->mutex, VAR_4);
   FUNC_0(&VAR_2);
  }
 } else {
  VAR_5 = 1;
 }

 if (VAR_5 && VAR_6 != -VAR_0) {
  VAR_3->ref_cnt++;
  VAR_3->mutex_owner = VAR_1;
 }

 FUNC_1(&VAR_2);

 return VAR_6;
}
