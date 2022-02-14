
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int substring_t ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int *,int*) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_5, u64 *VAR_6, u64 *VAR_7,
  const char *VAR_8)
{
 substring_t VAR_9[VAR_3];
 char *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14 = 0;
 u64 VAR_15;

 *VAR_6 = -1;
 *VAR_7 = -1;

 VAR_10 = VAR_11 = FUNC_1(VAR_8, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 while ((VAR_12 = FUNC_5(&VAR_11, ",\n")) != ((void*)0)) {
  if (!*VAR_12)
   continue;

  VAR_13 = FUNC_2(VAR_12, VAR_4, VAR_9);
  switch (VAR_13) {
  case 129:
   if (FUNC_3(VAR_9, &VAR_15)) {
    VAR_14 = -VAR_0;
    goto out_free_options;
   }
   *VAR_6 = VAR_15;
   break;
  case 128:
   if (FUNC_3(VAR_9, &VAR_15)) {
    VAR_14 = -VAR_0;
    goto out_free_options;
   }
   *VAR_7 = VAR_15;
   break;
  default:
   FUNC_4("unknown parameter or missing value '%s'\n", VAR_12);
   VAR_14 = -VAR_0;
   goto out_free_options;
  }
 }

out_free_options:
 FUNC_0(VAR_10);

 if (!VAR_14) {
  if (*VAR_6 == -1)
   return -VAR_0;
  if (*VAR_7 == -1)
   return -VAR_0;
 }

 return VAR_14;
}
