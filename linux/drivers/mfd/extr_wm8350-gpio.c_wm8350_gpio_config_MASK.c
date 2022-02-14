
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct wm8350*,int,int) ;
 int FUNC_1 (struct wm8350*,int,int) ;
 scalar_t__ FUNC_2 (struct wm8350*,int,int) ;
 scalar_t__ FUNC_3 (struct wm8350*,int,int) ;
 scalar_t__ FUNC_4 (struct wm8350*,int,int) ;
 scalar_t__ FUNC_5 (struct wm8350*,int,int) ;
 scalar_t__ FUNC_6 (struct wm8350*,int,int) ;

int FUNC_7(struct wm8350 *VAR_4, int VAR_5, int VAR_6, int VAR_7,
         int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{

 if (VAR_9 == VAR_2) {
  if (FUNC_5(VAR_4, VAR_5, 0))
   goto err;
  if (FUNC_4(VAR_4, VAR_5, 0))
   goto err;
 } else if (VAR_9 == VAR_3) {
  if (FUNC_4(VAR_4, VAR_5, 0))
   goto err;
  if (FUNC_5(VAR_4, VAR_5, 1))
   goto err;
 } else if (VAR_9 == VAR_1) {
  if (FUNC_5(VAR_4, VAR_5, 0))
   goto err;
  if (FUNC_4(VAR_4, VAR_5, 1))
   goto err;
 }

 if (FUNC_2(VAR_4, VAR_5, VAR_10))
  goto err;
 if (FUNC_3(VAR_4, VAR_5, VAR_8))
  goto err;
 if (FUNC_6(VAR_4, VAR_5, VAR_11))
  goto err;
 if (FUNC_0(VAR_4, VAR_5, VAR_6))
  goto err;
 return FUNC_1(VAR_4, VAR_5, VAR_7);

err:
 return -VAR_0;
}
