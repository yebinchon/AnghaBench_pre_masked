
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*,size_t,unsigned int,int) ;
 int FUNC_1 (struct i2c_client*,unsigned int,size_t,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct i2c_client *VAR_2, char *VAR_3,
      unsigned int VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 if (FUNC_2(VAR_4 + VAR_5 > VAR_0))
  VAR_5 = VAR_0 - VAR_4;

 VAR_6 = FUNC_1(VAR_2, VAR_4,
          VAR_5, VAR_3);
 FUNC_0(&VAR_2->dev, "read %zu@%d --> %d\n", VAR_5, VAR_4, VAR_6);

 return VAR_6;
}
