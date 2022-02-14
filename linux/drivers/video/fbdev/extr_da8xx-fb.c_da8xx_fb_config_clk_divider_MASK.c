
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_fb_par {unsigned int lcdc_clk_rate; int lcdc_clk; int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct da8xx_fb_par *VAR_8,
           unsigned VAR_9,
           unsigned VAR_10)
{
 int VAR_11;

 if (VAR_8->lcdc_clk_rate != VAR_10) {
  VAR_11 = FUNC_2(VAR_8->lcdc_clk, VAR_10);
  if (VAR_11) {
   FUNC_3(VAR_8->dev,
    "unable to set clock rate at %u\n",
    VAR_10);
   return VAR_11;
  }
  VAR_8->lcdc_clk_rate = FUNC_1(VAR_8->lcdc_clk);
 }


 FUNC_4(FUNC_0(VAR_9) |
   (VAR_2 & 0x1), VAR_1);

 if (VAR_7 == VAR_6)
  FUNC_4(VAR_4 | VAR_5 |
    VAR_3, VAR_0);

 return 0;
}
