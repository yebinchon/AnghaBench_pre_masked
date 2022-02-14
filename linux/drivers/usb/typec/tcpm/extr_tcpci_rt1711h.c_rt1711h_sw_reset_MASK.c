
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1711h_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt1711h_chip*,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct rt1711h_chip *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0x01);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(1000, 2000);
 return 0;
}
