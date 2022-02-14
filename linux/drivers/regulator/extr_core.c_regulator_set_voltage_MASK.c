
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct regulator {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ww_acquire_ctx*) ;
 int FUNC_1 (struct regulator*,int,int,int ) ;
 int FUNC_2 (int ,struct ww_acquire_ctx*) ;

int FUNC_3(struct regulator *VAR_1, int VAR_2, int VAR_3)
{
 struct ww_acquire_ctx VAR_4;
 int VAR_5;

 FUNC_0(VAR_1->rdev, &VAR_4);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3,
          VAR_0);

 FUNC_2(VAR_1->rdev, &VAR_4);

 return VAR_5;
}
