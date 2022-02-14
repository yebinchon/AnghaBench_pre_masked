
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int system; } ;
struct TYPE_4__ {TYPE_1__ param; } ;
struct msb_data {int caps; TYPE_2__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct msb_data*,int) ;
 int FUNC_1 (struct msb_data*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_2("Switch to parallel failed");
  VAR_4->regs.param.system &= ~VAR_2;
  FUNC_0(VAR_4, 1);
  return -VAR_0;
 }

 VAR_4->caps |= VAR_1;
 return 0;
}
