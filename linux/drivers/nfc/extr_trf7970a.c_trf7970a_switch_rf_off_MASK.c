
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {scalar_t__ state; int aborting; int dev; int chip_status_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct trf7970a*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct trf7970a *VAR_4)
{
 if ((VAR_4->state == VAR_2) ||
     (VAR_4->state == VAR_3))
  return;

 FUNC_0(VAR_4->dev, "Switching rf off\n");

 VAR_4->chip_status_ctrl &= ~VAR_1;

 FUNC_3(VAR_4, VAR_0, VAR_4->chip_status_ctrl);

 VAR_4->aborting = 0;
 VAR_4->state = VAR_3;

 FUNC_1(VAR_4->dev);
 FUNC_2(VAR_4->dev);
}
