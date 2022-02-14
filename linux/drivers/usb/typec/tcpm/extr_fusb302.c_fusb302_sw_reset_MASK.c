
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fusb302_chip*,int ,int ) ;
 int FUNC_1 (struct fusb302_chip*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_0,
    VAR_1);
 if (VAR_3 < 0)
  FUNC_1(VAR_2, "cannot sw reset the chip, ret=%d", VAR_3);
 else
  FUNC_1(VAR_2, "sw reset");

 return VAR_3;
}
