
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gaudio {int dummy; } ;


 int FUNC_0 (struct gaudio*,char*) ;
 int FUNC_1 (struct gaudio*) ;

int FUNC_2(struct gaudio *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0, "we need at least one control device\n");

 return VAR_1;

}
