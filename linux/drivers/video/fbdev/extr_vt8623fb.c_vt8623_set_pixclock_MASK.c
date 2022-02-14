
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int vgabase; } ;
struct vt8623fb_info {TYPE_1__ state; } ;
struct fb_info {int node; struct vt8623fb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*,char*) ;
 int FUNC_1 (int *,int,int*,int*,int*,int ) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct fb_info *VAR_4, u32 VAR_5)
{
 struct vt8623fb_info *VAR_6 = VAR_4->par;
 u16 VAR_7, VAR_8, VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(&VAR_3, 1000000000 / VAR_5, &VAR_7, &VAR_8, &VAR_9, VAR_4->node);
 if (VAR_11 < 0) {
  FUNC_0(VAR_4, "cannot set requested pixclock, keeping old value\n");
  return;
 }


 VAR_10 = FUNC_4(VAR_6->state.vgabase, VAR_1);
 FUNC_5(VAR_6->state.vgabase, VAR_2, VAR_10 | VAR_0);


 FUNC_6(VAR_6->state.vgabase, 0x46, (VAR_8 | (VAR_9 << 6)));
 FUNC_6(VAR_6->state.vgabase, 0x47, VAR_7);

 FUNC_3(1000);


 FUNC_2(VAR_6->state.vgabase, 0x40, 0x02, 0x02);
 FUNC_2(VAR_6->state.vgabase, 0x40, 0x00, 0x02);
}
