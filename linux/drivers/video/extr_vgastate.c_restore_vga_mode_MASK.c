
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgastate {int num_seq; int num_crtc; int num_gfx; int num_attr; int vgabase; scalar_t__ vidstate; } ;
struct regstate {int misc; int* seq; int* crtc; int * attr; int * gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,unsigned short) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,unsigned short,int,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_6(struct vgastate *VAR_4)
{
 struct regstate *VAR_5 = (struct regstate *) VAR_4->vidstate;
 unsigned short VAR_6;
 int VAR_7;

 FUNC_1(VAR_4->vgabase, VAR_1, VAR_5->misc);

 if (VAR_5->misc & 1)
  VAR_6 = 0x3d0;
 else
  VAR_6 = 0x3b0;


 FUNC_5(VAR_4->vgabase, VAR_2,
   VAR_5->seq[VAR_2] | 0x20);


 FUNC_5(VAR_4->vgabase, VAR_3, 0x01);


 FUNC_0(VAR_4->vgabase, VAR_6 + 0xa);
 FUNC_1(VAR_4->vgabase, VAR_0, 0x00);

 for (VAR_7 = 2; VAR_7 < VAR_4->num_seq; VAR_7++)
  FUNC_5(VAR_4->vgabase, VAR_7, VAR_5->seq[VAR_7]);



 FUNC_3(VAR_4->vgabase, VAR_6, 17, VAR_5->crtc[17] & ~0x80);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_crtc; VAR_7++)
  FUNC_3(VAR_4->vgabase, VAR_6, VAR_7, VAR_5->crtc[VAR_7]);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_gfx; VAR_7++)
  FUNC_4(VAR_4->vgabase, VAR_7, VAR_5->gfx[VAR_7]);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_attr; VAR_7++) {
  FUNC_0(VAR_4->vgabase, VAR_6 + 0xa);
  FUNC_2(VAR_4->vgabase, VAR_7, VAR_5->attr[VAR_7]);
 }


 FUNC_5(VAR_4->vgabase, VAR_3, 0x03);

 FUNC_5(VAR_4->vgabase, VAR_2,
   VAR_5->seq[VAR_2] & ~(1 << 5));


 FUNC_0(VAR_4->vgabase, VAR_6 + 0xa);
 FUNC_1(VAR_4->vgabase, VAR_0, 0x20);
}
