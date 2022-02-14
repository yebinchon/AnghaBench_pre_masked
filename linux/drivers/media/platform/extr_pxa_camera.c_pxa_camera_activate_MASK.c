
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_camera_dev {int platform_flags; int mclk_divisor; int mclk; int clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pxa_camera_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct pxa_camera_dev *VAR_12)
{
 u32 VAR_13 = 0;


 FUNC_0(0x3ff, VAR_12->base + VAR_0);

 if (VAR_12->platform_flags & VAR_9)
  VAR_13 |= VAR_4;
 if (VAR_12->platform_flags & VAR_8)
  VAR_13 |= VAR_3;
 if (VAR_12->platform_flags & VAR_10)
  VAR_13 |= VAR_5;
 if (VAR_12->platform_flags & VAR_7)
  VAR_13 |= VAR_2;
 if (VAR_12->platform_flags & VAR_11)
  VAR_13 |= VAR_6;

 FUNC_0(VAR_12->mclk_divisor | VAR_13, VAR_12->base + VAR_1);

 if (VAR_12->platform_flags & VAR_8)

  FUNC_2(VAR_12, VAR_12->mclk);
 else

  FUNC_2(VAR_12, 13000000);

 FUNC_1(VAR_12->clk);
}
