
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;




 TYPE_1__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,char*,int) ;
 int FUNC_1 (unsigned int,char*,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned int VAR_2 = VAR_1;
 int VAR_3 = 0;
 char VAR_4;

 switch(VAR_0.proto) {
 case 128:
  VAR_3 = FUNC_1(VAR_2, &VAR_4, 1);
  break;
 case 129:
  VAR_3 = FUNC_0(VAR_2, &VAR_4, 1);
  break;
 }
 if (!VAR_3)
  return -1;
 return VAR_4;
}
