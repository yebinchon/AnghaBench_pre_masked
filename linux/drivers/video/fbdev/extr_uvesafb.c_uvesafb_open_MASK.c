
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvesafb_par {int ref_count; int * vbe_state_orig; scalar_t__ vbe_state_size; } ;
struct fb_info {struct uvesafb_par* par; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (struct uvesafb_par*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_0, int VAR_1)
{
 struct uvesafb_par *VAR_2 = VAR_0->par;
 int VAR_3 = FUNC_3(&VAR_2->ref_count);
 u8 *VAR_4 = ((void*)0);

 if (!VAR_3 && VAR_2->vbe_state_size) {
  VAR_4 = FUNC_5(VAR_2);
  if (FUNC_0(VAR_4)) {
   FUNC_4("save hardware state failed, error code is %ld!\n",
    FUNC_1(VAR_4));
  } else {
   VAR_2->vbe_state_orig = VAR_4;
  }
 }

 FUNC_2(&VAR_2->ref_count);
 return 0;
}
