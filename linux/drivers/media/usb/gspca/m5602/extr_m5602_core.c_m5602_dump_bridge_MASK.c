
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;


 int FUNC_0 (struct sd*,int,unsigned char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 0x80; VAR_1++) {
  unsigned char VAR_2 = 0;
  FUNC_0(VAR_0, VAR_1, &VAR_2);
  FUNC_1("ALi m5602 address 0x%x contains 0x%x\n", VAR_1, VAR_2);
 }
 FUNC_1("Warning: The ALi m5602 webcam probably won't work until it's power cycled\n");
}
