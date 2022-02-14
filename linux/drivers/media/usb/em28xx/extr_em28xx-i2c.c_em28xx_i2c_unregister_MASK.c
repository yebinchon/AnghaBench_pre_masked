
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int * i2c_adap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct em28xx *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_2->i2c_adap[VAR_3]);
 return 0;
}
