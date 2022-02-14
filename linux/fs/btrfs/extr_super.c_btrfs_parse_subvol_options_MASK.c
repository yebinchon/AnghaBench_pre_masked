
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, char **VAR_6,
  u64 *VAR_7)
{
 substring_t VAR_8[VAR_3];
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = 0;
 u64 VAR_13;

 if (!VAR_5)
  return 0;





 VAR_9 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_10 = VAR_9;

 while ((VAR_11 = FUNC_6(&VAR_9, ",")) != ((void*)0)) {
  int VAR_14;
  if (!*VAR_11)
   continue;

  VAR_14 = FUNC_3(VAR_11, VAR_4, VAR_8);
  switch (VAR_14) {
  case 130:
   FUNC_0(*VAR_6);
   *VAR_6 = FUNC_2(&VAR_8[0]);
   if (!*VAR_6) {
    VAR_12 = -VAR_1;
    goto out;
   }
   break;
  case 129:
   VAR_12 = FUNC_4(&VAR_8[0], &VAR_13);
   if (VAR_12)
    goto out;


   if (VAR_13 == 0)
    VAR_13 = VAR_0;

   *VAR_7 = VAR_13;
   break;
  case 128:
   FUNC_5("BTRFS: 'subvolrootid' mount option is deprecated and has no effect\n");
   break;
  default:
   break;
  }
 }

out:
 FUNC_0(VAR_10);
 return VAR_12;
}
