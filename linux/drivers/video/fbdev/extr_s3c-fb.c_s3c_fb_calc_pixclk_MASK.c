
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_clksel; } ;
struct s3c_fb {int dev; int lcd_clk; int bus_clk; TYPE_1__ variant; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned long,unsigned int,unsigned long) ;
 int FUNC_2 (unsigned long long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct s3c_fb *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned long long VAR_3;
 unsigned int VAR_4;

 if (VAR_0->variant.has_clksel)
  VAR_2 = FUNC_0(VAR_0->bus_clk);
 else
  VAR_2 = FUNC_0(VAR_0->lcd_clk);

 VAR_3 = (unsigned long long)VAR_2;
 VAR_3 *= VAR_1;

 FUNC_2(VAR_3, 1000000000UL);
 VAR_4 = (unsigned int)VAR_3 / 1000;

 FUNC_1(VAR_0->dev, "pixclk=%u, clk=%lu, div=%d (%lu)\n",
  VAR_1, VAR_2, VAR_4, VAR_4 ? VAR_2 / VAR_4 : VAR_2);

 return VAR_4;
}
