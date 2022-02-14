
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_km_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int) ;
 int FUNC_4 (size_t,int,int ) ;

void *
FUNC_5(size_t VAR_3, int VAR_4, xfs_km_flags_t VAR_5)
{
 void *VAR_6;

 FUNC_4(VAR_3, VAR_5, VAR_2);

 if (FUNC_0(VAR_4 >= VAR_1))
  VAR_4 = VAR_1 - 1;

 VAR_6 = FUNC_3(VAR_3, VAR_5 | VAR_0);
 if (VAR_6) {
  if (!((uintptr_t)VAR_6 & VAR_4))
   return VAR_6;
  FUNC_2(VAR_6);
 }
 return FUNC_1(VAR_3, VAR_5);
}
