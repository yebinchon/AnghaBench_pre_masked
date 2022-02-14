
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void FUNC_4(bool VAR_2)
{
 if (!FUNC_3(VAR_1)) {
  FUNC_2(VAR_2);
  return;
 }

 FUNC_0("FIFO merge %s\n", VAR_2 ? "enabled" : "disabled");
 FUNC_1(VAR_0, VAR_2 ? 1 : 0, 14, 14);
}
