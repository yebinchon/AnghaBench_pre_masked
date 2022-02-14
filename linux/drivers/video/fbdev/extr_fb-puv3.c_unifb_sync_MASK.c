
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1)
{

 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 0x10000000; VAR_2++) {
  if (FUNC_1(VAR_0) & 0x1000000)
   return;
 }

 if (VAR_2 > 0x8000000)
  FUNC_0(VAR_1->device, "Warning: UniGFX GE time out ...\n");
}
