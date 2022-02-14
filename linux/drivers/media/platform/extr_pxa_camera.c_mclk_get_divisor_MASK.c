
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_camera_dev {unsigned long mclk; unsigned long ciclk; int platform_flags; int clk; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long,int) ;
 int FUNC_2 (int *,char*,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(struct platform_device *VAR_1,
       struct pxa_camera_dev *VAR_2)
{
 unsigned long VAR_3 = VAR_2->mclk;
 u32 VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2->clk);
 VAR_2->ciclk = VAR_5;


 if (VAR_3 > VAR_5 / 4) {
  VAR_3 = VAR_5 / 4;
  FUNC_2(&VAR_1->dev,
    "Limiting master clock to %lu\n", VAR_3);
 }


 VAR_4 = (VAR_5 + 2 * VAR_3 - 1) / (2 * VAR_3) - 1;


 if (VAR_2->platform_flags & VAR_0)
  VAR_2->mclk = VAR_5 / (2 * (VAR_4 + 1));

 FUNC_1(&VAR_1->dev, "LCD clock %luHz, target freq %luHz, divisor %u\n",
  VAR_5, VAR_3, VAR_4);

 return VAR_4;
}
