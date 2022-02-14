
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;


 int VAR_0 ;


 TYPE_1__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,char*,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,char*,int) ;

__attribute__((used)) static void FUNC_3(char VAR_3)
{
 unsigned int VAR_4 = VAR_2;
 int VAR_5 = -1;

 if (VAR_3 == '\n')
  FUNC_3('\r');

 do {
  switch(VAR_1.proto) {
  case 128:
   VAR_5 = FUNC_2(VAR_4, &VAR_3, 1);
   break;
  case 129:
   VAR_5 = FUNC_0(VAR_4, &VAR_3, 1);
   break;
  }




  FUNC_1(VAR_4);
 } while(VAR_5 == 0 || VAR_5 == -VAR_0);
}
