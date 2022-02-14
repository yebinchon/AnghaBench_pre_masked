
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgastate {int vgabase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vgastate *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->vgabase, VAR_2, 0xff);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  FUNC_0(VAR_3->vgabase, VAR_1, VAR_4);
  FUNC_0(VAR_3->vgabase, VAR_0, 0);
  FUNC_0(VAR_3->vgabase, VAR_0, 0);
  FUNC_0(VAR_3->vgabase, VAR_0, 0);
 }
}
