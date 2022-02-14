
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int height; int width; int top; int left; } ;
struct stm32_dcmi {int regs; TYPE_1__ crop; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct stm32_dcmi *VAR_4)
{
 u32 VAR_5, VAR_6;


 VAR_5 = ((VAR_4->crop.height - 1) << 16) |
  ((VAR_4->crop.width << 1) - 1);
 FUNC_2(VAR_4->regs, VAR_2, VAR_5);


 VAR_6 = ((VAR_4->crop.top) << 16) |
   ((VAR_4->crop.left << 1));
 FUNC_2(VAR_4->regs, VAR_3, VAR_6);

 FUNC_0(VAR_4->dev, "Cropping to %ux%u@%u:%u\n",
  VAR_4->crop.width, VAR_4->crop.height,
  VAR_4->crop.left, VAR_4->crop.top);


 FUNC_1(VAR_4->regs, VAR_1, VAR_0);
}
