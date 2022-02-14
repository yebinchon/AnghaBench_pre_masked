
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {struct sh_mobile_lcdc_chan* ch; scalar_t__ started; } ;
struct sh_mobile_lcdc_chan {scalar_t__ enabled; TYPE_3__* bl; TYPE_2__* info; scalar_t__ frame_end; int frame_end_wait; } ;
struct TYPE_4__ {int power; } ;
struct TYPE_6__ {TYPE_1__ props; } ;
struct TYPE_5__ {int * fbdefio; int deferred_work; } ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_5 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_6 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_7 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sh_mobile_lcdc_priv *VAR_1)
{
 struct sh_mobile_lcdc_chan *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->ch); VAR_3++) {
  VAR_2 = &VAR_1->ch[VAR_3];
  if (!VAR_2->enabled)
   continue;





  if (VAR_2->info && VAR_2->info->fbdefio) {
   VAR_2->frame_end = 0;
   FUNC_3(&VAR_2->info->deferred_work, 0);
   FUNC_8(VAR_2->frame_end_wait, VAR_2->frame_end);
   FUNC_2(VAR_2->info);
   VAR_2->info->fbdefio = ((void*)0);
   FUNC_5(VAR_1);
  }

  if (VAR_2->bl) {
   VAR_2->bl->props.power = VAR_0;
   FUNC_1(VAR_2->bl);
  }

  FUNC_6(VAR_2);
 }


 if (VAR_1->started) {
  FUNC_7(VAR_1, 0);
  VAR_1->started = 0;
 }


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->ch); VAR_3++)
  if (VAR_1->ch[VAR_3].enabled)
   FUNC_4(VAR_1);
}
