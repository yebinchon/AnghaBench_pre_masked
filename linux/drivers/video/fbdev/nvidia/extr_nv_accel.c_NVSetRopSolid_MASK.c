
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int currentRop; } ;
struct fb_info {struct nvidia_par* par; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct nvidia_par*,int ) ;
 int FUNC_1 (struct fb_info*,struct nvidia_par*,int ,int) ;
 int FUNC_2 (struct fb_info*,int ,int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nvidia_par *VAR_6 = VAR_3->par;

 if (VAR_5 != ~0) {
  FUNC_2(VAR_3, 0, VAR_5, ~0, ~0);
  if (VAR_6->currentRop != (VAR_4 + 32)) {
   FUNC_1(VAR_3, VAR_6, VAR_2, 1);
   FUNC_0(VAR_6, VAR_1[VAR_4]);
   VAR_6->currentRop = VAR_4 + 32;
  }
 } else if (VAR_6->currentRop != VAR_4) {
  if (VAR_6->currentRop >= 16)
   FUNC_2(VAR_3, ~0, ~0, ~0, ~0);
  FUNC_1(VAR_3, VAR_6, VAR_2, 1);
  FUNC_0(VAR_6, VAR_0[VAR_4]);
  VAR_6->currentRop = VAR_4;
 }
}
