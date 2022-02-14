
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgastate {int * vidstate; } ;
struct regstate {int attr; int vga_cmap; int vga_text; int vga_font1; int vga_font0; } ;


 int FUNC_0 (struct regstate*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vgastate *VAR_0)
{
 if (VAR_0->vidstate != ((void*)0)) {
  struct regstate *VAR_1 = (struct regstate *) VAR_0->vidstate;

  FUNC_1(VAR_1->vga_font0);
  FUNC_1(VAR_1->vga_font1);
  FUNC_1(VAR_1->vga_text);
  FUNC_1(VAR_1->vga_cmap);
  FUNC_1(VAR_1->attr);
  FUNC_0(VAR_1);
  VAR_0->vidstate = ((void*)0);
 }
}
