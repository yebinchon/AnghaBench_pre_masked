
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int const __be32 ;


 scalar_t__ VAR_0 ;
 int const FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,int) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static u64 FUNC_3(__be32 *VAR_1, const __be32 *VAR_2, int VAR_3, int VAR_4,
  int VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8;


 if ((VAR_1[0] ^ VAR_2[0]) & FUNC_0(1))
  return VAR_0;


 VAR_6 = FUNC_1(VAR_2 + 1, VAR_3 - 1);
 VAR_7 = FUNC_1(VAR_2 + VAR_3 + VAR_5, VAR_4);
 VAR_8 = FUNC_1(VAR_1 + 1, VAR_3 - 1);

 FUNC_2("ISA map, cp=%llx, s=%llx, da=%llx\n",
   (unsigned long long)VAR_6, (unsigned long long)VAR_7,
   (unsigned long long)VAR_8);

 if (VAR_8 < VAR_6 || VAR_8 >= (VAR_6 + VAR_7))
  return VAR_0;
 return VAR_8 - VAR_6;
}
