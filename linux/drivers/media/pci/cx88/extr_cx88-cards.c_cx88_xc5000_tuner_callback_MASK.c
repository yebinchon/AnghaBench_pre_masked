
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int boardnr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct cx88_core *VAR_2,
          int VAR_3, int VAR_4)
{
 switch (VAR_2->boardnr) {
 case 128:
  if (VAR_3 == 0) {
   return 0;
  }

  FUNC_2(1, "xc5000: unknown tuner callback command.\n");
  return -VAR_0;
 case 129:
  if (VAR_3 == 0) {
   FUNC_0(VAR_1, 0x00000010);
   FUNC_3(10000, 20000);
   FUNC_1(VAR_1, 0x00000010);
   return 0;
  }

  FUNC_2(1, "xc5000: unknown tuner callback command.\n");
  return -VAR_0;
 }
 return 0;
}
