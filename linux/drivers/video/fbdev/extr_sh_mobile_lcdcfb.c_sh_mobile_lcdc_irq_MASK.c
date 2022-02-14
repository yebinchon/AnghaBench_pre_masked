
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {struct sh_mobile_lcdc_chan* ch; } ;
struct sh_mobile_lcdc_chan {int frame_end; int vsync_completion; int frame_end_wait; int enabled; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_3 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_4 (struct sh_mobile_lcdc_priv*,int ,unsigned long) ;
 int FUNC_5 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct sh_mobile_lcdc_priv *VAR_10 = VAR_9;
 struct sh_mobile_lcdc_chan *VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14;


 VAR_12 = FUNC_3(VAR_10, VAR_6);
 FUNC_4(VAR_10, VAR_6, (VAR_12 ^ VAR_2) & ~VAR_3);


 VAR_13 = (FUNC_3(VAR_10, VAR_7) & VAR_5) ? 1 : 0;


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_10->ch); VAR_14++) {
  VAR_11 = &VAR_10->ch[VAR_14];

  if (!VAR_11->enabled)
   continue;


  if (VAR_12 & VAR_1) {
   if (VAR_13 == FUNC_2(VAR_11)) {
    VAR_11->frame_end = 1;
    FUNC_6(&VAR_11->frame_end_wait);

    FUNC_5(VAR_10);
   }
  }


  if (VAR_12 & VAR_4)
   FUNC_1(&VAR_11->vsync_completion);
 }

 return VAR_0;
}
