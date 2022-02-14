
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int mm_lock; int fix; int var; scalar_t__ par; } ;
struct atafb_par {int dummy; } ;
struct TYPE_2__ {int (* encode_fix ) (int *,struct atafb_par*) ;int (* decode_var ) (int *,struct atafb_par*) ;} ;


 int FUNC_0 (struct atafb_par*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct atafb_par*) ;
 int FUNC_4 (int *,struct atafb_par*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_1)
{
 struct atafb_par *VAR_2 = (struct atafb_par *)VAR_1->par;


 VAR_0->decode_var(&VAR_1->var, VAR_2);
 FUNC_1(&VAR_1->mm_lock);
 VAR_0->encode_fix(&VAR_1->fix, VAR_2);
 FUNC_2(&VAR_1->mm_lock);


 FUNC_0(VAR_2);

 return 0;
}
