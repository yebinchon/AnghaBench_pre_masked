
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fusb302_chip*,int ,int ) ;
 int FUNC_1 (struct fusb302_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_6, VAR_2,
    0xFF & ~VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_6, VAR_3, 0xFF);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_6, VAR_4, 0xFF);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_6, VAR_0,
         VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_7;
}
