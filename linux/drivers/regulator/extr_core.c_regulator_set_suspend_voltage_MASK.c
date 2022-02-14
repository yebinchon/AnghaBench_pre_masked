
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ suspend_state_t ;
struct ww_acquire_ctx {int dummy; } ;
struct regulator {int rdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct regulator*,int,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct ww_acquire_ctx*) ;
 int FUNC_3 (int ,struct ww_acquire_ctx*) ;

int FUNC_4(struct regulator *VAR_2, int VAR_3,
      int VAR_4, suspend_state_t VAR_5)
{
 struct ww_acquire_ctx VAR_6;
 int VAR_7;


 if (FUNC_1(VAR_5) || VAR_5 == VAR_1)
  return -VAR_0;

 FUNC_2(VAR_2->rdev, &VAR_6);

 VAR_7 = FUNC_0(VAR_2, VAR_3,
          VAR_4, VAR_5);

 FUNC_3(VAR_2->rdev, &VAR_6);

 return VAR_7;
}
