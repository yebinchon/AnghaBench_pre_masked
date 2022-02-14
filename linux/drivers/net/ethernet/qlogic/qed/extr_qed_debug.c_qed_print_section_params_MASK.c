
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,char const**,char const**,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static u32 FUNC_4(u32 *VAR_0,
        u32 VAR_1,
        char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  const char *VAR_7, *VAR_8;
  u32 VAR_9 = 0;

  VAR_5 += FUNC_1(VAR_0 + VAR_5,
           &VAR_7,
           &VAR_8, &VAR_9);

  if (VAR_8)
   VAR_6 +=
    FUNC_2(FUNC_0(VAR_2,
       VAR_6),
     "%s: %s\n", VAR_7, VAR_8);
  else if (FUNC_3(VAR_7, "fw-timestamp"))
   VAR_6 +=
    FUNC_2(FUNC_0(VAR_2,
       VAR_6),
     "%s: %d\n", VAR_7, VAR_9);
 }

 VAR_6 += FUNC_2(FUNC_0(VAR_2, VAR_6),
      "\n");

 *VAR_3 = VAR_6;

 return VAR_5;
}
