
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;

void
FUNC_3(ushort VAR_8)
{
 VAR_4 = ((void*)0);




 if (VAR_8 != 1)
  if (FUNC_1(&VAR_5) < 0)
   FUNC_2("%s can't register misc device [minor=%d]\n",
       VAR_2, VAR_3);




 if (VAR_8 != 2)
  if (FUNC_1(&VAR_7) < 0)
   FUNC_2("%s can't register misc device [minor=%d]\n",
       VAR_0, VAR_1);

 FUNC_0(&VAR_6);
}
