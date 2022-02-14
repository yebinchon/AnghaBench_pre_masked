
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4])
   FUNC_1(VAR_3[VAR_4]);
 }

 VAR_2 = ((void*)0);
 VAR_1 = ((void*)0);
 FUNC_0("saa7134 ALSA driver for DMA sound unloaded\n");

 return;
}
