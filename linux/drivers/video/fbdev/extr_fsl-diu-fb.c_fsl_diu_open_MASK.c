
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfb_info {scalar_t__ index; int count; int parent; } ;
struct fb_info {int var; struct mfb_info* par; } ;
struct TYPE_2__ {int (* release_bootmem ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,struct fb_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_3, int VAR_4)
{
 struct mfb_info *VAR_5 = VAR_3->par;
 int VAR_6 = 0;


 if ((VAR_5->index == VAR_0) && VAR_2.release_bootmem)
  VAR_2.release_bootmem();

 FUNC_4(&VAR_1);
 VAR_5->count++;
 if (VAR_5->count == 1) {
  FUNC_0(&VAR_3->var, VAR_3);
  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6 < 0)
   VAR_5->count--;
  else {
   FUNC_1(VAR_5->parent);
   FUNC_2(VAR_3);
  }
 }

 FUNC_5(&VAR_1);
 return VAR_6;
}
