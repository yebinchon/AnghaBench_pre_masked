
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int PGRAPH; } ;
struct fb_info {struct nvidia_par* par; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(struct fb_info *VAR_0)
{
 struct nvidia_par *VAR_1 = VAR_0->par;
 int VAR_2 = 1000000000;

 while (--VAR_2 && FUNC_0(VAR_1->PGRAPH, 0x0700)) ;

 if (!VAR_2) {
  FUNC_2("nvidiafb: DMA Sync lockup\n");
  FUNC_1(VAR_0);
 }
}
