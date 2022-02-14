
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c_fb {int output_on; int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct s3c_fb *VAR_3, int VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3->regs + VAR_0);

 if (VAR_4 && !VAR_3->output_on)
  FUNC_0(VAR_3->dev);

 if (VAR_4) {
  VAR_5 |= VAR_1 | VAR_2;
 } else {




  if (VAR_5 & VAR_1) {
   VAR_5 |= VAR_1;
   VAR_5 &= ~VAR_2;
  }
 }

 FUNC_3(VAR_5, VAR_3->regs + VAR_0);

 if (!VAR_4 && VAR_3->output_on)
  FUNC_1(VAR_3->dev);

 VAR_3->output_on = VAR_4;
}
