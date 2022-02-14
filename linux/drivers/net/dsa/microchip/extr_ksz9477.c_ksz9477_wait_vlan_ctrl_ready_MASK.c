
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int * regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct ksz_device *VAR_2)
{
 unsigned int VAR_3;

 return FUNC_0(VAR_2->regmap[0], VAR_0,
     VAR_3, !(VAR_3 & VAR_1), 10, 1000);
}
