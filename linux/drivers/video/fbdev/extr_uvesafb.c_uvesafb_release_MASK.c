
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvesafb_par {int ref_count; int vbe_state_orig; } ;
struct TYPE_3__ {int eax; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;
struct uvesafb_ktask {TYPE_2__ t; } ;
struct fb_info {struct uvesafb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvesafb_ktask*) ;
 int FUNC_3 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_4 () ;
 int FUNC_5 (struct uvesafb_par*,int ) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_1, int VAR_2)
{
 struct uvesafb_ktask *VAR_3 = ((void*)0);
 struct uvesafb_par *VAR_4 = VAR_1->par;
 int VAR_5 = FUNC_1(&VAR_4->ref_count);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_5 != 1)
  goto out;

 VAR_3 = FUNC_4();
 if (!VAR_3)
  goto out;


 VAR_3->t.regs.eax = 0x0003;
 FUNC_2(VAR_3);





 FUNC_5(VAR_4, VAR_4->vbe_state_orig);
out:
 FUNC_0(&VAR_4->ref_count);
 FUNC_3(VAR_3);
 return 0;
}
