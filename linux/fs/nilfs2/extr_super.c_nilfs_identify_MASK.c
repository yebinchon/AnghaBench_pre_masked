
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct nilfs_super_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,int *,struct nilfs_super_data*) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct nilfs_super_data *VAR_4)
{
 char *VAR_5, *VAR_6 = VAR_3;
 substring_t VAR_7[VAR_0];
 int VAR_8;
 int VAR_9 = 0;

 do {
  VAR_5 = FUNC_3(&VAR_6, ",");
  if (VAR_5 != ((void*)0) && *VAR_5) {
   VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_7);
   if (VAR_8 == VAR_1)
    VAR_9 = FUNC_2(VAR_5, &VAR_7[0],
          VAR_4);
  }
  if (!VAR_6)
   break;
  FUNC_0(VAR_6 == VAR_3);
  *(VAR_6 - 1) = ',';
 } while (!VAR_9);
 return VAR_9;
}
