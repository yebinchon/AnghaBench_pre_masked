
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;




 int FUNC_0 (int ,char*,int) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1 = 0;
 char VAR_2;

 if (!VAR_0[0])
  return -1;

 switch(VAR_0[0]->proto) {
 case 128:
  VAR_1 = FUNC_1(0, &VAR_2, 1);
  break;
 case 129:
  VAR_1 = FUNC_0(0, &VAR_2, 1);
  break;
 }
 if (!VAR_1)
  return -1;
 return VAR_2;
}
