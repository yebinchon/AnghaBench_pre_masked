
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const,int const,int const,int const,int const,int const) ;
 int FUNC_1 (char*) ;

u64 FUNC_2(const u64 VAR_2, const u64 VAR_3,
        const u8 VAR_4, const u8 VAR_5,
        const u64 VAR_6, const u64 VAR_7)
{
 if ((VAR_7 > 1) && (VAR_6 & ~VAR_1)) {
  FUNC_1("not on pageboundary\n");
  return VAR_0;
 }

 return FUNC_0(VAR_2, VAR_4,
         VAR_5, VAR_3,
         VAR_6, VAR_7);
}
