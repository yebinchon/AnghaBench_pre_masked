
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_v4l2 {int vbi_width; int norm; int vbi_height; int vscale; int hscale; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int,int,int,int) ;
 int FUNC_1 (struct em28xx*,int ,int,int,int) ;
 int FUNC_2 (struct em28xx*,int ,int ) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (struct em28xx*) ;

__attribute__((used)) static int FUNC_7(struct em28xx *VAR_1)
{
 struct em28xx_v4l2 *VAR_2 = VAR_1->v4l2;
 int VAR_3 = FUNC_6(VAR_1);
 int VAR_4 = FUNC_5(VAR_1);


 VAR_2->vbi_width = 720;
 if (VAR_2->norm & VAR_0)
  VAR_2->vbi_height = 12;
 else
  VAR_2->vbi_height = 18;

 FUNC_3(VAR_1);

 FUNC_0(VAR_1, 1, (VAR_3 - 4) >> 2, 1, (VAR_4 - 4) >> 2);
 if (FUNC_4(VAR_1) == 1)
  FUNC_1(VAR_1, 0, 2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_1, 0, 0, VAR_3, VAR_4);

 return FUNC_2(VAR_1, VAR_2->hscale, VAR_2->vscale);
}
