
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgastate {int num_crtc; int num_attr; int num_gfx; int num_seq; int vgabase; scalar_t__ vidstate; } ;
struct regstate {int misc; int * seq; int * gfx; int * attr; int * crtc; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (int ,unsigned short) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned short,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct vgastate *VAR_2)
{
 struct regstate *VAR_3 = (struct regstate *) VAR_2->vidstate;
 unsigned short VAR_4;
 int VAR_5;

 VAR_3->misc = FUNC_0(VAR_2->vgabase, VAR_1);
 if (VAR_3->misc & 1)
  VAR_4 = 0x3d0;
 else
  VAR_4 = 0x3b0;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_crtc; VAR_5++)
  VAR_3->crtc[VAR_5] = FUNC_2(VAR_2->vgabase, VAR_4, VAR_5);

 FUNC_0(VAR_2->vgabase, VAR_4 + 0xa);
 FUNC_5(VAR_2->vgabase, VAR_0, 0x00);
 for (VAR_5 = 0; VAR_5 < VAR_2->num_attr; VAR_5++) {
  FUNC_0(VAR_2->vgabase, VAR_4 + 0xa);
  VAR_3->attr[VAR_5] = FUNC_1(VAR_2->vgabase, VAR_5);
 }
 FUNC_0(VAR_2->vgabase, VAR_4 + 0xa);
 FUNC_5(VAR_2->vgabase, VAR_0, 0x20);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_gfx; VAR_5++)
  VAR_3->gfx[VAR_5] = FUNC_3(VAR_2->vgabase, VAR_5);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_seq; VAR_5++)
  VAR_3->seq[VAR_5] = FUNC_4(VAR_2->vgabase, VAR_5);
}
