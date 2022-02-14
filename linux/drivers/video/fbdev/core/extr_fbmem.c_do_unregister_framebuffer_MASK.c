
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ addr; } ;
struct fb_info {size_t node; int modelist; TYPE_1__ pixmap; } ;
struct fb_event {struct fb_info* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct fb_event*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (struct fb_info*) ;
 int ** VAR_3 ;
 int FUNC_8 (struct fb_info*) ;

__attribute__((used)) static void FUNC_9(struct fb_info *VAR_4)
{
 FUNC_8(VAR_4);
 if (VAR_4->pixmap.addr &&
     (VAR_4->pixmap.flags & VAR_1))
  FUNC_6(VAR_4->pixmap.addr);
 FUNC_3(&VAR_4->modelist);
 VAR_3[VAR_4->node] = ((void*)0);
 VAR_2--;
 FUNC_2(VAR_4);







 FUNC_0();
 FUNC_5(VAR_4);
 FUNC_1();


 FUNC_7(VAR_4);
}
