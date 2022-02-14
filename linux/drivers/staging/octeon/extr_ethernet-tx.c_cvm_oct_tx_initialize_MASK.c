
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;

void FUNC_4(void)
{
 int VAR_3;


 FUNC_1(FUNC_0(1), 0);

 VAR_3 = FUNC_3(VAR_0,
   VAR_2, 0,
   "Ethernet", VAR_1);

 if (VAR_3)
  FUNC_2("Could not acquire Ethernet IRQ %d\n", VAR_0);
}
