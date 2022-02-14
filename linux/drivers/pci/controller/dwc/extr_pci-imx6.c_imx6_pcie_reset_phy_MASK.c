
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct imx6_pcie {TYPE_1__* drvdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct imx6_pcie*,int ,int*) ;
 int FUNC_1 (struct imx6_pcie*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct imx6_pcie *VAR_4)
{
 u16 VAR_5;

 if (!(VAR_4->drvdata->flags & VAR_0))
  return;

 FUNC_0(VAR_4, VAR_1, &VAR_5);
 VAR_5 |= (VAR_2 |
  VAR_3);
 FUNC_1(VAR_4, VAR_1, VAR_5);

 FUNC_2(2000, 3000);

 FUNC_0(VAR_4, VAR_1, &VAR_5);
 VAR_5 &= ~(VAR_2 |
    VAR_3);
 FUNC_1(VAR_4, VAR_1, VAR_5);
}
