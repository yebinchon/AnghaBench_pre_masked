
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef enum pkey_key_size { ____Placeholder_pkey_key_size } pkey_key_size ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int ,char*,size_t*) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(enum pkey_key_size VAR_2,
         bool VAR_3, char *VAR_4, loff_t VAR_5,
         size_t VAR_6)
{
 size_t VAR_7;
 int VAR_8;

 if (VAR_5 != 0 || VAR_6 < VAR_0)
  return -VAR_1;
 if (VAR_3)
  if (VAR_6 < 2 * VAR_0)
   return -VAR_1;

 VAR_7 = VAR_0;
 VAR_8 = FUNC_0(-1, -1, VAR_2, 0, VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;
 FUNC_1(VAR_4 + VAR_7, 0, VAR_0 - VAR_7);

 if (VAR_3) {
  VAR_7 = VAR_0;
  VAR_8 = FUNC_0(-1, -1, VAR_2, 0,
          VAR_4 + VAR_0, &VAR_7);
  if (VAR_8)
   return VAR_8;
  FUNC_1(VAR_4 + VAR_0 + VAR_7, 0,
         VAR_0 - VAR_7);

  return 2 * VAR_0;
 }

 return VAR_0;
}
