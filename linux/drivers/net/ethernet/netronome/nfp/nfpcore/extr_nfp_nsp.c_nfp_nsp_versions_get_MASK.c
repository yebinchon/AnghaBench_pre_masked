
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum nfp_nsp_versions { ____Placeholder_nfp_nsp_versions } nfp_nsp_versions ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int const*) ;
 unsigned int FUNC_3 (int const*,unsigned int) ;

const char *FUNC_4(enum nfp_nsp_versions VAR_2, bool VAR_3,
     const u8 *VAR_4, unsigned int VAR_5)
{
 static const u32 VAR_6[] = {
  [139] = 138,
  [133] = 132,
  [141] = 140,
  [137] = 136,
  [129] = 128,
  [131] = 130,
  [135] = 134,
 };
 unsigned int VAR_7, VAR_8, VAR_9;

 if (VAR_2 >= FUNC_0(VAR_6) || !VAR_6[VAR_2])
  return FUNC_1(-VAR_0);

 VAR_7 = VAR_2 * 2 + VAR_3;

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 <= VAR_7)
  return FUNC_1(-VAR_1);

 VAR_9 = FUNC_2(VAR_4 + VAR_6[VAR_2] + VAR_3 * 2);
 if (!VAR_9)
  return FUNC_1(-VAR_1);

 if (VAR_9 >= VAR_5)
  return FUNC_1(-VAR_0);
 if (FUNC_3(&VAR_4[VAR_9], VAR_5 - VAR_9) == VAR_5 - VAR_9)
  return FUNC_1(-VAR_0);

 return (const char *)&VAR_4[VAR_9];
}
