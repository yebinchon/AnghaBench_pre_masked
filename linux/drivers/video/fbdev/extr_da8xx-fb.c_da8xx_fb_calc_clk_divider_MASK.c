
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_fb_par {unsigned int lcdc_clk_rate; int lcdc_clk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct da8xx_fb_par *VAR_2,
           unsigned VAR_3,
           unsigned *VAR_4)
{
 unsigned VAR_5;

 VAR_3 = FUNC_0(VAR_3) * 1000;

 *VAR_4 = VAR_2->lcdc_clk_rate;

 if (VAR_3 < (*VAR_4 / VAR_0)) {
  *VAR_4 = FUNC_1(VAR_2->lcdc_clk,
      VAR_3 * VAR_0);
  VAR_5 = VAR_0;
 } else if (VAR_3 > (*VAR_4 / VAR_1)) {
  *VAR_4 = FUNC_1(VAR_2->lcdc_clk,
      VAR_3 * VAR_1);
  VAR_5 = VAR_1;
 } else {
  VAR_5 = *VAR_4 / VAR_3;
 }

 return VAR_5;
}
