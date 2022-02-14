
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int MPT_DRIVER_CLASS ;
typedef int * MPT_CALLBACK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

u8
FUNC_1(MPT_CALLBACK VAR_7, MPT_DRIVER_CLASS VAR_8, char *VAR_9)
{
 u8 VAR_10;
 VAR_6 = VAR_1;





 for (VAR_10 = VAR_1-1; VAR_10; VAR_10--) {
  if (VAR_2[VAR_10] == ((void*)0)) {
   VAR_2[VAR_10] = VAR_7;
   VAR_4[VAR_10] = VAR_8;
   VAR_5[VAR_10] = ((void*)0);
   VAR_6 = VAR_10;
   FUNC_0(VAR_3[VAR_10], VAR_9,
    VAR_0+1);
   break;
  }
 }

 return VAR_6;
}
