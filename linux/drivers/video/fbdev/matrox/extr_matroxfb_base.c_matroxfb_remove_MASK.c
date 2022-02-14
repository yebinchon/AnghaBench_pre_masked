
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vaddr; } ;
struct TYPE_8__ {int base; TYPE_1__ vbase; } ;
struct TYPE_6__ {int vaddr; } ;
struct TYPE_7__ {int len_maximum; int base; TYPE_2__ vbase; } ;
struct matrox_fb_info {int dead; TYPE_4__ mmio; TYPE_3__ video; int wc_cookie; int fbcon; scalar_t__ usecount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct matrox_fb_info*) ;
 int FUNC_3 (struct matrox_fb_info*) ;
 int FUNC_4 (struct matrox_fb_info*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct matrox_fb_info *VAR_0, int VAR_1)
{
 VAR_0->dead = 1;
 if (VAR_0->usecount) {

  return;
 }
 FUNC_4(VAR_0);
 FUNC_6(&VAR_0->fbcon);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0->wc_cookie);
 FUNC_1(VAR_0->mmio.vbase.vaddr);
 FUNC_1(VAR_0->video.vbase.vaddr);
 FUNC_5(VAR_0->video.base, VAR_0->video.len_maximum);
 FUNC_5(VAR_0->mmio.base, 16384);
 FUNC_2(VAR_0);
}
