
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_km_flags_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static void *
FUNC_4(size_t VAR_2, xfs_km_flags_t VAR_3)
{
 unsigned VAR_4 = 0;
 void *VAR_5;
 gfp_t VAR_6 = FUNC_1(VAR_3);

 if (VAR_3 & VAR_0)
  VAR_4 = FUNC_3();

 VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_1);

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_4);

 return VAR_5;
}
