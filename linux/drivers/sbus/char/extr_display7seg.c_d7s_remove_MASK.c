
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int * resource; int dev; } ;
struct d7s {int regs; scalar_t__ flipped; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct d7s* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct d7s *VAR_4 = FUNC_0(&VAR_3->dev);
 u8 VAR_5 = FUNC_3(VAR_4->regs);


 if (VAR_2) {
  if (VAR_4->flipped)
   VAR_5 |= VAR_0;
  else
   VAR_5 &= ~VAR_0;
  FUNC_4(VAR_5, VAR_4->regs);
 }

 FUNC_1(&VAR_1);
 FUNC_2(&VAR_3->resource[0], VAR_4->regs, sizeof(u8));

 return 0;
}
