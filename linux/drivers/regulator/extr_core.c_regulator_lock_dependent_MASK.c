
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct regulator_dev {int ref_cnt; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct regulator_dev*,struct regulator_dev**,struct regulator_dev**,struct ww_acquire_ctx*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_4 (struct ww_acquire_ctx*) ;
 int FUNC_5 (struct ww_acquire_ctx*,int *) ;
 int FUNC_6 (int *,struct ww_acquire_ctx*) ;

__attribute__((used)) static void FUNC_7(struct regulator_dev *VAR_3,
         struct ww_acquire_ctx *VAR_4)
{
 struct regulator_dev *VAR_5 = ((void*)0);
 struct regulator_dev *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_0(&VAR_1);

 FUNC_5(VAR_4, &VAR_2);

 do {
  if (VAR_5) {
   FUNC_6(&VAR_5->mutex, VAR_4);
   VAR_6 = VAR_5;
   VAR_6->ref_cnt++;
  }

  VAR_7 = FUNC_2(VAR_3,
            &VAR_5,
            &VAR_6,
            VAR_4);

  if (VAR_6)
   FUNC_3(VAR_6);

 } while (VAR_7 == -VAR_0);

 FUNC_4(VAR_4);

 FUNC_1(&VAR_1);
}
