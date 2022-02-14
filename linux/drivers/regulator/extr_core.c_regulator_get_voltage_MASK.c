
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct regulator {int rdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ww_acquire_ctx*) ;
 int FUNC_2 (int ,struct ww_acquire_ctx*) ;

int FUNC_3(struct regulator *VAR_0)
{
 struct ww_acquire_ctx VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->rdev, &VAR_1);
 VAR_2 = FUNC_0(VAR_0->rdev);
 FUNC_2(VAR_0->rdev, &VAR_1);

 return VAR_2;
}
