
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;




 int FUNC_0 (int ,char*,int) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(char VAR_1)
{
 int VAR_2 = -1;
 unsigned char VAR_3[16];

 if (!VAR_0[0])
  return;

 if (VAR_1 == '\n')
  FUNC_2('\r');

 do {
  switch(VAR_0[0]->proto) {
  case 128:




   VAR_3[0] = VAR_1;
   VAR_2 = FUNC_1(0, VAR_3, 1);
   break;
  case 129:
   VAR_2 = FUNC_0(0, &VAR_1, 1);
   break;
  }
 } while(VAR_2 == 0);
}
